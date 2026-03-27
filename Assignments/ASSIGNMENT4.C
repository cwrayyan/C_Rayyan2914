#include <stdio.h>

void main()
{
int BP,HRA,TA,PT,net_salary ;
//take basic pay as input
printf("Please enter basic salary: \n");
scanf("%d",&BP);
// calculate HRA
HRA = BP * 0.1;
//calcualte TA
TA = BP * 0.05;
//calculate PT
PT = BP * 0.02;
//finally display net salary
net_salary = BP + HRA + TA - PT;
printf("The net salary is: %d",net_salary);
}