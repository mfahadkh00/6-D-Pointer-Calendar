#include <iostream>
using namespace std;

void main()
{
	//6D Calender System - 
	//Dimensions:
	//Year, Month, Day, Hour, Minute, Seconds

	//Memory Allocation
	int****** calendar = new int***** [20]; //10 Year Calendar
	for (int i = 0; i < 20; i++)
	{
		calendar[i] = new int**** [12];
		for (int j = 0; j < 12; j++)
		{
			calendar[i][j] = new int*** [30];
			for (int k = 0; k < 30; k++)
			{
				calendar[i][j][k] = new int** [24];
				for (int l = 0; l < 24; l++)
				{
					calendar[i][j][k][l] = new int* [60];
					for (int m = 0; m < 60; m++)
					{
						calendar[i][j][k][l][m] = new int[60];
					}
				}
			}
		}
	}

	//2D Array to store details of current Appointment
	int apoint[6][2];
	for (int i = 0; i < 2; i++)
	{
		cout << "Year: ";
		cin >> appoint[0][i++];
		cout << "\nMonth: ";
		cin >> appoint[0][i++];
		cout << "\nDay: ";
		cin >> appoint[0][i++];
		cout << "\nHour: ";
		cin >> appoint[0][i++];
		cout << "\nSecond: ";
		cin >> appoint[0][i++];
		cout << "\n";
	}

}
