/* getline函数会保存字符串中的空白符，直到遇到换行符 */

#include <iostream>
#include <string>

using std::cin; using std::cout;
using std::endl; using std::string;

int main()
{
	string line;
	while(getline(cin, line)){	//从cin中读时会读出换行符，但是写入line时不会写入换行符
		cout << line << endl;
	}
	return 0;
}
