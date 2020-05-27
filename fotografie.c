#include <stdio.h>

#define MAXIM_MATRICE 10

///vectorii de deplasare
int dx[]={-1, 0, 1, 0};
int dy[]={ 0, 1, 0, -1};

int 	n,m,nr,k,x_0,y_0,
	max_area=0,
	minn=10000;
int 	A[MAXIM_MATRICE][MAXIM_MATRICE],
	B[MAXIM_MATRICE][MAXIM_MATRICE],
	C[MAXIM_MATRICE][MAXIM_MATRICE],
	R[MAXIM_MATRICE][MAXIM_MATRICE];
//matricea de generare si matricea care retine drumul minim

void chcolor (int color){
	color=color%7;
	//printf("color%d", color );
	switch (color) {
		case 0:
			printf("\033[0m");
		break;
		case 1:
			printf("\033[0;31m");
		break;
		case 2:
			printf("\033[0;32m");
		break;
		case 3:
			printf("\033[0;33m");
		break;
		case 4:
			printf("\033[0;34m");
		break;
		case 5:
			printf("\033[0;35m");
		break;
		case 6:
			printf("\033[0;36m");
		break;
	}
}

void colorafis()
{
	int i,j;
	nr++;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			chcolor(A[i][j]);
			printf("%d ", A[i][j]);
			printf("\033[0m");
		}
		printf("\n");
	}
	printf("\n");
}

void afisare()
{///afiseaza o solutie si o compara cu solutia de drum minim
	int i,j;
	nr++;
	for( i = 1; i <=n; i++)
	{
		for( j = 1; j <=n; j++)
		{
			chcolor(B[i][j]);
			printf("%d ", B[i][j]);
			printf("\033[0m");
		}
		printf("\n");
	}
	printf("\n");
}

void bt(int x,int y, int cul, int max)
{
	int xx,yy;
	for(int i = 0; i < 4; i++)
	{
		xx = x +dx[i];
		yy = y +dy[i];
		if( B[xx][yy]==0 && A[xx][yy]==cul)
		{
			B[xx][yy]=cul;
			A[xx][yy]=0;
			max++;
			if(max_area < max)
			{
				max_area = max;
			}
			bt( xx, yy, cul, max);
		}
	}
}
void golesc( int B[10][10])
{
	for( int i = 1; i <=n; i++)
	{
		for( int j = 1; j <=n; j++)
		{
	 		B[i][j]=0;
		}
	}
}



int main()
{
	FILE* fin;
	fin = fopen("./fotografie.in", "r");

	fscanf(fin, "%d", &n);

	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			fscanf( fin, "%d", &A[i][j] );
	colorafis();

	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(A[i][j])
			{
				golesc(B);
				B[i][j] = A[i][j];
				bt(i, j, A[i][j], 1);
				//printf("\nbt( A[ %d][ %d])\n", i, j);
				afisare();
			}

	printf("numar obiecte: %d\n", nr);
	printf("zona maxima  : %d\n", max_area);

}
