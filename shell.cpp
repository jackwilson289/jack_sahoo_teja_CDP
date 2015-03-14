#include <iostream>
#include <string>
using namespace std;

int main ()
{
	bool cont = true;
	string command;

	while (cont)
	{
		cout << ">>>  ";
		cin >> command;

		if (command == "quit")
		{
			cont = false;
		}
	}

	return 0;
}
