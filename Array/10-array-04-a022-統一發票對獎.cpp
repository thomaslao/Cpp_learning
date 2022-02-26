#include <iostream>

using namespace std;

int main()
{
	int a[6];
	int n, guess, bingo;
	for (int i=0; i<=5 ; i++	)
		cin >> a[i];
	cin >> guess;
	while(guess !=-1)
	{
		bingo =0;
		
		for (int i=0; i<=5;i++)
		{
			if( a[i]==guess)
			bingo=1;
		}
		
		if (bingo==1)
			cout << "              " << "Congratulations" << endl;
		else
			cout << "              " << "miss it" << endl ;
		cin >> guess;
	}
	
	return 0;
	
	
}
