#include <stdio.h>

int main(){
	
	int n;
	int x, mx =-1;
	int fx = 0;

	FILE* fin;
	fin = fopen("numere.txt", "r");

	fscanf( fin, "%d", &n);
	for( int i =1; i <=n; ++i){
		fscanf( fin, "%d", &x);
		if( x>mx ){
			mx = x;
			fx = 1;
		} else if ( x==mx ){
			fx++;
		}
	}

	printf("%d %d", mx, fx);
	
	return 0;
}

