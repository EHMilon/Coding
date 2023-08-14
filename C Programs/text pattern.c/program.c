#include<stdio.h> 
int main() 
{ 
    char city[]= "B N G L A D E S H"; 
    int i, j;
    for(i=0; city[i]!= '\0'; i++) 
    { 
        j=i+1; 
        printf("%-10.*s\n",j,city); 
    }
    return 0;
}