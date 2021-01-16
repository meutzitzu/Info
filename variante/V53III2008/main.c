#include <stdio.h>

int main(){


	unsigned int n;

	scanf("%d", &n);

	int a[n];

	for( int i =0; i <n; ++i ){
		scanf("%d", &a[i]);
	}


	for( int j =0; j <n; ++j ){
		for( int i =0; i <n; ++i ){
			printf("%d ", a[(i+j)%n]);
		}
		printf("\n");
	}

	return 0;
}
