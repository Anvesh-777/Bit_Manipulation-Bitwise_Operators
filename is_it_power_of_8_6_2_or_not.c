#include <stdio.h>
int is_power_of_2(int num) 
{
    return (num > 0 && (num & (num - 1)) == 0);
}

int is_power_of_8(int num) 
{
    if (!is_power_of_2(num)) 
	{
        return 0; // Not a power of 2, hence not a power of 8
    }

    // Count trailing zeros
    int count = 0;
    while ((num & 1) == 0) 
	{
        num >>= 1;
        count++;
    }

    // Check if the count is a multiple of 3
    return (count % 3 == 0);
}

int is_power_of_16(int num) 
{
    if (!is_power_of_2(num)) 
	{
        return 0; // Not a power of 2, hence not a power of 16
    }

    // Count trailing zeros
    int count = 0;
    while ((num & 1) == 0) 
	{
        num >>= 1;
        count++;
    }

    // Check if the count is a multiple of 4
    return (count % 4 == 0);
}

int main() 
{
    int num = 0;
    
    printf("Enter the number you want to check:\n");
    scanf("%d", &num);
    
    if (is_power_of_16(num)) 
	{
        printf("Yes, the number you entered is a power of 16\n");
    } 
	else 
	{
        printf("No, the number you entered is not a power of 16\n");
    }

    if (is_power_of_8(num)) 
	{
        printf("Yes, the number you entered is a power of 8\n");
    } 
	else 
	{
        printf("No, the number you entered is not a power of 8\n");
    }
    
    if (is_power_of_2(num)) 
	{
        printf("Yes, the number you entered is a power of 2\n");
    } 
	else
	{
        printf("No, the number you entered is not a power of 2\n");
    }
    
    return 0;
}

