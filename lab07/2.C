#include<stdio.h>
int main(){
    int a[5][5], r,c,i,j;
printf("enter no of rows and columns:\n");
scanf("%d%d", &r, &c);
printf("enter matrix: \n");
for(i=0; i<r; i++){
    for(j=0; j<c; j++){
        scanf("%d", &a[i][j]);
    }
}

if(r==c){
    printf("square matrix\n");
}
if(r==1){
    printf("row matix");
}
if(c==1){
    printf("column matix");
}
int zero=1, identity=1, diag=1, upper=1, low=1,sym=1;
for(i=0; i<r; i++){
    for(j=0; j<c; j++){
        if(a[i][j]!=0){
            zero=0;
        }
        if(r==c){
            if(i==j && a[i][j]!=1) 
            {
                identity=0;
            }
            if(i!=j && a[i][j]!=0) 
            {
                identity=0;
            }
            if(i!=j && a[i][j]!=0) 
            {
                diag=0;
            }
            if(i>j && a[i][j]!=0) 
            {
                upper=0;
            }
            if(i<j && a[i][j]!=0) 
            {
                low=0;
            }
            if(a[i][j]!=a[i][j]) 
            {
                sym=0;
            }
        }
    }
}
if(zero){
    printf(" null matrix\n");
}
if(identity){
    printf(" identity matrix\n");
}
if(diag){
    printf(" diagonal and scalar matrix\n");
}
if(upper){
    printf(" upper triangular matrix\n");
}
if(low){
    printf(" lower triangulr matrix\n");
}
if(sym){
    printf(" symmetric matrix\n");
}
return 0;
}