class Solution {
public:
    string addString (string a,string& b,int& aa,int& bb) {
        int c = 0;
        while (aa>=0) {
            c += a[aa--]-'0';
            c += bb>=0 ? b[bb--]-'0' : 0;
            switch (c) {
                case 0:
                    cout<<' '<<0;
                    break;
                case 1:
                    cout<<' '<<1;
                    a[aa+1] = '1';
                    c=0;
                    break;
                case 2:
                    cout<<' '<<2;
                    a[aa+1] = '0';
                    c=1;
                    break;
                case 3:
                    cout<<' '<<3;
                    a[aa+1] = '1';
                    c=1;
                    break;
                default:
                    cout<<"ERR"<<endl;
                    return "";
            }
            cout<<endl;
        }
        /*
        switch (c) {
            case 0:
                cout<<' '<<0;
                break;
            case 1:
                cout<<' '<<1;
                a.insert(0,1,'1');
                break;
            case 2:
                cout<<' '<<2;
                a.insert(0,1,'0');
                a.insert(0,1,'1');
                break;
            case 3:
                cout<<' '<<3;
                a.insert(0,1,'1');
                a.insert(0,1,'1');
                break;
            default:
                cout<<"ERR"<<endl;
                return "";
        }
        */
        if (c) {a.insert(0,1,'1');}
        return a;
    }
    string addBinary (string& a, string& b) {
        int aa=a.size()-1, bb=b.size()-1;
        if (aa>=bb) {
            return addString(a,b,aa,bb);
        }
        return addString(b,a,bb,aa);
    }
};
