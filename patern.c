#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            printf("  ");
        }
        for(int k=0;k<=2*i;k++){
            printf("%c ",65+k);
        }
        printf("\n");
    }
    for(int i=n-2;i>=0;i--){
        for(int j=i+1;j<n;j++){
            printf("  ");
        }
        for(int k=0;k<=2*i;k++){
            printf("%c ",65+k);
        }
        printf("\n");
    }

}