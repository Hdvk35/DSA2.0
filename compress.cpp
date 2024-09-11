#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n= s.length();
    char str[100];
    int i,j,k=0,count =0;
    for(i=0;i<n;i++){
        count =0;
        for(int j=0; j<=i; j++){
            if(s[i]==s[j]){
                count++;
            }
        }
        if(count==1){
            str[k]=s[i];
            k++;
        }
      
    }
    for(i=0; i<k; i++)
    {
        for(j=0; j<'\0'; j++){
            if(str[i]==s[j]){
                count++;
                }
                }

                if(count==1){
                    cout<<str[i];
                }
                else
                cout<<str[i]<<count;
        }
    }
