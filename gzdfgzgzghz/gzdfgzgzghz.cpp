#include <iostream>
#include <fstream>
using namespace std;

char f[] = "texet.txt";
char txt[100000];

void sh(int a)
{
	int x;
	ofstream s_out(f);
	if (a == 0) cout << "Вводите текст для шифрования: ";
	if (a == 1) cout << "Вводите текст для дешифрования: ";
	cin >> x;
	cin.getline(txt, 100000, '\n');

	for (int i = 0; i < 100000; i++)
	{
		int b = txt[i];
		char s = 255 - b + 224;
		s_out << s;
	}
	s_out.close();
}
int main()
{
	int k;
	cout << "Выберете операцию (шифр-0 / дешифр-1): ";
	cin >> k;
	sh(k);
	if (k == 0) cout << "Текст зашифрован. ";
	else cout << "Текст дешифрован. ";
	cout << "Результат находится в файле texet.txt";
	return 0;
}