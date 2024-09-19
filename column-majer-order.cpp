#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4][3]={{1,2,3},
                    {4,5,6},
                    {7,8,9},
                    {10,11,12}};
    vector<int>ans;
    for(int j=0;j<3;j++){
        for(int i=0;i<4;i++){
            ans.push_back(arr[i][j]);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}