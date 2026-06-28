#include <stdio.h>
void addTen(int x) {
	x = x + 10;
	printf("Inside addTen (by value): x = %d\n", x);
}
	void addTenPtr(int *x) {
		*x = *x + 10;
		printf("Inside addTenPtr (by pointer): *x = %d\n", *x);
	}
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
	int main(void) {
		int a = 5;
		addTen(a);
		printf("After addTen, a =  %d\n", a);

		addTenPtr(&a);
		printf("After addTenPtr(&a), a = %d\n", a);

		return 0;
	}
 
