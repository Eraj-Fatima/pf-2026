#include<stdio.h>
#include<string.h>
int main(){
    char cities[5][15];
    int longest=0;
    int maxlen=0;

    for(int i=0; i<5; i++){
printf("enter the name of city:\n");
fgets(cities[i],15,stdin);
    }
    printf("\n");
printf("all the names:\n");
    for(int i=0; i<5; i++){
        printf("%s",cities[i]);
    }
printf("\n");
    for(int i=0; i<5; i++){
        if(strlen(cities[i])> maxlen){
            maxlen= strlen(cities[i]);
            longest =i;
        }
    }

    printf("%s is the longest name city having length of %d", cities[longest],maxlen);
    return 0;
}