#include <stdio.h>

int sumIterative(int n) {
	    int sum = 0;

	        for (int i = 1; i <= n; i++) {
			        sum += i;
				    }

		    return sum;
}

int main() {
	    int n = 12;
	        printf("Sum (Iterative) = %d\n", sumIterative(n));
		    return 0;
}
