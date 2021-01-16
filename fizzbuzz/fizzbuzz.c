#include <stdio.h>

int main ()
{
	int n;
	scanf("%d", &n);

	for(int k = 1; k <= n; k++){
		printf(  k%15==0 ? "FizzBuzz"
			:k%5 ==0 ? "Buzz"
			:k%3 ==0 ? "Fizz"
			: "%d", k ); 
		printf("\n");
	}

	return 0;
}
