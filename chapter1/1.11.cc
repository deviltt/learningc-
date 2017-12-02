#include "iostream"

int main()
{
	int t, min, max;
	std::cout << "min = ";
	std::cin >> min;
	std::cout << "max = ";
	std::cin >> max;
	if(min > max){
		t   = min;
		min = max;
		max = t;
	}
	while(min < max-1){
		++min;
		std::cout << min << " ";
	}
	std::cout << std::endl;
	return 0;
}
