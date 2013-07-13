/* bubble sort
 *
 * Given a set of n number disordered sequence.
 * Everytime in the comparison, we compare the rightmost one and it's previous one. Move forward the larger or smaller 
 * one(they exchange their position accoring to the order). So after the first loop, the largest or the smallest was 
 * moved to the first place, and left n-1 disordered, so we have to loop again with initial n-1 and then things follow
 * this pattern, and in the end get the ordered sequence with O(n^2)
 *
 * Date: 2013-7-13 11:27:20
 * By: Terence Ng
 *
 * */

#include<stdio.h>

void bubble_sort(int input[], int n) {
	int i, j;
	int tmp;
	for(i=0; i<n; i++) {
		for(j=n-1; j>=i+1; j--) {
			if(input[j]<input[j-1]) {
				tmp = input[j];
				input[j] = input[j-1];
				input[j-1] = tmp;
			}
		}
	}
}

int main() {
	int array[6] = {5, 2, 4, 6, 1, 3};
	int length;
	int i;
	length = sizeof(array)/sizeof(int);
	bubble_sort(array, length);
	for(i=0; i<length; i++) {
		printf("%d ", array[i]);
	}

	return 0;
}
