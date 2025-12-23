// #include<stdio.h>
// int main(){
//     int num;
//     int mul = 0;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     printf("Multiplication table of %d:\n", num);
//     for (int i = 1; i <= 10; i++) {
//         printf("%d x %d = %d\n", num, i, num * i);
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
	int num, count = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	int temp = num;
	if (num == 0) {
		count = 1;
	} else {
		while (temp != 0) {
			temp /= 10;
			count++;
		}
	}
	printf("Number of digits in %d is %d\n", num, count);
	return 0;
}







