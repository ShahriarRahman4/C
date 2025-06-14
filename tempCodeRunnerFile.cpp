#include<stdio.h>
int main()
{

int tempreture[2];
int maxtemp;
int mintemp;
int treshhhold[2];
int ULABID[9];


for(int i=0 ; i<2 ; i++)
{
    printf("Enter the tempreture for  %d hour :\n",i+1);
    scanf("%d",&tempreture[i]);
}


maxtemp=tempreture[0];
for(int i=0 ; i<2 ; i++)
{
    if(tempreture[i]>maxtemp)
    maxtemp=tempreture[i];
}
mintemp=tempreture[0];
for(int i=0 ; i<2 ; i++)
{
    if(tempreture[i]<mintemp)
    mintemp=tempreture[i];
}

printf("Minimum Tempreture = %d\n ",mintemp);
printf("Maximum Tempreture = %d\n ",maxtemp);
//printf("ULAB ID = %s\n ",ULABID[9]);













    return 0;
}