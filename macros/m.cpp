#include <iostream>
using namespace std;
 void main ()

{
	 setlocale(LC_ALL, "Russian");
#define SHORT
#if defined SHORT 
	 cout << " short �������� " << sizeof(short) << " ����� ������ " << endl;
	 cout << " unsigned short: " << 0 << " ... " << USHRT_MAX << endl;
	 cout << " signed short: " << SHRT_MIN << " ... " << SHRT_MAX << endl;
#endif
//#define LONG
#if defined LONG
     cout << " long �������� " << sizeof(long) << " ����� ������ " << endl;
	 cout << " unsigned long: " << 0 << " ... " << ULONG_MAX << endl;
     cout << " signet long: " << LONG_MIN << " ... " << LONG_MAX << endl;
#endif
//#define INT
#if defined INT
	cout << " int �������� " << sizeof(int) << " ����� ������ " << endl;
	cout << " unsigned int: " << 0 << " ... " << UINT_MAX << endl;
	cout << " signed int: " << INT_MIN << " ... " << INT_MAX << endl;
#endif
//#define LONG_LONG
#if defined LONG_LONG
	cout << " long long �������� " << sizeof(long long) << " ����� ������ " << endl;
	cout << " unsigned long long: " << 0 << " ... " << ULLONG_MAX << endl;
	cout << " signed long long: " << LLONG_MIN << " ... " << LLONG_MAX << endl;
#endif
 } 