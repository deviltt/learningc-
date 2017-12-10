#include <iostream>

using namespace std;

int main()
{
	string s("hello world\n");
/*
	if(s.begin() != s.end()){
		auto it = s.begin();
		*it = toupper(*it);
	}
*/
	for(auto it = s.begin(); it != s.end() && !isspace(*it); it++){
		*it = toupper(*it);
	}

	cout << s;
}
