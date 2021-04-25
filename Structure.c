#include<stdio.h>
// Structure to store information of employee //
struct employee 

{
    char emp_name[50];
    int emp_no;
    float salary;
};
int main()
{
struct employee e[20]
for(int i=0;i<20;i++)
{ 
    printf("\nEnter name:");
    scanf("%s",&e[i].name);
    printf("\nEnter no:");
    scanf("%d",&e[i].emp_no);
    printf("\nEnter salary:");
    scanf("%f",&e[i].salary);
}
for(int i=0;i<20;i++)
{
     printf("\n%d \t %s \t %2f",e[i].name,e[i].emp_no,e[i].salary);
}
return 0;
}

