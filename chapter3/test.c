#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string str("hello world");
	for( auto c : str )
		cout << c;
	
	return 0;
}
