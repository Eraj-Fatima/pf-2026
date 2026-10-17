#include<stdio.h>
int main()
{
    int a[3][3];// tran[3][3], cofactor[3][3], adjoint[3][3];
    //float inverse[3][3];
    int i,j;
    
    printf("enter 3x3 matrix: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }printf("\n");
    }
 printf("\n original matrix\n");
 for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        printf("%d", a[i][j]);
    }
    printf("\n");
 }
// transporse
printf("\n original matrix\n");
 for(j=0; j<3; j++){
    for(i=0; i<3; i++){
        printf("%d", a[i][j]);
    }
    printf("\n");
 }
 return 0;
}