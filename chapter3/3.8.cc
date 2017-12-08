#include <iostream>

int main()
{
	using namespace std;
	
	string	str("hello, world");
/*
	for(decltype(str.size()) index = 0;
		index < str.size(); index++)
		str[index] = 'X';
	cout << str << endl;
*/
	decltype(str.size()) index = 0;

	while(index < str.size()){
		str[index] = 'X';
		index++;
	}
	cout << str << endl;
	return 0;
}
