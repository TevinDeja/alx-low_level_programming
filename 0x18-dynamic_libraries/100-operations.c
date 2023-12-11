#include <stdio.h>

int add(int a, int b) {
	return a + b;
}


int sub(int a, int b) {
	return a - b;
}


int mul(int a, int b) {
	return a * b;
}


int div(int a, int b, int *result) {
	if (b == 0) {
		fprintf(stderr, "Error: Division by zero\n");
		return -1;
	}
	*result = a / b;
	return 0;
}


int mod(int a, int b, int *result) {
	if (b == 0) {
		fprintf(stderr, "Error: Modulo by zero\n");
		return -1;
	}
	*result = a % b;
	return 0;
}
