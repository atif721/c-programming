#include<stdio.h>
int main()
{
  int salaryGrade, basicSalary;

  printf("Enter the grade of salary (6-9) : ");
  scanf("%d",&salaryGrade);

  switch (salaryGrade){
  case 6:
    basicSalary = 35500;
    break;
  case 7:
    basicSalary = 31800;
    break;
  case 8:
    basicSalary = 27400;
    break;
  case 9:
    basicSalary = 22000;
    break;
  default :
    printf("\nWrong Input ");
    break;
  }

  double hRent,medical,conveyance,others,providentFund,NetSalary,grossSalary;

  hRent = 10000;
  medical = 1800;
  conveyance = 2000;
  others = 2500;


  if(hRent < (basicSalary*(45.0/100))){
    hRent = basicSalary*(45.0/100);
    // printf("\n\nHouseRent : %.2lf",hRent);
  } else {
    // printf("\n\nHouseRent : %.2lf",hRent);
  }
  if(medical < (basicSalary*(10.0/100))){
    medical = basicSalary * (10.0/100);
    // printf("\n\nMedical : %.2lf",medical);
  }
  if(conveyance < basicSalary * (10.0/100)){
    conveyance = basicSalary * (10.0/100);
   // printf("\n\nConveyance : %.2lf",conveyance);
  }
  if(others < basicSalary * (20.0/100)){
    others = basicSalary * (20.0/100);
   // printf("\n\nOthers : %.2lf",others);
  }

  providentFund = basicSalary * (8.0/100);
  grossSalary = basicSalary + hRent + medical + conveyance + others;
  NetSalary = grossSalary -  providentFund;

  printf("\n\nGross Salary for grade %d : %.2lf",salaryGrade,grossSalary);
  printf("\nNet Salary for grade %d : %.2lf",salaryGrade,NetSalary);

  getch();


}
