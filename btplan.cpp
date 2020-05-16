#include <iostream>
#include <fstream>
using namespace std;
///vectorii de deplasare
int dx[]={-1,-1,0,1,1, 1, 0,-1};
int dy[]={ 0, 1,1,1,0,-1,-1,-1};
int n,nr,k,A[10][10],minn=10000,x0,y0;//matricea de configuratie
int B[10][10],R[10][10];//matricea de generare si matricea care retine drumul minim
ifstream f("backtracking2D.in");

void afisare(int k)
{///afiseaza o solutie si o compara cu solutia de drum minim
int i,j;
nr++;
 for(i=1;i<=n;i++)
    {
	for(j=1;j<=n;j++)
        cout<<B[i][j]<<" ";
      cout<<endl;}
      cout<<endl;
if(k<minn)
{minn=k;
    for(i=1;i<=n;i++)
      for(j=1;j<=n;j++)R[i][j]=B[i][j];
}}

void bt(int x,int y, int pas)
{
int xx,yy;
for(int i=0;i<8;i++)
{
xx=x+dx[i];
yy=y+dy[i];
///if(corect())
if(B[xx][yy]==0&&A[xx][yy]!=1&&xx>=1&&xx<=n&&yy<=n&&yy>=1)
           {//pe drumul de mers marcam cu pas in pozitia noua in care am ajuns
            B[xx][yy]=pas;
                       //if(solutie())
            if(xx==1||yy==1||xx==n||yy==n)afisare(pas);
                                else bt(xx,yy,pas+1);
           //refacem
            B[xx][yy]=0;
           }}}
int main()
{
f>>n;
for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
        f>>A[i][j];
f>>x0>>y0;
B[x0][y0]=1;
bt(x0,y0,2);
cout<<"Drum minim:"<<endl;
for(int i=1;i<=n;i++)
{for(int j=1;j<=n;j++)
    cout<<R[i][j]<<" ";
    cout<<endl;}
    cout<<"NR sol:"<<nr;
return 0;
}
