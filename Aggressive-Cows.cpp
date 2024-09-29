#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> stalls ={1,2,4,10,8,9};
    int k=3;
    int n=stalls.size();
    sort(stalls.begin(),stalls.end());
      int ans=0;
      int l=1;
      int h=stalls[n-1]-stalls[0];
      while(l<=h){
          int mid=l+(h-l)/2;
          int count=1;
          int stoles=stalls[0];
          for(int i=0;i<n;i++){
              if(stoles+mid<=stalls[i]){
                  count++;
                  stoles=stalls[i];
              }
          }
          if(count<k) h=mid-1;
          else{
              ans=mid;
              l=mid+1;
          }
      }
      cout<<ans;
}