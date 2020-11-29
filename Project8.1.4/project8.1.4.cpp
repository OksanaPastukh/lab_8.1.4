//Дано літерний рядок, який містить послідовність символів s0, …, sn, ….Відомо, що
//серед цих символів є по крайній мірі три крапки.
//1. Знайти число і таке, що sі – третя за порядком крапка.
//2. Замінити кожний четвертий символ крапкою.
#include <iostream>
#include <string>
using namespace std;
int find_index(const string s)
{
	int count = 0;
	size_t pos = 0;
	while ((pos = s.find('.', pos)) != -1)
	{
		count++;
		
		if (count == 3)
			return pos;
		pos++;
	}
	return 0;
}

string Change(string& s)
{
	for (int pos = 3; s[pos] != '\0'; pos++)
	{
		if ((pos + 1) % 4 == 0)
		{
			s.replace(pos, 1, ".");
		}
	}
	return s;
}
int main()
{
	//Створення літерного рядка
	string s;
	cout << "Enter string:" << endl;
	getline(cin, s);
	// Пошук індекса і, si- третя за порядком крапка
	cout << "String contained " << find_index(s) << "  '.'" << endl;
	//Заміна
    Change(s);
	cout << "Modified string  : " << s << endl;
	return 0;
}
