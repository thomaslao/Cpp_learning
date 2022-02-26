#include <iostream> 
using namespace std;

int main(){
	int n=6;
	int a[n];
	for (int i=0; i<n; i++)
		cin >> a[i];
		
	int guess=-1;
	while (cin >> guess && guess != -1)
	{
		bool bingo=false;
		for (int i=0; i<n && !bingo; i++)	
			bingo = bingo || guess == a[i];
			
		if (bingo)
			cout << "congratulations" << endl;
		else
			cout << "miss it" << endl;
		
	}
}
