#include<bits/stdc++.h>
using namespace std;
char *movehash(char str[], int n){
    char str1[100];
    char str2[100];
    for(int i=0; i<'\0'; i++){
            if(str[i]=='#'){
                str1[i]=str[i];
            }
            else{
                str2[i]=str[i];
            }
    }
    strcat(str1,str2);
    cout<<str1;
    return str1;
    }

    int main()
{
    char a[100], len;
    cin>>a;

    len = strlen(a);
    movehash(a, len);
    return 0;
}

