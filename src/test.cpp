/*
 * test.cpp
 *
 *  Created on: 26/ott/2010
 *      Author: packyuser
 */
#include <stdio.h>

int x = 3;

template<int N>
struct Factorial {
	enum {
		value = N * Factorial<N - 1>::value
	};
};

template<>
struct Factorial<0> {
	enum {
		value = 1
	};
};

// Factorial<4>::value == 24
// Factorial<0>::value == 1
void foo() {
	int x = Factorial<4>::value; // == 24
	int y = Factorial<0>::value; // == 1

	printf("The value of x: %d\n", x);
	printf("The value of y: %d\n", y);
}

int main() {
	foo();
	int x = 5;
	printf("%d\n", x);
	printf("%d\n", ::x);

	int a[] = {1,2,3,4,5};

	int* p=&a[0];

	printf("%d, %p\n", *p, p);

	++p;

	printf("%d, %p\n", *p, p);

	int* y=&x;

	printf("%d, %p\n", *y, y);
	printf("%d, %p\n", *(y-1), ++y);
}

