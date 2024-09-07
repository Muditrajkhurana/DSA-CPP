#include<bits/stdc++.h>
using namespace std;
int firstuc(vector<int> nums,int trg){
        int l=0;
        int h=nums.size()-1;
        int ans=-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==trg){
                ans=mid;
                h=mid-1;
            }
            else if(nums[mid]>trg){
                h=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
int lastuc(vector<int> nums,int trg){
        int l=0;
        int h=nums.size()-1;
        int ans=-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==trg){
                ans=mid;
                l=mid+1;
            }
            else if(nums[mid]>trg){
                h=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
int main(){
    vector<int>nums={5,7,7,8,8,10};
    int trg=8;
    int first=firstuc(nums,trg);
    int last=lastuc(nums,trg);
    vector<int> ans={first,last};
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}