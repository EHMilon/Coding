#include <stdio.h>
int main()
{
                      /*1
                        1 2
                        1 2 3
                        1 2 3 4
                        1 2 3 4 5
                        1 2 3 4 5 6
                        1 2 3 4 5 6 7
                        1 2 3 4 5 6 7 8
                        1 2 3 4 5 6 7 8 9
                        1 2 3 4 5 6 7 8 9 10*/
    // int rows = 10;
   
    // for(int i=1; i<=rows; i++) {
    //     // Print the numbers from 1 to i
    //     for(int j=1; j<=i; j++) {
    //         printf("%d ", j);
    //     }
    //     // Move to the next row
    //     printf("\n");
    // }


                      /*1 2 3 4 5 6 7
                        1 2 3 4 5 6
                        1 2 3 4 5
                        1 2 3 4
                        1 2 3
                        1 2
                        1*/
    // int i, j;
        
    // for(i=7; i>=1; i--) 
    // {
    //     for(j=1; j<=i; j++) 
    //     {
    //         printf("%d ", j);
    //     }
    //     printf("\n");
    // }

                         /* 1
                          2 1 2
                        3 2 1 2 3
                      4 3 2 1 2 3 4
                    5 4 3 2 1 2 3 4 5
                  6 5 4 3 2 1 2 3 4 5 6
                7 6 5 4 3 2 1 2 3 4 5 6 7*/
    int i,j,k,n;
    for(i=1; i<=7; i++)            // loop for number of rows
    {
        for(j=1; j<=(7-i); j++)       // loop for spaces in each row
        {
            printf("  ");
        }
        n=i;                       // initialize n with i to print number(increasing order)
        for(k=1; k<=(2*i-1); k++)     // loop for numbers in each row 
        {
            printf("%d ", n);
            if(k<i)                   // check if k is less than i to increment n
            n--;
            else
            n++;
        }
        printf("\n");             // Move to next line after printing each row
    }

    
    return 0;
}