class Solution {
public:
    bool isValid(string s) {
        string strDuplicate = s;
        int deleteCount = 0;

        for (int i = 0; i<s.size(); i++) {
            switch (s[i]) {
                case '(':
                case '[':
                case '{':
                    break;

                case ')':
                case ']':
                case '}':
                    //checks if prior is null
                    if ((i-deleteCount)<=0){
                        //cout<<"error: unexpected closing bracket or prior is null"<<endl;
                        return false;
                    }
                    
                    //checks for pairs, deletes pairs from strDuplicate
                    if ( (strDuplicate[i-1-deleteCount] == '(') && (s[i] == ')') ) {
                        //erases () pairs
                        strDuplicate.erase(i-1-deleteCount,2);
                        deleteCount+=2;
                    } else if ( (strDuplicate[i-1-deleteCount] == '[') && (s[i] == ']') ) {
                        //erases [] pairs
                        strDuplicate.erase(i-1-deleteCount,2);
                        deleteCount+=2;
                    } else if ( (strDuplicate[i-1-deleteCount] == '{') && (s[i] == '}') ) {
                        //erases {} pairs
                        strDuplicate.erase(i-1-deleteCount,2);
                        deleteCount+=2;
                    } else {
                        //cout<<"error: unexpected closing bracket"<<endl;
                        return false;
                    }
                    break;
                
                default:
                    //cout<<"error: unexpected character in string"<<endl;
                    return false;
                    break;
            }
        }
        //checks for unclosed parantheses
        return (strDuplicate.empty());
    }
};
