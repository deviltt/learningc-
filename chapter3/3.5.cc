#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sumbuf, mybuf;
	
	while(getline(cin, mybuf)){
		sumbuf += mybuf + " ";
		cout << sumbuf;
	}
	return 0;
}
