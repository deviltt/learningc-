#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int a[4]={1,2,3,4};
	vector<int> num(begin(a), end(a));
	
	for(auto i : num)
		cout << i << " ";

	cout << endl;
}
