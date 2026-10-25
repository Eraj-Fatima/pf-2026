#include<stdio.h>
void computeTotals(int (*marks)[3], int rows, int totals[]){
    for(int i=0; i<rows; i++){
        totals[i] =0;
        for(int j=0; j<3; j++){
            totals[i] = totals[i] + *(*(marks +i) + j);
        }
    }
}
int findtopper(const int*totals, int rows)
{
    int top=0;
    for(int i=1; i<rows; i++){
        if(*(totals + i) > *(totals + top)){
            top=i;
        }
    }
    return top;
}

int main(){
    int marks[3][3];
    int totals[3];

    for(int i=0; i<3; i++){
        printf("enter marks for student %d(3 subjects):", i+1);
        for(int j=0; j<3; j++){
            scanf("%d", &marks[i][j]);

        }
    }
    computeTotals(marks, 3, totals);
    for(int i=0; i<3; i++){
        printf("total for student %d: %d\n", i+1, totals[i]);
    }
    int topper = findtopper(totals,3);
    printf("students %d is the topper with total %d\n", topper+1, totals[topper]);
    return 0;
}