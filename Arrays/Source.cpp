#include<iostream>
using namespace std;

#define tab "\t"
void main()
{
	setlocale(LC_ALL, "ru");
	
	const int b = 10;
	int arr[b] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//����� ��������� ������� �� �����;
	for (int i = 0; i < b; i++)
	{
		cout << arr[i] << tab;
	} cout << endl;

	//����� ������� �����
	int number_of_shifts;
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < b; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[b - 1] = buffer;
	}
	//����� ���������� �������;
	for (int i = 0; i < b; i++)
	{
		cout << arr[i] << tab;
	} cout << endl;


/*const int SIZE = 5;
	int arr[SIZE] = { 3, 5, 8, 4, 18 };
	double sum = 0;
	int min = arr[0];
	int max = arr[0];*/
	/*cout << "������� �������� ���������: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	for (int i = 0; i < SIZE; i++)
	{
		if (min > arr[i]) min = arr[i];
		if (max < arr[i]) max = arr[i];
	}
	cout << "������������ ��������: " << max << endl;
	cout << "����������� ��������: " << min << endl;*/


	


	/*cout << "������� �������� ���������: ";
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << sum / SIZE << endl;*/



	/*cout << "������� �������� ���������: ";
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cin >> arr[i];
	}*/

	//���� ��������� ������� � ����������;
	/*cout << "������� �������� ���������: ";*/
	/*for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}*/

	//����� ������� �� �����;






	// ����� ������� �� ����� � �������� ������� (�� ���������� �������� � �������);

	/*cout << "������� �������� ���������: ";
	for (int i = SIZE; i < 0; i++)
	{
		cin >> arr[i];
	}*/

}