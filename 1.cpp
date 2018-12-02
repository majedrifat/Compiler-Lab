 #include <bits/stdc++.h>
using namespace std;
int main ()
{
string str1;
getline(cin, str1);
string str2 = "";
for (int i = 0 ; i < str1.size(); i++){
if (str1[i] == ' ')
{
 cout << str2 << endl;
str2 = "";
}
else{
str2 += str1[i];
}
}
cout << str2 << endl;
return 0;
}
