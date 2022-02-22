#include <iostream>

using namespace std;

int main()
{
	int a[50];  //因為n保證不超過50
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
	    cin >> a[i];
	}
	for(int i=0;i<n;i++){
	    cout << a[i] << "　";  //把陣列裡的每一個值印出來，以空白隔開
	}	
	for(int i=n-1;i>=0;i--){
		cout << endl;
		cout << "n:" <<a[i] << " i:" << i ;
	} 
	return 0;
	
	
}
