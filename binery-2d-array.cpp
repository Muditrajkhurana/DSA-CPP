#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4][5]={{2,6,10,14,18},
                {20,24,27,28,38},
                {47,52,78,93,104},
                {121,122,123,124,125}};
    int trg=52;
    int l=0;
    int h=4*5-1;
    while(l<h){
        int mid=l+(h-l)/2;
        int row=mid/5;
        int col=mid%5;
        if(arr[row][col]==trg){
            cout<<"Element found at position "<<row+1<<" "<<col+1<<endl;
            break;
        }
        if(arr[row][col]<trg){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }

}