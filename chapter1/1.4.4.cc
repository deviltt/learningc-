#include "iostream"

int main()
{
	int currval = 0, val = 0;
	if(std::cin >> currval){	//读取第一个数
		int cnt = 1;
		while(std::cin >> val){
			if(val == currval)
				++cnt;
			else{
				std::cout << currval << " occurs " << cnt << " times " << std::endl;
				currval = val;
				cnt = 1;
			}
		}
				std::cout << currval << " occurs " << cnt << " times " << std::endl;	//读取最后一个值的个数，因为最后一个数读完后就退出if循环了并没有打印
	}
	return 0;
}
