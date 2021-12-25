#include <stdio.h>
struct emp
{
    int eno,age,phno;
    char ename[50];
    char dname[30];
    float salary;
};
void main()
{
    struct emp e;
    printf("enter the emp no:\n");
    scanf("%d",&e.eno);
    printf("enter the emp name:\n");
    scanf("%s",&e.ename);
    printf("enter the dep name:\n");
    scanf("%s",&e.dname);
    printf("enter the emp age:\n");
    scanf("%d",&e.age);
    printf("enter the emp salary:\n");
    scanf("%d",&e.salary);
    printf("enter the emp phone number:\n");
    scanf("%d",&e.phno);
    printf("emp no:%d","ename:%s","dname:%s","age:%d","salary:%d","phno:%d",e.eno,e.ename,e.dname,e.age,e.salary,e.phno);
}
