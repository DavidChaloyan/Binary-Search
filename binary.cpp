#include <iostream>
using namespace std;
int search(int arr[], int l, int r, int x)
{
	if (l <= r) 
	{
		int m=(l+r)/2;
		if ( arr[m] == x)
			return m;
		if ( arr[m] > x) 
			return search(arr,l, m-1, x);
		if ( arr[m] < x)
			return search(arr, m+1, r, x);
	}
	return -1;
}
int main ()
{
	int arr[]={ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int size = sizeof(arr)/sizeof(arr[0]);
	int x;
	cout<<" Insert a number which you want to find "<<endl;
	cin >>x;
	int result = search (arr, 0, size-1, x);
	if ( result == -1)
		cout<<"Your number is apcent from this array"<<endl;
	else
		cout<<"Your number is in "<<result<<" index"<<endl;
	return 0;
}
