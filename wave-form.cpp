#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> nums={{3,6,4,2},
                               {7,8,11,5},
                               {9,3,2,1},
                               {17,8,5,9}};
    vector<int>ans;
    int max_row=nums.size();
    int max_col=nums[0].size();
    int row;
    int col=0;
    while(ans.size()<max_row*max_col){
        for(row=0;row<max_row;row++){
            ans.push_back(nums[row][col]);
        }
        col++;
        for(row=max_row-1;row>=0;row--){
            ans.push_back(nums[row][col]);
        }
        col++;
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}