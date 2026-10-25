#include <stdio.h>
int square(int x){return x*x;}
int negate(int x){return -x;}
int isEven(int x){return x%2==0;}
int isPositive(int x){return x>0;}

void applyToArray(int *arr,int n,int (*fn)(int)){
    for(int i=0;i<n;i++) arr[i]=fn(arr[i]);
}
int countIf(const int *arr,int n,int (*pred)(int)){
    int c=0;
    for(int i=0;i<n;i++) if(pred(arr[i])) c++;
    return c;
}
void printGeneric(void *data,char type,int n){
    if(type=='i'){int *p=(int*)data; for(int i=0;i<n;i++) printf("%d ",p[i]); printf("\n");}
    else if(type=='f'){float *p=(float*)data; for(int i=0;i<n;i++) printf("%.2f ",p[i]); printf("\n");}
    else if(type=='c'){char *p=(char*)data; for(int i=0;i<n;i++) printf("%c ",p[i]); printf("\n");}
    else printf("Invalid type '%c' for printGeneric\n",type);
}

int main(){
    int arr[]={3,-2,8,-5,6};
    int n;
    printf("Enter n (1-50): ");
    scanf("%d",&n);
    while(n<1||n>50){printf("Invalid\nEnter n (1-50): "); scanf("%d",&n);}
    
    printf("Original: "); printGeneric(arr,'i',n);
    applyToArray(arr,n,negate);
    printf("After negate: "); printGeneric(arr,'i',n);
    printf("Positive values after negate: %d\n",countIf(arr,n,isPositive));
    printf("Even values after negate: %d\n",countIf(arr,n,isEven));
    
    float f[]={1.5,2.25};
    printf("Float print (type f): "); printGeneric(f,'f',2);
    printGeneric(arr,'x',n);
    return 0;
}