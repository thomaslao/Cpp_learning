#include <iostream>

using namespace std;

int main()
{
	int a[50];  //�]��n�O�Ҥ��W�L50
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
	    cin >> a[i];
	}
	for(int i=0;i<n;i++){
	    cout << a[i] << "�@";  //��}�C�̪��C�@�ӭȦL�X�ӡA�H�ťչj�}
	}	
	for(int i=n-1;i>=0;i--){
		cout << endl;
		cout << "n:" <<a[i] << " i:" << i ;
	} 
	return 0;
	
	
}
