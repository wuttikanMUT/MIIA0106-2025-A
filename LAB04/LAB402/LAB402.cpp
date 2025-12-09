#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i = 0;
	cout << "Even number for 2 to 20" << endl;
	for (i = 2; i < 21; i++)
	{
		if (i % 2 == 0)
			cout << i << endl;
	}

	return 1;
}

