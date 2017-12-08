#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
/*	string str("hello world");
	for( auto c : str )
		cout << c;
	
	cout << endl;
	return 0; 
*/
	string str("hello, world!!!\n");
	
	decltype(str.size()) punct_cnt = 0;	//define the variable with the function str.size()


	for( auto c : str){
		if(ispunct(c))
			++punct_cnt;
	}
	cout << punct_cnt << " punctuation characters in " << str;
	return 0;
}
