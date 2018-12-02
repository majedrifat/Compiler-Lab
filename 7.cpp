#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, ans1, ans2;
    int f = 0, f2 = 0, f3 = 0;
    getline(cin , str);

    for(int i=0; i<str.size(); i++) {
        if( str[i] == '/' && str[i+1] == '/' && !f ) {
            f  = 1, i+=1;
            continue;
        }
        if( f ) ans1 += str[i];
    }

    for(int i=0; i<str.size(); i++) {

        if( str[i] == '/' && str[i+1] == '*' && !f2 )  {
            f2  = 1, i+=1;
            continue;
        }
        if( f2 )
        {
            if( str[i] == '*' && str[i+1] == '/' ) {
                i+=1; f3 = 1;
                continue;
            }
            ans2 += str[i];
        }
    }

    if( ans1.size() ) cout << "Single Line Comment found" << endl;
    else if( ans2.size() && f3 ) cout << "Multi Line Comment found" << endl;
    else cout << "No Comment found !" << endl;

    return 0;
}
