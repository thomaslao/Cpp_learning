#include <iostream>

using namespace std;

int main()
{
	int a[10], max=0 ,location;
	int n;
	cin >> n;
	for (int i=0; i<n ; i++	)
		cin >> a[i];
	for (int i=0 ; i< n; i++)
	{
		if (max <a[i])
		{
			max=a[i];
			location=i+1;
		}
	}
	cout << location << " "<< max;
	return 0;
	
	
}
