#include <stdio.h>
int main(void) {
	int i, j;

	for (i = 65; i <= 90; i++) {
		for (j = 65; j <= i; j++) {
			printf("%c", j);
		}
		printf("\n");
	}
	return 0;
}