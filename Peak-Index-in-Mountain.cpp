#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={0,10,5,2};
    int l=0;
    int h=nums.size()-1;
    while(l<=h){
        int mid=h+(l-h)/2;
        if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1]){
            cout<<mid;
            break;
        }
        else if(nums[mid]>nums[mid-1]) l=mid+1;
        else h=mid-1;
    }
}