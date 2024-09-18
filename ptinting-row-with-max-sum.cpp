#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5][4]={{3,4,7,8},
                   {2,8,3,9},
                   {5,4,2,2},
                   {7,3,0,8},
                   {2,8,9,1}};

    int sum=INT_MIN;
    int index=-1;
    for(int i=0;i<5;i++){
        int row_sum=0;
        for(int j=0;j<4;j++){
            row_sum+=arr[i][j];
        }
        if(sum<row_sum){
            sum=row_sum;
            index=i+1;
        }
    }
    cout<<index<<" Row Has max sum "<<sum<<endl;
}