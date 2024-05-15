class Solution {
public:
    int romanToInt(string& s) {
        //initialize actual value counter of roman string
        int value = 0;
        
        //initialize counters of letters
        int countI = 0;
        int countX = 0;
        int countC = 0;
        
        //loop runs for string "s" length to check each char
        for (int i=0;s[i];i++) {
            switch(s[i]) {
                case 'I':
                    countI ++;
                    value ++;
                    break;

                case 'V':
                    if (countI == 1)
                        value += 3;
                    else
                        value += 5;
                    break;

                case 'X':
                    countX ++;
                    if (countI == 1)
                        value += 8;
                    else
                        value += 10;
                    break;

                case 'L':
                    if (countX == 1)
                        value += 30;
                    else
                        value += 50;
                    break;

                case 'C':
                    countC ++;
                    if (countX == 1)
                        value += 80;
                    else
                        value += 100;
                    break;

                case 'D':
                    if (countC == 1)
                        value += 300;
                    else
                        value += 500;
                    break;

                case 'M':
                    if (countC == 1)
                        value += 800;
                    else
                        value += 1000;
                    break;

                default:
                    cout<<"\'s\' must consist of values in [\'I\', \'V\', \'X\', \'L\', \'C\', \'D\', \'M\'] only";
                    break;
            }
        }

        return value;
    }
};
