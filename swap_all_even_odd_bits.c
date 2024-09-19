#include<stdio.h>
int main()
{
	int num=0;
	printf("Enter the number you want:\n");
	scanf("%d",&num);
	for(int i=31;i>=0;i--)
		printf("%d ",(num>>i)&1);
	printf("\n");
	num=((num & 0xAAAAAAAA)>>1) | ((num & 0x55555555)<<1);
        printf("After swaping Even and Odd bits side by side:\n");	
	for(int i=31;i>=0;i--)
                printf("%d ",(num>>i)&1);
        printf("\n");
		
}
