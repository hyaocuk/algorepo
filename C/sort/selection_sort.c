/* selection-sort
 *
 * given a set of n disordered numbers, we find the minimal number of the n numbers, and exchange with the first number in the set, 
 * then things go on, we find the minimal number in the remaining n-1 numbers, and exchange with the second number in the set, and 
 * till the end, the last number in the set will be in the right order because of the previous process, we can prove this by 
 * loopinvariants which is similar to mathematical induction.
 *
 * Date: 2013-7-7 10:41:26
 * By: Terence Ng
 *
 * */

#include<stdio.h>

void selection_sort(int input[], int n) {
	int min, offset, temp;
	int i, j;
	for(i=0; i<n-1; i++) {
		min = input[i];
		for(j=i+1; j<n; j++) {
			if(input[j]<min) {
				min = input[j];
				offset = j;
				temp = input[i];
				input[i] = min;
				input[offset] = temp;
			}
		}
	}
}

int main() {
	int array[6] = {5, 2, 4, 6, 1, 3};
	int length;
	int i;
	length = sizeof(array)/sizeof(int);
	selection_sort(array, length);
	for(i=0; i<length; i++) {
		printf("%d ", array[i]);
	}

	return 0;

}
