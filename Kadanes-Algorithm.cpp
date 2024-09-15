#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={-1, -2, -3, -4};
    int maxe=nums[0];
    int prefix=0;
    for(int i=0;i<nums.size();i++){
        prefix+=nums[i];
        maxe=max(prefix,maxe);
        if(prefix<0){
            prefix=0;
        }
    }
    cout<<maxe<<endl;
}