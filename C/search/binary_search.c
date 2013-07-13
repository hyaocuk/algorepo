/* binary search
 *
 * Given a set of ordered sequence, and the key we need to search. First we compare the key to the element in the 
 * middle of the sequence, if match then return the position, else if the key is larger or smaller than the middle 
 * element, we cut the sequence into two parts and using the same method(recursive) to compare to the smaller part 
 * or larger partagain because we have an ordered sequence already and with total time: O(log n), when not found, 
 * return -1.
 *
 * Date: 2013-7-13 21-24-30
 * By: Terence Ng
 *
 * */

#include<stdio.h>

int med;
int binary_search(int key, int input[], int first, int last) {
	if(first>last) {
		return -1;
	}
	else {
		med = (first+last)/2;
		printf("first:%d med:%d last:%d\n", first, med, last);

		/* three-way comparison */
		if(key==input[med]) {
			return med;
		}
		else if(key>input[med]) {
			binary_search(key, input, med+1, last);
		}
		else if(key<input[med]) {
			binary_search(key, input, first, med-1);
		}
	}
}

int main() {
	int array[7] = {1, 2, 4, 6, 7, 9, 11};
	int length;
	length = sizeof(array)/sizeof(int);
	//binary_search(0, array, 0, length-1);
	printf("%d\n", binary_search(10, array, 0, length-1));
	return 0;
}
