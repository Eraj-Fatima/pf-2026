#include<stdio.h>
#include<string.h>
int main(){
char firstname[50];
char lastname[50];
char fullname[100];
puts("enter your first name:");
scanf("%s",& firstname);
puts("enter your last name:");
scanf("%s",& lastname);

strcpy(fullname,firstname);
strcat(fullname," ");
strcat(fullname, lastname);

printf("full name: %s", fullname);
return 0;
}