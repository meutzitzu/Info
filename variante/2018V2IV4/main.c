#include <stdio.h>

int main(){

	int N;
	scanf("%d", &N);
	int m[N][N];
	int i,j;	
	for (i=0;i<N;++i){
		for(j=0;j<N;++j){
			m[i][j]=( i==j ? 0 : (j+i)%(N-1) );
			if(m[i][j]==0)
				printf("\033[0;31m%d\033[0;37m ",m[i][j]);
			else
				printf("%d ",m[i][j]);
		}
	printf("\n");
	}

	return 0;
}
