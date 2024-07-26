#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;
class Database
{
private:
	string path;
public:
	Database(string path);
	void addLine(string line);
	void removeLine(int id);
	void showDoc();
private:
	vector<string> splitStr(string str, char del);
};

