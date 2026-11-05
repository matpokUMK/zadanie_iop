#include <stdio.h>

using namespace std;

int silnia(int n) {
	int sum = 1;
	for(int i = n; i >= 1; i--) {
		sum *= i;
	}
	return sum;
}

int main() {

	int n;

	scanf("%d", &n);
	printf("%d", silnia(n));

	return 0;
}
