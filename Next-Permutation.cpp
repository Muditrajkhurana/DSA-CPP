#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={1,1,5};
    int n=nums.size();
        int index=-1;
        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                index=i-1;
                break;
            }
        }
        if(index !=-1){
            int swap_index=index;
            for(int i=n-1;i>=index+1;i--){
                if(nums[i]>nums[index]){
                    swap_index=i;
                    break;
                }
            }
            swap(nums[index],nums[swap_index]);
        }
        reverse(nums.begin()+index+1,nums.end());
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}