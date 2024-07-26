#include "Database.h"

Database::Database(string path)
{
	this->path = path;
}

void Database::addLine(string line)
{
	ofstream out(path, ios::app);
	out << line << endl;
	out.close();
}

void Database::removeLine(int id)
{
	string buf;
	string allLines = "";
	ifstream in(path);
	if (in.is_open()) {
		while (getline(in, buf)) {
			if (splitStr(buf, ';')[0] != to_string(id)) {
				allLines += buf + "\n";
			}			
		}
		in.close();

		ofstream out(path);
		out << allLines;
		out.close();
	}
	else {
		in.close();
		throw("file not found");
	}
}

void Database::showDoc()
{
	string buf;
	ifstream in(path);
	if (in.is_open()) {
		while (getline(in, buf)) {
			cout << buf << endl;
		}
	}
	else {
		in.close();
		throw("file not found");
	}
	in.close();
}

vector<string> Database::splitStr(string str, char del)
{
	vector<string> result;
	string buf = "";
	for (int i = 0; i < size(str); i++) {
		if (str[i] != del) {
			buf += str[i];
		}
		else {
			result.push_back(buf);
			buf = "";
		}
	}
	result.push_back(buf);
	return result;
}
