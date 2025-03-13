#include <stdio.h>

int main() {
	unsigned int num = 8;
	int count = 0;

	while (num) {
		count += num & 1;
		num >>= 1;
	}

	printf("Number of ones:%d\nNumber of Zeros:%d\n", count,8-count);
	return 0;
}
