#include <iostream> 

using namespace std;

int main()
{
	int a[21]={0},n,m; 
	cin>>n>>m;
	for (int i=1;i<=m;i++)
	{
		int num;
		cin >> num;
		a[num]=num;
	}
	for (int i=1; i<=n;i++)
	{
		if (a[i]==0)
			cout<<i<< "";
	}
}
	
	
	
