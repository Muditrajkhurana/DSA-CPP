#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> nums={{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    int prev_start = nums[0][0];
    int prev_end =nums[0][1];
    for(int i=1;i<nums.size();i++){
        int curunt_start=nums[i][0];
        int curunt_end=nums[i][1];
        if(curunt_start<=prev_end){
            prev_end=max(curunt_end,prev_end);
        }
        else{
            ans.push_back({prev_start,prev_end});
            prev_start=curunt_start;
            prev_end=curunt_end;
        } 
    }
    ans.push_back({prev_start,prev_end});
    for(int i=0;i<ans.size();i++){
        cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    }
}