#include <iostream>

using namespace std;

int main()
{
	int a[6];
	int n, guess;
	for (int i=0; i<=5 ; i++	)
		cin >> a[i];
	while(guess !=-1)
	{
		cin >> guess;
		for (int i=0; i<=5;i++)
		{
		
			if( a[i]==guess)
			{
				cout << "              " << "Congratulations" << endl;
			}
			else
				cout << "              " << "miss it" << endl ;
			
		}
	}
	
	return 0;
	
	
}
