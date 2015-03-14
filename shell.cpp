#include <iostream>
#include <string>
#include <sys/types.h>
#include <dirent.h>
using namespace std;

int main ()
{
	bool cont = true;
	string command;
	string dir_name;

	while (cont)
	{
		cout << ">>>  ";
		cin >> command;

		if (command == "quit")
		{
			cont = false;
		}

		else if (command == "dir")
		{
			cout << "Enter the directory name: ";
			cin  >> dir_name;

			DIR* dirp = opendir(dir_name.c_str());
			struct dirent* dp;

			if (dirp) 
			{
			    while ((dp = readdir(dirp)) != NULL) 
			    {
			        cout << (dp -> d_name) << endl;
			    } 
			}
		}


	}

	return 0;
}
