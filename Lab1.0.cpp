﻿// William Kirkpatrick
// Obtain a file for reading and track the total number of integers in the file, the first and second numbers in the file,
// and the last two numbers in the file. Output these numbers

#include "pch.h"
#include <iostream>
#include<string>
#include<fstream>

using namespace std;
using std::string;
using std::ifstream;

string ObtainFileName()
{
	string filename;
	cout << "Filename: " << endl;
	cin >> filename;
	return filename;
}

int main()
{
	double first;
	double second;
	double secondToLast;
	double last;
	string filename;
	ifstream file;
	double count = 0.0;
	double temp = 0.0;
	

	filename = ObtainFileName();

	file.open(filename);

	if (file.is_open())
	{
		file >> first;
		file >> second;
		file >> last;
		file >> temp;
	
		while (!(file.fail()))
		{
			secondToLast = last;
			last = temp;
			file >> temp;		
			
			count++;

		} 
		file.close();
	}
	else
	{
		cout << "error ";
	}

	count = count + 3;
	cout << "Count: " << count;
	cout << " | First Number: " << first;
	cout << " | Second Number " << second;
	cout << " | Second to last number: " << secondToLast;
	cout << " | Last number: " << last;
	
	return 0;
}
