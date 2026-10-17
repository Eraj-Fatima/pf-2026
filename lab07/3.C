// multiplication of matrices
#include<stdio.h>
int main()
{
int a[3][2]={{1,2},{5,6},{7,8}};
int b[2][4]={{2,2,4,3},{1,9,2,1}};
int res[3][4];
// multiplying
int rc=2;
for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
      res[i][j]=0; // k is identity element
      for(int k=0;k<rc; k++)  {
        res[i][j] += a[i][k]* b[k][j];
    }
      }
    }
    // print no
for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
     printf("%d\t", res[i][j]);
      }
      printf("\n");
    }

return 0;
}