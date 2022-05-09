#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n , i ;
	cin >> n ;
	vector <char> arr(n) ;
	for ( i = 0 ; i < n ; i++  )
	{
		cin >> arr[i] ;
		arr.push_back(arr[i]) ;
	}
	sort( arr.begin() , arr.end() ) ;
	for ( i = 0 ; i < n ; i++  )
	{
		while ( i < n-1 && arr[i] == arr[i+1] )
			i++ ;
		cout << arr[i] ;
	}
	cout << endl ;
	return 0 ;
}

// INPUT :
//  4
//  cbba

// OUTPUT :
//    ab
