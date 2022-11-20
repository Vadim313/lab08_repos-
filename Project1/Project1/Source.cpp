/*
ƒано л≥терний р€док, €кий м≥стить посл≥довн≥сть символ≥в s0, ..., sn, ... .
1. ѕ≥драхувати загальне число входжень символ≥в У+Ф, УЦФ, У=Ф в ц≥й посл≥довност≥.
2. «ам≥нити кожний ≥з символ≥в У+Ф, УЦФ, У=Ф парою з≥рочок У**Ф.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int Count(char* str, char c, char v, char b)
{
	int k = 0;
	for (int i = 0; str[i + 2] != '\0'; i++)
		if (c == str[i] && v == str[i + 1] && b == str[i + 2])
			k++;
	return k;
}
char* Change(char* dest, const char* str, char* t, int i)
{
	if (str[i + 2] != 0)
	{
		if (str[i] == '+' && str[i + 1] == '-' && str[i + 2] == '=')
		{
			strcat(t, "******");
			return Change(dest, str, t + 6, i + 3);
		}
		else
		{
			*t++ = str[i++];
			*t = '\0';
			return Change(dest, str, t, i);
		}
	}
	else
	{
		*t++ = str[i++];
		*t++ = str[i++];
		*t = '\0';
		return dest;
	}
}
int main()
{
	char str[101];
	char c = '+';
	char v = '-';
	char b = '=';
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "String contained " << Count(str, c, v, b) << " groups of '+, -, ='" << endl;
	char* dest1 = new char[151];
	dest1[0] = '\0';
	char* dest2;
	dest2 = Change(dest1, str, dest1, 0);
	cout << "Modified string (param) : " << dest1 << endl;
	cout << "Modified string (result): " << dest2 << endl;
	return 0;
}