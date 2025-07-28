#include <iostream>
using namespace std;

int main()
{
	int n , xord = 0;
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		int x;
        scanf("%d" , &x);
		xord = xord xor x;
	}
	cout << xord << endl;
	return 0;
}
