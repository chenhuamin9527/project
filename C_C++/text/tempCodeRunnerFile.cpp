#include <iostream>

using namespace std;
int main()
{
	int sum = 1 , i = 1;
	// while (i < 20)
	// {
	// 	sum *= i;
	// 	i += 2;
	// }
	for (i = 1; i < 20; i = i+2)
	{
		sum *= i;
	}
	cout << sum;
	return 0;
}