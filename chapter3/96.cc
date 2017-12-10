#include <iostream>

using namespace std;

int main()
{
	string s("hello world\n");

	if(s.begin() != s.end()){
		auto it = s.begin();
		*it = toupper(*it);
	}
	cout << s;
}
