#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> num{0, 1, 2, 3};
	int a[4];
	int *p;
	p = a;

	for( auto i : num){
		*p = i;
		p++;
	}

	for( auto i : a)
		cout << i << " ";

	cout << endl;
}
