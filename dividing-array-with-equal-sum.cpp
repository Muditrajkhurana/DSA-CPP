#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={3,4,-2,5,8,20,-10,8};
    vector<int> prefix(nums.size());
    prefix[0]=nums[0];
    for(int i=1;i<nums.size();i++){
        prefix[i]=prefix[i-1]+nums[i];
    }
    int max=prefix[nums.size()-1];
    for(int i=0;i<nums.size();i++){
        if(prefix[i]==max-prefix[i]){
            cout<<"yes";
        }
    }
}