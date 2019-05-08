#include<fstream.h>
#include<iostream.h>
#include<conio.h>

int main()
{
	clrscr();
	char data[100];
	ofstream outfile("afile.txt");
	cout << "writing to the file" << endl;
	cout << "Enter your name:";
	cin.getline(data, 100);
	outfile << data << endl;
	cout << "Enter your age:";
	cin >> data;
	outfile << data << endl;
	outfile.close();
	ifstream infile;
	infile.open("afile.txt");
	cout << "Reading from the file" << endl;
	infile >> data;
	cout << data << endl;
	infile >> data;
	cout << data << endl;
	infile.close();
	getch();
	return 0;
}