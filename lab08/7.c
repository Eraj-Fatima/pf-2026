#include<stdio.h>
int main(){
    int n;
    start:
    printf("enter number of songs: \n");
    scanf("%d", & n);
    if(n<1 || n>20){
        printf("invalid number.\n");
        goto start;
    }
    int arr[n];
    for(int i=1; i<=n; i++){
        printf(" enter song id:\n");
        scanf("%d", & arr[i]);
    }
    //original
    printf("original:\n");
    for(int i=1; i<=n; i++){
        printf("%d\t",arr[i]);
    }
    //reverse
    printf("\nreverse:\n");
    for(int i=n; i>=1; i--){
        printf("%d\t",arr[i]);
    }
}


