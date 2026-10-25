#include <stdio.h>

// grid print
void printGrid(int (*g)[5]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",g[i][j]);
        }
        printf("\n");
    }
}

int countNeighbours(int (*g)[5],int r,int c){
    int c1=0;
    for(int i=r-1;i<=r+1;i++){
        for(int j=c-1;j<=c+1;j++){
            if(i==r && j==c) continue;
            if(i>=0 && i<5 && j>=0 && j<5){
                if(g[i][j] % 2 == 1) c1++;
            }
        }
    }
    return c1;
}

void nextGeneration(int (*g)[5]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int n = countNeighbours(g,i,j);
            if(g[i][j] % 2 == 1){
                if(n==2 || n==3) g[i][j] = 3;
            }else{
                if(n==3) g[i][j] = 2;
            }
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            g[i][j] = g[i][j] / 2;
        }
    }
}

int main(){
    int g[5][5]={0};
    g[1][2]=1;
    g[2][2]=1;
    g[3][2]=1;

    int gen;
    printf("Enter number of generations (0-50): ");
    scanf("%d",&gen);

    if(gen<0 || gen>50){
        printf("Invalid number\n");
        return 0;
    }

    for(int k=0;k<=gen;k++){
        printf("Generation %d:\n",k);
        printGrid(g);
        printf("\n");
        nextGeneration(g);
    }
}