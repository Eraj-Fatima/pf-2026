  #include<stdio.h>
  
  int subseq( char*s, char*t){
    int i=0;
    int j=0;
    while(t[j] != '\0'){
if(s[i] == t[j])
i++;
j++;
    }
    if (s[i] == '\0')
    return 1;
    else return 0;
  }

  int main(){
    char s[100], t[100];
    printf("enter s:");
    scanf("%s", s);
    printf("enter t:");
    scanf("%s", t);

    if(subseq(s,t)==1)
    printf("true");
    else
    printf("false");
    return 0;
  }