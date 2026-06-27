#include <stdio.h>
#include <string.h>
int main(void) {
	char name[] = "Mercy";

	printf("String: %s\n", name);
	printf("Lemgth (strlen): %lu\n", strlen(name));

	for (int i = 0; i < 5; i++) {
		printf("name[%d] = %d ('%c')\n", i, name[i], name[i]);  
	
	}
	return 0;

}
