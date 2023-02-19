#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum(int count, ...) {
	va_list args;
	va_start(args, count);
	int s = 0;
	int i;
	for (i = 0; i < count; i++) {
		int x = va_arg(args, int);
		s += x;
	}
	va_end(args);
	return s;
}

int sum2(int a, ...) {
	va_list args;
	va_start(args, a);
	int s = a;
	int x = va_arg(args, int);
	while (x != 0) {
		s += x;
		int x = va_arg(args, int);
	}
	va_end(args);
	return s;
}
int main(int argc, char **argv) {
	printf("Sum is %d\n", sum(1,2,3));
	printf("Sum 2 is %d\n", sum2(1,2,3,4,0));
	return 0;
}

