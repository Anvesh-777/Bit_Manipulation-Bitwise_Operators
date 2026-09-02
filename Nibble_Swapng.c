#include <stdio.h>

int main()
{
    unsigned int data = 0x12345678;
    int n1 = 0, n2 = 0;

    printf("Original data = 0x%X\n", data);

    printf("-----Enter the nibble 1 and nibble 2 position you want to swap------\n");
    scanf("%d%d", &n1, &n2);

    if ((n1 < 0 || n1 > 7) || (n2 < 0 || n2 > 7))
    {
        printf("--You selected wrong nibbles, it should be between 0 to 7--\n");
        return 0;
    }

    if (n1 == n2)
    {
        printf("Both nibble positions are same. No swap needed.\n");
        printf("Data = 0x%X\n", data);
        return 0;
    }

    unsigned int nibble1, nibble2;
    unsigned int mask1, mask2;

    // Extract nibbles
    nibble1 = (data >> (n1 * 4)) & 0xF;
    nibble2 = (data >> (n2 * 4)) & 0xF;

    // Create masks for both nibble positions
    mask1 = 0xF << (n1 * 4);
    mask2 = 0xF << (n2 * 4);

    // Clear both nibble positions
    data = data & ~(mask1 | mask2);

    // Put nibble1 into nibble2 position and nibble2 into nibble1 position
    data = data | (nibble1 << (n2 * 4));
    data = data | (nibble2 << (n1 * 4));

    printf("After swapping nibble %d and nibble %d\n", n1, n2);
    printf("Modified data = 0x%X\n", data);

    return 0;
}
