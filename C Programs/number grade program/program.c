#include <stdio.h>
int main()
{
    int mark;
    printf("Enter your mark: ");
    scanf("%d", &mark);
    if (mark<=100 && mark>=0)
    {
        if (mark>=80 && mark<=100)
        {
            printf("Your grade is A+");
        }
        else if (mark>=70)
        {
            printf("Your grade is A");
        }
        else if (mark>=60)
        {
            printf("Your grade is A-");
        }
        else if (mark>=50)
        {
            printf("Your grade is B");
        }
        else if (mark>=40)
        {
            printf("Your grade is C");
        }
        else if (mark>=34)
        {
            printf("Your grade is D");
        }
        else if (mark<34 && mark>=0)
        {
            printf("Your grade is F");
        }
    }

    else
    {
        printf("OOPS! This is not a valid mark. please enter a valid mark");
    }

    return 0;
}