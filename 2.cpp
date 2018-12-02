#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    for(int i=0; i<str.size(); i++) {
        if(str[i] == ' ' && str[i+1] == ' ') {
            continue;
        }
        else if(str[i] == ' ') {
            printf("\n");
        }
        else {
            printf("%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}
