#include<bits/stdc++.h>
using namespace std;
int binery(vector<int> nums ,int trg){
    int l=0;
    int h=nums.size()-1;
    int mid=(h-l)/2+l;
    while(l<=h){
        if(nums[mid]==trg){
            return mid;
        }
        else if(nums[mid]<trg) l=mid+1;
        else h=mid-1;
        mid=l+(h-l)/2;
    }
    return -1;
}
int main(){
    vector<int> nums={2,4,5,7,11,17,18,19,23,26,30,45};
    int trg=23;
    int ans=binery(nums,trg);
    if(ans>=0){
        cout<<"number is present on "<<ans<<" index";
    }
    else{
        cout<<"not present";
    }
}