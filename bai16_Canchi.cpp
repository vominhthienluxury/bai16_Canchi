// bai16_Canchi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int nam=0,socan,sochi;
	cout << "12 con giap\n";
	string can[] = { "canh","tan","nham","quy","giap ","at","binh","dinh","mau","ky" };
	string chi[] = { "than","dau","tuat","hoi","ty","suu","dau","mao","thin","ti","ngo","mui" };
	
	for (int nam = 2000; nam <= 2024; nam++)
	{
		socan = nam % 10;
		sochi = nam % 12;
		cout <<"nam " << nam <<": " << can[socan] << " ";
		cout << chi[sochi]<<"\n";
	}
	return 0;
}
