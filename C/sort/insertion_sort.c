/* insertion sort
 *
 * given an input set which is disordered. We decide to split it into two subset, one for the ordered and the other for the 
 * disordered, each time we select one element from the disordered set and compare to the element exist in the ordered set, 
 * once the element in the ordered set is greater than the selected one, the element will be moved to the next place and 
 * things go on until the selected one reach the first place.
 *
 * Date: 2013-7-3 23:06:00
 * By: Terence Ng
 * */


#include<stdio.h>

void insertion_sort(int array[], int l) {
	int i, j;
	int key;
	for(i=1; i<l; i++) {
		key = array[i];
		j = i-1;
		while(j>=0 && array[j]>key) {
			array[j+1] = array[j];
			j -= 1;
		}
		array[j+1] = key;
	}
}

int main() {
	int i;
	int input[6] = {5, 2, 4, 6, 1, 3};
	int length;
	length = sizeof(input)/sizeof(int);
	insertion_sort(input, length);
	for(i=0; i<sizeof(input)/sizeof(int); i++) {
		printf("%d ", input[i]);
	}

	return 0;
}
