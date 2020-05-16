#include <stdio.h>

#define DRUM_MAXIM 64
#define MAXIM_MATRICE 10

///vectorii de deplasare
int	dx[]={1,0,-1,0},
	dy[]={0,1,0,-1};

int	n,minn=10000;
int xi,yi;
int	A[MAXIM_MATRICE][MAXIM_MATRICE];//matricea de configuratie


int     B[MAXIM_MATRICE][MAXIM_MATRICE],
        R[MAXIM_MATRICE][MAXIM_MATRICE];//matricea de generare si matricea care retine drumul minim


///afiseaza o solutie si o compara cu solutia de drum minim
void afisare(int k)
{
	int 	i,j;
	if(k<minn)
	{
		minn=k;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				R[i][j]=B[i][j];
				printf("%d ", B[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

void bt(int x,int y, int pas)
{
	int 	xx,
		yy;
	for(int i=0;i<4;i++)
	{
		xx=x+dx[i];
		yy=y+dy[i];
		/// verif atins     verif zid         cond. margine
		if( B[xx][yy]==0 && A[xx][yy]!=1 && xx>=1&&xx<=n&&yy<=n&&yy>=1 )
		{
			//pe drumul de mers marcam cu pas in pozitia noua in care am ajuns
			B[xx][yy]=pas;
			//if(solutie())
			if(xx==1||yy==1||xx==n||yy==n)
				afisare(pas);
			else
				bt(xx,yy,pas+1);
			//refacem
			B[xx][yy]=0;
		}
	}
}

int main()
{
	FILE* fin;
	fin = fopen("./backtracking2D.in", "r");

	fscanf(fin, "%d", &n);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			fscanf(fin, "%d", &A[i][j]);
	fscanf(fin, "%d %d", &xi, &yi);
	B[xi][yi]=1;
	bt(xi,yi,2);

	printf("Drum minim:\n");
	printf("\033[1;32m");
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			printf("%d ", R[i][j] );
		printf("\n");
	}
	return 0;
}
