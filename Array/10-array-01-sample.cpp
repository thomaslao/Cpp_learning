#include <iostream>

using namespace std;

int main()
{
	int a[50];  //�]��n�O�Ҥ��W�L50
	int n, sum;
	cin >> n;
	for(int i=0;i<n;i++){
	    cin >> a[i];
	}
	for(int i=n-1;i>=0;i--){
		cout << endl;
		cout << "n:" <<a[i] << " i:" << i ;
		sum +=a[i];
	} 
		cout << "=" << sum << endl;
	return 0;
	
	
}
