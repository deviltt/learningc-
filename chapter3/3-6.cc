#include <iostream>

int main()
{
	using namespace std;
	
	string str("i love you dongli\n");

	for( auto c : str){	//only in the scope, c will done
		c = 'X';
		cout << c;
	}		
		
	cout << endl << str;	//str is't changed by c
	
	return 0;
}
