/* string类的输入函数会忽略开头的空白符，从第一个字符开始读起
   直到遇到下一个空白符 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string line;
	while(cin >> line){
		cout << line << endl;
	}
	return 0;
}
