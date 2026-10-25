#include <stdio.h>
int add(int a,int b,int *r){*r=a+b; return 1;}
int subtract(int a,int b,int *r){*r=a-b; return 1;}
int multiply(int a,int b,int *r){*r=a*b; return 1;}
int divide(int a,int b,int *r){if(b==0) return 0; *r=a/b; return 1;}

int main(){
    int (*ops[])(int,int,int*)={add,subtract,multiply,divide};
    int ch,a,b,res;
    while(1){
        printf("Choice (1-5): ");
        scanf("%d",&ch);
        if(ch==5){printf("Goodbye.\n"); break;}
        if(ch<1||ch>5){printf("Invalid choice\n"); continue;}
        printf("Enter a and b: ");
        scanf("%d %d",&a,&b);
        if(ops[ch-1](a,b,&res))
            printf("Result: %d\n",res);
        else
            printf("Error: division by zero\n");
    }
    return 0;
}