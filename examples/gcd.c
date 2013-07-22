/* gcd.c
 *
 * This is an algorithm about Greatest Common Divisor:
 *
 * quotient = a / b;
 * remainder = a - b * quotient;
 * if remainder is non-zero, we have to do the following step:
 * assigned a with b, b with remainder, and iterate the same pattern.
 *
 * We can prove this by drawing some graphs. Refer to http://en.wikipedia.org/wiki/Greatest_common_divisor
 *
 * Date: 2013-7-22 20-51-30
 * By: Terence Ng
 *
 * */

#include<stdio.h>

int gcd(int a, int b) {
	int q;
	int r;
	q = a / b;
	r = a - b * q;
	while(r!=0) {
		a = b;
		b = r;
		q = a / b;
		r = a - b * q;
	}
	return b;
}

int main() {

	printf("%d", gcd(9876, 1234));
	return 0;
}
