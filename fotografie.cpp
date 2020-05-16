#include <iostream>
#include <fstream>
using namespace std;
///vectorii de deplasare
int dx[]={-1, 0, 1, 0};
int dy[]={ 0, 1, 0, -1};

void chcolor (int color){
	switch (color) {
		case '0': printf("\033[0m");
		case '1': printf("\033[0;31m");
		case '2': printf("\033[0;32m");
		case '3': printf("\033[0;33m");
		case '4': printf("\033[0;34m");
		case '5': printf("\033[0;35m");
		case '6': printf("\033[0;36m");
	}
}

int n,m,nr,k,A[10][10],minn=10000,x0,y0;
int B[10][10],R[10][10];
//matricea de generare si matricea care retine drumul minim
ifstream f("fotografie.in");
ofstream fout("date.out");
void afisare()
{///afiseaza o solutie si o compara cu solutia de drum minim
    int i,j;
    nr++;
    for(i=1;i<=n;i++)
        {
		
		for(j=1;j<=n;j++){
		chcolor(1);
	    cout<<B[i][j]<<" ";
    }
    cout<<endl;}
cout<<endl;
 }

 void bt(int x,int y, int cul)
  { int xx,yy;
  for(int i=0;i<4;i++)
    { xx=x+dx[i];
      yy=y+dy[i];
     if(B[xx][yy]==0 && A[xx][yy]==cul)
        {
         B[xx][yy]=cul;
         A[xx][yy]=0;
         bt(xx,yy,cul);

         }}}
void golesc(int B[10][10])
{
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
          B[i][j]=0;
}
int main()
{ f>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
         f>>A[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
      if(A[i][j])
      {golesc(B);
       B[i][j]=A[i][j];
       bt(i,j,A[i][j]);
       afisare();
       }
fout<<nr;
}
