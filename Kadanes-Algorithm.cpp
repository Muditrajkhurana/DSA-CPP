#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={1, 2, 3, -2, 5};
    int maxe=nums[0];
    for(int i=0;i<nums.size();i++){
        int prefix=0;
        for(int j=i;j<nums.size();j++){
            prefix+=nums[j];
            maxe=max(prefix,maxe);
        }
    }
    cout<<maxe;
}