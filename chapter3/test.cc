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
	
/*	decltype(str.size()) punct_cnt = 0;	//define the variable with the function str.size()


	for( auto c : str){
		if(ispunct(c))
			++punct_cnt;
	}
	cout << punct_cnt << " punctuation characters in " << str;
*/

/*	for( auto &c : str){
		c = toupper(c);
		cout << c << str[0];
	}
	cout << str;
*/
/*	if(!str.empty())
		str[0] = toupper(str[0]);
	cout << str;
*/
	for(decltype(str.size()) index = 0; 
		index != str.size() && !isspace(str[index]); index++)
		str[index] = toupper(str[index]);
	cout << str;
	return 0;
}
