
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int v = 0, c = 0, n = 0, w = 0;

    for(int i=0; i<str.size(); i++) {
        if( str[i] == ' ') {
            w++;
        }
        else if ( str[i] >= '0' && str[i] <= '9' ) {
            n++;
        }
        else if( str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z') {

            if( str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
                v++;
            }
            else if( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
                v++;
            }
            else c++;
        }
    }
    printf("Vowel: %d\n", v);
    printf("Consonant: %d\n", c);
    printf("Number: %d\n", n);
    printf("White Space: %d\n", w);

    return 0;
}
