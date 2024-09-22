#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> nums={{1,2,3,4,5,6},
                            {7,8,9,10,11,12},
                            {13,14,15,16,17,18},
                            {19,20,21,22,23,24},
                            {25,26,27,28,29,30},
                            {31,32,33,34,35,36}};
    int max_row=nums.size()-1;
    int max_col=nums[0].size()-1;
    int row=0;
    int col=0;
    vector<int>ans;
    while(row <= max_row && col <= max_col){
        for(int i=col;i<=max_col;i++){
            ans.push_back(nums[row][i]);
        }
        row++;
        for(int i=row;i<=max_row;i++){
            ans.push_back(nums[i][max_col]);
        }
        max_col--;
        if(row<=max_row){
            for(int i=max_col;i>=col;i--){
            ans.push_back(nums[max_row][i]);
        }
        max_row--;
        }
        if(col<=max_col){
            for(int i=max_row;i>=row;i++){
            ans.push_back(nums[i][col]);
        }
        col++;
        }
        cout<<ans.size();
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}


   