#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={7,4,2,3,5,1};
    for(int i=0;i<nums.size()-1;i++){
        for(int j=1;j<nums.size();j++){
            if(nums[j-1]>nums[j]){
                swap(nums[j-1],nums[j]);
            }
        }
    }
    for(int j=0;j<nums.size();j++){
        cout<<nums[j]<<" ";
    }
}