#include <stdio.h>
struct student
{
    char student_name[1000000];
    char dept_name[50];
    int id_no;
    float cgpa;
};
int main()
{
    struct student Milon;
    printf("\n-----Enter information-----\n");

    printf("Enter student name:\n=> ");
    gets(Milon.student_name);

    printf("Enter department name:\n=> ");
    gets(Milon.dept_name);

    printf("Enter student ID:\n=> ");
    scanf("%d", &Milon.id_no);

    printf("Enter CGPA:\n=> ");
    scanf("%f", &Milon.cgpa);

    printf("\n-----Student Details-----\n");
    
    printf("Name: %s\n", Milon.student_name);
    printf("Dept.Name: %s\n", Milon.dept_name);
    printf("ID No: %d\n", Milon.id_no);
    printf("CGPA: %0.2f",Milon.cgpa);
    return 0;
}