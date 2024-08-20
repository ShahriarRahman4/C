#include<stdio.h>
int main()
{
int day;
printf("Enter your day number : ");
scanf("%d",&day);

switch(day)
{
       case 1 :printf("SATURDAY \n");
        break;
        case 2 :printf("SUNDAY \n");
        break;
        case 3 :printf("MONDAY \n");
        break;
        case 4 :printf("TUESDAY \n");
        break;
        case 5 :printf("WEDNESDAY \n");
        break;
        case 6 :printf("THURSDAY \n");
        break;
        case 7 :printf("FRIDAY \n ");
        break;
        default :printf("Not a valid day !");
    




}







return 0;
}