#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int num;
	vector<int> grade(10, 0);

	while(cin >> num){
		if(num > 100)
			cout << "error\n";
		auto it = grade.begin();
		it = it + num / 10;
		(*it)++;
	}
	for(auto i : grade){
		cout << i << " ";
	}
	cout << endl;
}
