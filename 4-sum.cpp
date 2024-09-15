#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={1,0,-1,0,-2,2};
    sort(nums.begin(),nums.end());
    int targete=0;
    vector<vector<int>>answer;
    for(int j=0;j<nums.size();j++){
            if (j >0 && nums[j] == nums[j-1]){
                continue;
            }
            for (int i = j+1; i < nums.size(); i++)
          {
            if(i!=(j+1)&&nums[i]==nums[i-1]) continue;

            int left = i+1;
            int right = nums.size() - 1;
            while (left < right)
            {
                long long sum=nums[i];
                    sum+=nums[j];
                    sum+=nums[left];
                    sum+=nums[right];
                if (sum == targete)
                {
                    answer.push_back({nums[j],nums[i], nums[left], nums[right]});
                    left++;
                    right--;

                    while (left < right && nums[left] == nums[left - 1])
                        left++;
                    while (left < right && nums[right] == nums[right + 1])
                        right--;
                }
                else if(sum < targete)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }
        }
    cout<<answer.size();

}