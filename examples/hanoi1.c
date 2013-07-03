/* hanoi1
 *
 * given three pegs, and there's a property that radius of discs is decreasing when looking from bottom to top. 
 * display the pegs from which to the pegs during the procedure of moving. First input initial state of discs, 
 * which is the number of discs, and the final configuration that denotes which pegs moved to.
 *
 * Date: 2013-7-3 17:50:15
 * */

#include<stdio.h>

int counter = 1; //mark the number of step
void hanoi1(int n, int a, int b, int c) {
	if(n==1) {
		printf("%d-th: move disc %d from %d to %d\n", counter, n, a, c);
		counter += 1;
	}
	else {
		hanoi1(n-1, a, c, b);
		printf("%d-th: move disc %d from %d to %d\n", counter, n, a, c);
		counter += 1;
		hanoi1(n-1, b, a, c);
	}
}

int main() {
	int ini_num; //initial number
	int fin_num; //final number
	int count;   //numbers of discs

	printf("Input peg number move from: (1, 2, 3) \n");
	scanf("%d", &ini_num);
	while(ini_num>3) {
		if(ini_num>3) {
			printf("pegs no more than 3! \n");
		}
		printf("Input peg number move from: (1, 2, 3)\n");
		scanf("%d", &ini_num);
	}

	printf("Input peg number move to: (1, 2, 3)\n");
	scanf("%d", &fin_num);
	while(fin_num>3) {
		if(fin_num>3) {
			printf("pegs no more than3! \n");
		}
		printf("Input peg number move to: (1, 2, 3) \n");
		scanf("%d", &fin_num);
	}

	printf("Input how many discs: \n");
	scanf("%d", &count);

	/* different initial configuration lead to different result */
	if(ini_num+fin_num==3) {
		hanoi1(count, ini_num, 3, fin_num);
	}
	else if(ini_num+fin_num==4) {
		hanoi1(count, ini_num, 2, fin_num);
	}
	else if(ini_num+fin_num==5) {
		hanoi1(count, ini_num, 1, fin_num);
	}

	return 0;
}
