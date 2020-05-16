#include <iostream>
#include <fstream>

using namespace std;

ofstream fout("date.out");
int n;
int nr = 0;
int a[20];
int f[20];


void afis( int k)
{
	nr++;
	for(int i = 1; i <= k; i++)
	{
		//cout<<' '<<f[i];
		if(f[i])
			fout<<a[i]<<' ';
	}
	//cout<<'\n';
	fout<<'\n';
}

int corect( int k)
{
	return 1;
}

void bt( int k)
{
	for (int i=0; i <= 1; i++)
	{
		f[k] = i;
		if(corect( k))
			if(k==n)
				afis( k);
			else
				bt( k+1 );
	}
}

int main ()
{
	cin>>n;

	for(int i=1; i<=n; i++)
	{
		cin>>a[i];
	}

	bt(1);
	cout<<" "<<nr;
}
