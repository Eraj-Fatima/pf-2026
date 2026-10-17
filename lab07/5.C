#include <stdio.h>
int main(){
    int a[3][3][3], k,i,j, k1,k2, same;
    printf("Enter 27 values:\n");
    for(k=0;k<3;k++) for(i=0;i<3;i++) for(j=0;j<3;j++) scanf("%d",&a[k][i][j]);
    
    for(k1=0;k1<3;k1++){
        for(k2=k1+1;k2<3;k2++){
            same=1;
            for(i=0;i<3;i++) for(j=0;j<3;j++) if(a[k1][i][j]!=a[k2][i][j]) same=0;
            if(same) printf("Layer %d and %d IDENTICAL\n",k1,k2);
            else printf("Layer %d and %d DISTINCT\n",k1,k2);
        }
    }
    return 0;
}