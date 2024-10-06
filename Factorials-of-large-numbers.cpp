#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> ans(1,1);
    int N=50;
        while(N>1){
            int cary=0;
            int size=ans.size();
            for(int i=0;i<size;i++){
                int a=ans[i]*N+cary;
                cary=a/10;
                ans[i]=a%10;
            }
            while(cary){
                ans.push_back(cary%10);
                cary=cary/10;
            }
            N--;
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
}