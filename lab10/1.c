#include<stdio.h>
#include<string.h>
int main(){
    char name[50];
    char copy[50];
    puts("enter your name:");
    fgets(name,50, stdin);
    printf("length: %d\n", strlen(name)-1);
    strcpy(copy,name);
  printf("copied name: %s",copy);
  printf("size: %d\n", sizeof(name));
    return 0;
}