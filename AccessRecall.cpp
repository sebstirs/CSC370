#include <iostream>

using namespace std;

int main()
{
	int minPermission;
	string permissions;
	int numUser;
	

	cout << "Enter the number of users you would like to check: ";
	cin >> numUser;
	int* rights = new int[numUser];
	cout << "Enter the Minimum level of permissions: ";
	cin >> minPermission;
	



	for (int i = 1; i <= numUser; i++)
	{
		cout << "Enter the user permission level for user " << i << ": ";
		cin >> rights[i];
	}

	for (int ii = 1; ii <= numUser; ii++) {
		if (rights[ii] >= minPermission)
		{
			permissions += 'A';
		}
		else
		{
			permissions += 'D';
		}
	}
	cout << permissions;

	return 0;
}