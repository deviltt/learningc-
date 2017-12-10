#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> num{1,2,3,4,5,6,7,8,9,10};

	for(auto it = num.begin(); it != num.end(); it++){
		*it  *= 2;
//		cout << *it << " ";
	}
	for(auto i : num)
		cout << i << " ";
	cout << endl;
	return 0;
}
