#include <iostream>
#include <cctype>
#include <string>
	
using namespace std;

int main()
{
	string str("i, love, you, Mr.dong,!");
/*
		for(decltype(str.size()) index = 0;
			index < str.size(); index++){
			if(ispunct(str[index]))
				for(decltype(str.size()) n = index; n < str.size(); n++)
					str[n] = str[n+1];
		}
	}

	cout << str << endl;
*/
	for(auto c : str){
		if(ispunct(c))
			c = '\0';
		cout << c;
	}
	cout << endl;

/*	decltype(str.size()) punct_cnt = 0;
	for(auto c : str)
		if(ispunct(c))
			++punct_cnt;
	cout << punct_cnt << endl;
*/
	return 0;
}
