#include <iostream>
using namespace std;

int iffa[124];
int n;
int i;

void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 124))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 124 element.\n\n";
	}

	cout << "\n--------------------\n";
	cout << " Enter array elements \n";
	cout << "----------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> iffa[i];
	}
}

void binarySearch()
{
	int iffatuz = 0;
	int zahra = n - 1;
	int mid = (iffatuz + zahra) / 2;

	
		{
			cout << "\nEnter the element you want to search: ";
			int item;
			cin >> item;

			
				while (zahra <= iffatuz) 
				{
					
					if (iffa[mid] == item)
					{
						cout << "found";
						cout << "\n" << item << " found at position " << (iffatuz + 1) << endl;
						break;
					}

					else if (iffa[mid] > item);
					{
						zahra = mid - 1;
					}

					if (iffa[mid] < item);
					{
						iffatuz = mid - 1;
					}




				}
				


					
			
			


		}

}



int main()
{
	input();
	binarySearch();
}

