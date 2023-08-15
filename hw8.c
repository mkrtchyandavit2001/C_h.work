#include <stdio.h>

int main(){

	int x = 0;
	int y = 0;
	int result = 0;

	printf("Enter first value: ");
	scanf("%d", &x);
	printf("Enter second value: ");
	scanf("%d", &y);
	result = (x * y + 21 * x / y - 200);
	printf("%d\n", result);

return 0;
}
