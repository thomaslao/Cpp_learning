 #include <iostream>
 
 using namespace std;
 
 int main()
 {
 	int a[10], n, m, big=0, small=0;
 	cin >> n;
 	for(int i=0; i<n; i++)
 		cin >> a[i] ;
 	cin >> m;
	for (int i=0;i<n;i++) 
	{
		if(m>a[i])
			big+=1;
		else if(m<a[i])
			small+=1;
	}
	cout << big << " " <<small; 
 } 
  
 
  
