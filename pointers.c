#include <stdio.h>
int main(void) {
	int age = 25;
		int *p = &age;

		printf("Value of age: %d\n", age);
		printf("Address of age: %p\n", &age);
		printf("Value stored in pointer p: %p\n", p);
		printf("Value p points to:%d\n", *p);
	       *p = 30;
       printf("New value of age after changing through p: %d\n", age);

return 0;
}
