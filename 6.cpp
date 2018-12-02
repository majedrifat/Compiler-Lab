//8.Write a program that will take a line as input and print the line with removing extra space.

#include <bits/stdc++.h>

using namespace std;

int main ()
{
    string str;
    getline(cin , str);
    char curr;
    for (int i = 0; i < str.size(); i++){
        if (curr == ' ' && str[i] == ' '){
            continue;
        }
        else{
            curr = str[i];
            cout << str[i];
        }
    }
    cout << endl;

    return 0;
}
