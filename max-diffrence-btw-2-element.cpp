#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={9,5,8,12,2,3,7,4};
    int maxe=INT_MIN;
    int sufix=arr[arr.size()-1];
    for(int i=arr.size()-1;i>0;i--){
        sufix=max(sufix,arr[i]);
        maxe=max(maxe,sufix-arr[i-1]);
    }
    cout<<maxe;
}