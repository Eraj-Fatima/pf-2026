#include<stdio.h>
int isvalidmarks(int m){
    if(m>=0 && m<=100){
    return 1;;
    }else {
        return 0;
    }
    }

void MinMax(int arr[], int size, int *min, int *max){
    *min= arr[0];
    *max= arr[0];
    for(int i=1; i<size; i++){
        if(arr[i]< *min)
        *min= arr[i];
        if(arr[i]>*max)
        *max= arr[i];
    }
}
    
int main(){
    int marks[5];
    for(int i=0; i<5;){
        printf("enter marks %d:", i+1);
        scanf("%d", &marks[i]);
        if(isvalidmarks(marks[i]) == 0){
            printf("invalid marks, enter again\n");
        }else{
            i++;
        }}
        int min, max;
   MinMax(marks, 5, &min, &max);
   printf("lowest marks: %d\n", min);
   printf("highest marks: %d\n", max);
    return 0;
}