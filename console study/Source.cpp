#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	
	srand(time(NULL));

	bool alreadyUsed;

	const int size = 10;
	int arr[size];
	
	for (int i = 0; i < size; )
	{
		alreadyUsed = false;
		int randomValue = rand() % 20;
		for (int j = 0; j < i; j++)
		{
			if (randomValue == arr[j])
			{
				alreadyUsed = true;
				break;
			}
		}

		if (!alreadyUsed)
		{
			arr[i] = randomValue;
			i++;
		}
	}
	
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
	
}	