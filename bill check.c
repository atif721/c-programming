#include<stdio.h>
#define MC 30
#define SC 10
#define MIN 20
int main()
{
  // Bill Without Penalty

  int billUnit;
  float billWithUnit, allBill,totalBill;
  printf("Enter total unit : ");
  scanf("%d",&billUnit);

  if(billUnit<=75){
    billWithUnit = (billUnit*4.94); //
  } else if(billUnit > 75 && billUnit <= 200) {
    billWithUnit = (billUnit*7.38);
  } else if(billUnit>200 && billUnit <= 300){
    billWithUnit = (billUnit*10.56);
  } else{
    billWithUnit = (billUnit*12.18);
  }

  totalBill = billWithUnit + MC + SC;
  allBill = totalBill + (totalBill*.05);
  printf("\nNet Bill = %.2f\n",allBill);

  // Bill with penalty

  float penBill, penCharge;
  penCharge = (MIN>(allBill*0.015)) ? MIN : (allBill*0.015);
  penBill = allBill + penCharge;
  printf("\nBill With Penalty = %.2f\n",penBill);

  return 0;
}
