#include<bits/stdc++.h>
using namespace std;
int find(vector<int> nums,int trg){
    int l=0;
    int h=nums.size()-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(nums[mid]==trg){
            return mid;
        }
        else if(nums[mid]>trg){
            h=mid-1;
        }
        else l=mid+1;
    }
    return l;
}
int main(){
    vector<int> nums ={1,3,5,6};
    int trg=2;
    int ans=find(nums,trg);
    cout<<ans;
}