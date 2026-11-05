#include <stdio.h>

using namespace std;

int main() {

	int n;

	scanf("%d", &n);

	if (n < 0) {
		printf("BLAD - Wpisano liczbe ujemna!\n");
		return 1;
	}

	printf("%d", n);

	return 0;
}
