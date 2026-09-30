#include <stdio.h>
#include <stdlib.h>

float calculateBill (float Units);

int main()
{
    float Units,Bill;

    printf("enter units of water consumed:");
    scanf("%f",&Units);

    Bill = calculateBill(Units);

    printf("\n***WATER BILL***\n");
    printf("The Units of water consumed is:%2.f\n",Units);
    printf("The water Bill is:%2.f\n",Bill);

    return 0;
}

 float calculateBill (float Units){

     float Bill;

     if (Units<=30)
     {
         Bill =Units*20;
     }
     else if(Units<=60)
     {
         Bill=Units*25;
     }
     else
     {
         Bill=Units*30;
     }

     return Bill;
 }
