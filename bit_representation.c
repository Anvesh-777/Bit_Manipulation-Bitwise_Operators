#include<<stdio.h>
int main()
{
	int num=0;
	printf("Enter the number you want see its binary:\n");
	scanf("%d",&num);

	for(int i=31;i>=0;i--)
	{
		printf("%d", num>>i&1);
		if(i%8==0)
			printf(" ");
	}
	return 0;
}

