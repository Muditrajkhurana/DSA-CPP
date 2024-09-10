#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums ={0, 0, 1, 1, 0};
    int i=0;
    int j=nums.size()-1;
    while(i<=j){
        if(nums[i]==0) i++;
        else if(nums[j]==1) j--;
        else{
            swap(nums[i],nums[j]);
            i++;j--;
        }
    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}