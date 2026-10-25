#include<stdio.h>
float averageSteps(int *steps, int n){
    float sum=0;
    for(int i=0; i<n;i++){
        sum=sum + *(steps+i);
    }
    return sum/n;
}
int countGoalDays(int *steps, int n, int goal){
    int count=0;
    for(int i=0; i<n;i++){ 
        if(*(steps+i) >= goal){
        count++;
    }
}
    return count;
}
int main()
{
    int steps[7];
    int n=7;
    for(int i=0; i<7; i++){
        printf("enter steps for day %d:\n", i+1);
        scanf("%d", (steps+i));
    }
    float avg= averageSteps(steps,n);
    int goaldays= countGoalDays(steps,n,8000);
    printf("avg steps: %.2f\n",avg);
    printf("days goal reached (8000 or more): %d\n", goaldays);
    return 0;
}
