/******************************************************************************
Requirement: swap particuler bit positions in Binary
*******************************************************************************/

#include <stdio.h>

int main()
{
   int num=0,pos1=0,pos2=0,bit1=0,bit2=0;
   printf("Enter Number:\n");
   scanf("%d",&num);
   
   printf("The Number you enterd is:%d\n",num);
   for(int i=31;i>=0;i--)
   {
       printf("%d ",(num>>i)&1);
   }
   printf("\n------------------------------------------------------------------\n");
   
   printf("Enter Bit position1(0 to 31) and position2(0 to 31):\n");
   scanf("%d%d",&pos1,&pos2);
   
   bit1=(num>>pos1)&1;
   bit2=(num>>pos2)&1;
   printf("The position1_bit=%d\nThe position2_bit=%d\n",bit1,bit2);
   printf("------------------------------------------------------------------\n");
   if (bit1!=bit2) 
   {
        num=num^(1<<pos1);
        num= num^(1<<pos2);
    }
   
   printf("The Number After Modification is:%d\n",num);
   for(int i=31;i>=0;i--)
   {
       printf("%d ",(num>>i)&1);
   }
   printf("\n");
   
   

    return 0;
}
