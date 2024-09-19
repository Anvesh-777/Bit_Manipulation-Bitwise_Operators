#include<stdio.h>
int main()
{
	int num=0;
	printf("Enter the num you want to check Is It divisible by 2 or not:\n");
	scanf("%d",&num);
	if(!(num&(num-1)))
		printf("Your number is divisible by 2\n");
	else
		printf("Your number is not divisible by 2\n");

	printf("-----------------------------------------------------------------\n");

	int cnt = 0;
    	printf("Enter the number you want to check if it's divisible by 4 or not:\n");
    	scanf("%d", &num);

    	if (num > 0 && (num & (num - 1)) == 0) 
	{
        while (num > 1) 
	{
            cnt++;
            num = num >> 1;
        }
        if (cnt % 2 == 0)
            printf("Your number is divisible by 4\n");
        else
            printf("Your number is not divisible by 4\n");
    	}
       	else

	printf("Your number is not divisible by 4\n");

	printf("-----------------------------------------------------------------\n");

        printf("Enter the num you want to check Is It divisible by 8 or not:\n");
        scanf("%d",&num);
        if((num>>3)<<3==num)
                printf("Your number is divisible by 8\n");
        else
                printf("Your number is not divisible by 8\n");
	return 0;

}

