// this programm calculates the power of your PC based on the computation speed 
//beta verison (maybe this program is not working correctly)
#include<iostream>
#include<Windows.h>
#include<fstream>
#include<thread>
using namespace std;
int language, rus_start, timer = 900, cycle = 0, stop, start = 0;
void timerfunc()
{
	while (timer != 0)
	{
		timer = timer - 1;
		Sleep(1000);
	}
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Hello,Set your language..." << endl;
	cout << "����� ����������! �������� ���� ����..." << endl;
	cout << "1.������� (��� ������ ����� ����� ������� ����� 1)" << endl;
	cout << "2.English(to select this language enter a number 2)" << endl;
	cin >> language;
	if (language == 1)
	{
		cout << "�� ������� ������� ����." << endl;
		cout << "��� ������� ������������ ������� ����� 1,��� ������ �� ��������� 0" << endl;
		cin >> rus_start;
		}
	if (rus_start == 1)
	{
		thread thr(timerfunc);
		cout << "������� ������������� �������,�������� 15 �����" << endl;
		ofstream fout;
		fout.open("C:\\temp\\Test.txt");
		cout << "->������ ��������� ���� 'Test.txt'" << endl;
		while (timer != 0)
		{
			start = start + 1;
			fout << start;
			fout << ",";
			cycle = cycle + 1;
		}
		cout << "-> �� 15 ����� �������: " << cycle << " ����������" << endl;
		cout << "-> �������� ���������� ����� 'Test.txt'...." << endl;
		fout.close();
		system("del C:\\temp\\Test.txt");
		cout << "-> ��������� ���� 'Test.txt' ������..." << endl;
		Beep(494, 250);
		Sleep(1000);
		Beep(494, 250);
		Sleep(1000);
		Beep(494, 250);
		cout << "�������� ��������� ����� 30 ������..." << endl;
		Sleep(30000);
		exit;
	}
	if (rus_start == 0)
	{
		exit;
	}
	if (language == 2)
	{
		cout << "You have selected English." << endl;
		cout << "To start testing, enter the number 1, to exit the program enter the number 0." << endl;
		cin >> rus_start;
	}
	if (rus_start == 1)
	{
		thread thr(timerfunc);
		cout << "Testing process started, wait 15 minutes." << endl;
		ofstream fout;
		fout.open("C:\\temp\\Test.txt");
		cout << "->Temporary file created 'Test.txt'" << endl;
		while (timer != 0)
		{
			start = start + 1;
			fout << start;
			fout << ",";
			cycle = cycle + 1;
		}
		cout << "-> Done in 15 minutes: " << cycle << " calculations" << endl;
		cout << "-> Deleting a temporary file 'Test.txt'...." << endl;
		fout.close();
		system("del C:\\temp\\Test.txt");
		cout << "->temporary file 'Test.txt' deleted..." << endl;
		Beep(494, 250);
		Sleep(1000);
		Beep(494, 250);
		Sleep(1000);
		Beep(494, 250);
		cout << "Closing the program after 30 seconds ..." << endl;
		Sleep(30000);
		exit;
	}
	if (rus_start == 0)
	{
		exit;
		
	}
	}