
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    printf("Enter The Character: ");
    scanf(" %c",&ch);

    if( ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' ) {
        printf("\nCharacter is Alphabet !\n");
    }
    else if( ch >= '0' && ch <= '9' ) {
        printf("\nCharacter is Number !\n");
    }
    else printf("\nSpecial character !\n");

    return 0;
}
