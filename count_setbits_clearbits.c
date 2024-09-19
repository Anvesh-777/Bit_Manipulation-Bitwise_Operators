#include <stdio.h>

int main() 
{
    int num = 0, no_of_setbits = 0, no_of_clearbits = 0;
    printf("Enter the number you want to count Set & clear bits:\n");
    scanf("%d", &num);

    printf("Bit representation of your number:\n");
    for (int i = 31; i >= 0; i--) 
    {
        int bit = (num >> i) & 1;
        printf("%d ", bit);
        bit == 1 ? no_of_setbits++ : no_of_clearbits++;
    }

    printf("\nNumber of set bits present in your number = %d\n", no_of_setbits);
    printf("Number of clear bits present in your number = %d\n", no_of_clearbits);

    printf("---------------------------------------------------------------\n");
    (num&1)?printf("The number is odd number\n"):printf("The number is even number\n");
    printf("---------------------------------------------------------------\n");
	
    printf("---------------------------------------------------------------\n");
    ((num>>31)&1)?printf("The numberhas Negetive sign\n"):printf("The number has Positive sign\n");
    printf("---------------------------------------------------------------\n");

    return 0;
}

