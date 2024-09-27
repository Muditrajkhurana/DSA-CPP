
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={1,4,6,8,10,45};
    sort(nums.begin(),nums.end());
    int targete=13;
    int ans=0;
    for(int i=0;i<nums.size()-2;i++){
        int find=targete-nums[i];
        int l=i+1;
        int h=nums.size()-1;
        while(l<h){
            if(nums[l]+nums[h]==find){
                ans++;
                break;
            }
            else if(nums[l]+nums[h]>find){
                h--;
            }
            else{
                l++;
            }
        }
    }
    cout<<ans;

}