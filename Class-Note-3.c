// C program to print numbers from 0 to 10 and 10 to 0 using two while loops.
#include <stdio.h>
int main() {
    int i = 0;
    int j=10;

    //printing 1 to 10
    while (i <= 10)
     {
        printf("%d\n", i);
        i++;
    }

 printf("\n");
 
    //printing 10 to 1
    while (j >= 0)
     {
        printf("%d\n ", j);
        j--;//j=j-1
    }

    return 0;
}
