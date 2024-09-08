#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int ans=0;
    int l=0;
    int h=x;
    while(l<h){
        int mid=l+(h-l)/2;
        if(mid==x/mid){
            ans=mid;
            break;
        }
        else if(mid<x/mid){
            ans=mid;
            l=mid+1;
        }
        else h=mid-1;
    }
    if(x<2){
        ans=x;
    }
    cout<<ans;
}