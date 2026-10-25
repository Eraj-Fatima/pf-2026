#include<stdio.h>
void swap(int *a,int *b){
    int temp= *a;
    *a= *b;
    *b=temp;
    printf("A=%d, B=%d",*a,*b);
}
int main(){
    int a,b;
 printf("enter a:");
 scanf("%d", &a);
 printf("enter b:");
 scanf("%d", &b);
printf("before swap:\n");
printf("A=%d,",a);
printf("B=%d\n",b);
printf("after swap:\n");
swap(&a, &b);

return 0;
}

