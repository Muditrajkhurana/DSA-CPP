#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={12, 34, 67, 90};
    int m=2;
    int sum=0;
    int max=nums[0];
    for(int i=0;i<nums.size();i++){
        if(nums[i]>max){
            max=nums[i];
        }
        sum+=nums[i];
    }
    int ans=-1;
    int l=max;
    int h=sum;
    while(l<=h){
        int mid=l+(h-l)/2;
        int pages=0;
        int count=1;
        for(int i=0;i<nums.size();i++){
            pages+=nums[i];
            if(pages>mid){
                count++;
                pages=nums[i];
            }
        }
        if(count<=m){
            ans=mid;
            h=mid-1;
        }
        else l=mid+1;
    }
    if(m>nums.size()) ans=-1;
    cout<<ans;
}