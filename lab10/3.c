#include<stdio.h>
#include<string.h>
int main(){
      char pwd1[40]="lab10pass";
char pwd2[50];
printf("enter password:\n");
scanf("%s", pwd2);
if(strcmp(pwd1,pwd2)==0){
    printf("access granted.\n");
}
else{
    printf("access denied.\n");
}

if(strncmp(pwd1,pwd2,3)==0){
    printf("first 3 characters match.\n");
}
else{
     printf("first 3 characters are not match.\n");
}
return 0;
}