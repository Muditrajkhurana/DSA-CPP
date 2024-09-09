#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums ={4,5,6,7,0,1,2};
    int target=0;
    int ans=-1;
    int l=0;
    int h=nums.size()-1;
    while(l<=h){
        int mid=l+(h-l)/2;
            if(nums[mid]==target){
                ans=mid;
                break;
            }
            else if(nums[mid]>=nums[0]){
                if(nums[l]<=target&&target<=nums[mid]){
                    h=mid-1;
                }
                else l=mid+1;
            }
        else {
            if(nums[mid]<=target&&target<=nums[h]){
                l=mid+1;
            }
            else h=mid-1;
        }
    }
    cout<<ans;
}