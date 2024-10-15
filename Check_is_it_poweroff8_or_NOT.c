#include <stdio.h>

int main()
{
   int num=0,temp=0;
   printf("Enter Number:\n");
   scanf("%d",&num);
   temp=num;
   num=num>>3;
   num=num<<3;
   if(temp==num)
   {
   printf("The number you enterd is powerof 8\n");
   }
   else
   {
   printf("The number you enterd is not powerof 8\n");
   }

    return 0;
}
