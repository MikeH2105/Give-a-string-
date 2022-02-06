//1. Дан рядок символів. Замінити в ньому всі пробіли на табуляцію

#include <iostream>
#include <locale>
#include <string>
#include <windows.h>
using namespace std;

int main()
{	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string text;
	cout << "Будь ласка введіть текст для заміни пробілів на табуляцію... " << endl;	
	getline(cin, text);		
	int size = text.size();	
	for (int i = 0; i < size; i++)
	{
		if (text[i] == ' ') {		
			text[i] = '\t';	
		}
	}
	cout << text << endl;
}

