// #include<bits/stdc++.h>
// using namespace std;


// bool isSteppingNumbers(int n){
//     int digit = n%10;
//     n/=10;
//     while(n>0){
//         int nextDigit = n%10;
//         if(abs(digit-nextDigit)!=1){
//         return false;
//         }
//         digit = nextDigit;
//         n = n/10;


//     }
//     return true;
// }

// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<int>ans;
//     for(int i=n; i<=m; i++)
//     {
//         if(isSteppingNumbers(i))
//         ans.push_back(i);
//     }

//     for(int i=0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }
// }


//optimized approach

#include<bits/stdc++.h>
using namespace std;

vector<int>bfsSteppingNumber(int n, int m){
    queue<int>q;
    vector<int>result;
    if(n==0)
    result.push_back(0);
    for(int i=1; i<=9; i++){
        q.push(i);
    }

    //performing bfs

    while(!q.empty()){
        int stepNum = q.front();
        q.pop();
        if(stepNum>=n && stepNum<=m){
            result.push_back(stepNum);
            }
            if(stepNum > m)
            continue;
            int lastDigit = stepNum % 10;
            if(lastDigit >0){
                int nextStepNum = stepNum*10 + (lastDigit -1);
                if(nextStepNum <= m)
                q.push(nextStepNum);
            }
            if(lastDigit < 9){
                int nextStepNum = stepNum*10 + (lastDigit + 1);
                if(nextStepNum <= m)
                q.push(nextStepNum);
            }
    
    }
    return result;
}

int main(){
    int n,m;
    cin>>n>>m;  
    vector<int>ans = bfsSteppingNumber(n,m);

    for(int num : ans){
        cout<<num<<" ";
    }
}