#include<stdio.h>
#include<string.h>
int main(){
    char sen[100];
    printf("enter a sentence:\n");
    fgets(sen,100, stdin);
    strchr( sen,'a');
    printf("first 'a' is at index %d .\n",strchr(sen,'a')-sen);

   if(strstr(sen, "good")!= NULL){
printf("word 'good' is found.");
   }
   else{
    printf("good is not found.");
   }
return 0;
}