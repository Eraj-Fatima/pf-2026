#include <stdio.h>
int sumShelf(const int *shelf, int count){
    int s=0;
    for(int i=0;i<count;i++) s+=*(shelf+i);
    return s;
}
int findLargestShelf(const int *counts, int shelves){
    int m=0;
    for(int i=1;i<shelves;i++) if(counts[i]>counts[m]) m=i;
    return m;
}
int main(){
    int shelfA[]={101,102,103};
    int shelfB[]={201,202};
    int shelfC[]={301,302,303,304};
    int *shelves[]={shelfA,shelfB,shelfC};
    int counts[]={3,2,4};
    for(int i=0;i<3;i++)
        printf("Shelf %d ID total: %d\n",i+1,sumShelf(shelves[i],counts[i]));
    int t=findLargestShelf(counts,3);
    printf("Shelf with the most books: Shelf %d (%d books)\n",t+1,counts[t]);
    return 0;
}