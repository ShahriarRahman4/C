 #include<stdio.h>
 void stringname(char arr[]);
int main()
{

char name[50];
scanf("%s",name);
printf("Your name is %s",name);
return 0;

}

  void stringname(char arr[])
 { 
for(int i=0 ; arr[i] != '\0' ;i++)
  {
    printf("%c",arr[i]);
  }
  printf("\n"); 
 }