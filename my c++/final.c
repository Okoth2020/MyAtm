#include<stdio.h>
struct employee{
int number,salary;
char name[20];
};
int main()
{
  struct employee details;
  FILE*final;
  final=fopen("final.txt","w");
  int fputs(str,final);
  printf("Enter number:");
  scanf("%d",&details.number);
   printf("Enter name:");
  scanf("%s",&details.name);
   printf("Enter salary:");
  scanf("%d",&details.salary);

}
