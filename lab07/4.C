#include<stdio.h>
int main(){
    int a[3][3][3], k, i,j , sum, total=0;
    printf("enter 27 values: \n");
    for(k=0; k<3; k++){
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                scanf("%d",&a[k][i][j]);
            }
        }
    }
    for(k=0; k<3; k++){
        sum=0;
        printf(" \n layer %d: \n",k);
        for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d", a[k][i][j]);
            sum +=a[k][i][j];
        }
        printf("\n");
    }
    printf("total layers %d = %d\n",k,sum);
    total +=sum;
}
printf("\noverall total= %d\n",total);
return 0;
}