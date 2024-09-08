#include<bits/stdc++.h>
using namespace std;
bool find(vector<int> nums,int trg){
        int l=0;
        int h=nums.size()-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==trg){
                return true;
            }
            else if(nums[mid]<trg){
                l=mid+1;
            }
            else h=mid-1;
        }
        return false;
    }
int main(){
    vector<int> nums={2,3,4,7,11};
    int k=5;
    int i=0;
    int j=1;
    while(i<k){
        if(!find(nums,j)){
            i++;
        }
        j++;
    }
    cout<<j-1;
}