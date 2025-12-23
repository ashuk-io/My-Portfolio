// #include <stdio.h>
// int main() {
// 	int num, first, last;
// 	printf("Enter a number: ");
// 	scanf("%d", &num);
// 	last = num % 10;
// 	int temp = num;
// 	while (temp >= 10) {
// 		temp /= 10;
// 	}
// 	first = temp;
// 	printf("First digit: %d\n", first);
// 	printf("Last digit: %d\n", last);
// 	return 0;
// }


#include <stdio.h>

int main() {
	int i = 2;
	printf("Even numbers between 1 and 100:\n");
	while (i <= 100) {
		printf("%d ", i);
		i += 2;
	}
	printf("\n");
	return 0;
}