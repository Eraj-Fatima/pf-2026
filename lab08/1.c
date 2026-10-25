  #include<stdio.h>
  void bubblesort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
  }

  void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
  }
  int main(){
    int n;
    start:
    printf("\nenter number of scores:");
    scanf("%d", &n);
    if(n<1 || n>20){
printf("invalid size");
goto start;
    }
  int arr[20];
    
    for(int i=0; i<n; i++){
        printf("enter scores:\n");
        scanf("%d\n", &arr[i]);
    }

  printf("before sorting:");
  printarray(arr, n);
  bubblesort(arr, n);

  printf("\nafter sorting:");
  printarray(arr, n);
  return 0;
}