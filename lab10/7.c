#include<stdio.h>
#include<string.h>

void bubblesort(char a[50], char b[50]){
    char temp[50];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

int main(){
  char names[5][50];
  FILE *fptr;

  for(int i=0; i<5; i++){
    puts("enter names:");
    scanf("%s", names[i]);
  }
    for(int i=0;i<5; i++){
for(int j=i+1; j<5; j++){
    if(strcmp(names[i],names[j])>0){
        bubblesort(names[i], names[j]);
}
    }
  }
  fptr =fopen("names.txt", "w");
  for(int i=0; i<5; i++){
  fprintf(fptr, "%s\n", names[i]);
  }
  fclose(fptr);

  printf("\n names from file: \n");
   fptr =fopen("names.txt", "r");
  for(int i=0; i<5; i++){
  fscanf(fptr, "%s\n", names[i]);
  printf("%s\n", names[i]);
  }
  fclose(fptr);
  return 0;
}