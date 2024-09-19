#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number you want 0xXY formate\n");
	scanf("%x",&num);
	num=(num>>4)&0x0f | (num<<4)&0xf0;
	printf("After the swaping your number is\n0x%x\n",num);
	return 0;
}
