//code for flipping the last two bits (00 → 11 and 11 → 00) 
#include <stdio.h>

int Lsb_two_bits_flip(int data) {
    int bitsvalue = data & 3;
    if (bitsvalue == 0 || bitsvalue == 3) {
        data ^= 3;  // Flip only if bits are 00 or 11
    }
    return data;
}

void print_bits(int data) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (data >> i) & 1);
    }
}

int main() {
    int data = 0;
    printf("Enter the data:\n");
    scanf("%d", &data);

    printf("Data Before: \n");
    print_bits(data);

    data = Lsb_two_bits_flip(data);

    printf("\nData After: \n");
    print_bits(data);

    return 0;
}
