#include <iostream>
#include <conio.h>
#include <string>
#include <random>

using namespace std;


// comment

void cubik (int a)
{
	char vg = '|', gg = '_', ps = ' ', tchk = '*';
	

	if (a == 1){
		cout << ps << gg << gg << gg << gg << gg << gg << gg << gg << gg << ps << endl;
		cout << vg << ps << ps << ps << ps << ps << ps << ps << ps << ps << vg << endl;
		cout << vg << ps << ps << ps << ps << ps << ps << ps << ps << ps << vg << endl;
		cout << vg << ps << ps << ps << ps << ps << ps << ps << ps << ps << vg << endl;
		cout << vg << ps << ps << ps << ps << tchk << ps << ps << ps << ps << vg << endl;
		cout << vg << ps << ps << ps << ps << ps << ps << ps << ps << ps << vg << endl;
		cout << vg << ps << ps << ps << ps << ps << ps <<  ps << ps << ps << vg << endl;
		cout << vg << gg << gg << gg << gg <<  gg << gg << gg << gg << gg << vg << endl;
	} else if (a == 2) {
		cout << ps << gg << gg << gg << gg << gg << gg << gg << gg << gg << ps << endl;
		cout << vg << ps << ps << ps << ps << ps << ps << ps << ps << ps << vg << endl;
		cout << vg << ps << tchk << ps << ps << ps << ps << ps << ps << ps << vg << endl;
		cout << vg << ps << ps << ps << ps << ps << ps << ps << ps << ps << vg << endl;
		cout << vg << ps << ps << ps << ps << ps << ps << ps << ps << ps << vg << endl;
		cout << vg << ps << ps << ps << ps << ps << ps << ps << ps << ps << vg << endl;
		cout << vg << ps << ps << ps << ps << ps << ps <<  ps << tchk << ps << vg << endl;
		cout << vg << gg << gg << gg << gg <<  gg << gg << gg << gg << gg << vg << endl;
	} else if (a == 3) {
		cout << ps << gg << gg << gg << gg << gg << gg << gg << gg << gg << ps << endl;
		cout << vg << ps << ps << ps << ps << ps << ps << ps << ps << ps << vg << endl;
		cout << vg << ps << tchk << ps << ps << ps << ps << ps << ps << ps << vg << endl;
		cout << vg << ps << ps << ps << ps << ps << ps << ps << ps << ps << vg << endl;
		cout << vg << ps << ps << ps << ps << tchk << ps << ps << ps << ps << vg << endl;
		cout << vg << ps << ps << ps << ps << ps << ps << ps << ps << ps << vg << endl;
		cout << vg << ps << ps << ps << ps << ps << ps <<  ps << tchk << ps << vg << endl;
		cout << vg << gg << gg << gg << gg <<  gg << gg << gg << gg << gg << vg << endl;
	} else if (a == 4) {
		cout << ps << gg << gg << gg << gg << gg << gg << gg << gg << gg << ps << endl;
		cout << vg << ps << ps << ps << ps << ps << ps << ps << ps << ps << vg << endl;
		cout << vg << ps << tchk << ps << ps << ps << ps << ps << tchk << ps << vg << endl;
		cout << vg << ps << ps << ps << ps << ps << ps << ps << ps << ps << vg << endl;
		cout << vg << ps << ps << ps << ps << ps << ps << ps << ps << ps << vg << endl;
		cout << vg << ps << ps << ps << ps << ps << ps << ps << ps << ps << vg << endl;
		cout << vg << ps << tchk << ps << ps << ps << ps <<  ps << tchk << ps << vg << endl;
		cout << vg << gg << gg << gg << gg <<  gg << gg << gg << gg << gg << vg << endl;
	} else if (a == 5) {
		cout << ps << gg << gg << gg << gg << gg << gg << gg << gg << gg << ps << endl;
		cout << vg << ps << ps << ps << ps << ps << ps << ps << ps << ps << vg << endl;
		cout << vg << ps << tchk << ps << ps << ps << ps << ps << tchk << ps << vg << endl;
		cout << vg << ps << ps << ps << ps << ps << ps << ps << ps << ps << vg << endl;
		cout << vg << ps << ps << ps << ps << tchk << ps << ps << ps << ps << vg << endl;
		cout << vg << ps << ps << ps << ps << ps << ps << ps << ps << ps << vg << endl;
		cout << vg << ps << tchk << ps << ps << ps << ps <<  ps << tchk << ps << vg << endl;
		cout << vg << gg << gg << gg << gg <<  gg << gg << gg << gg << gg << vg << endl;
	} else if (a == 6) {
		cout << ps << gg << gg << gg << gg << gg << gg << gg << gg << gg << ps << endl;
		cout << vg << ps << ps << ps << ps << ps << ps << ps << ps << ps << vg << endl;
		cout << vg << ps << tchk << ps << ps << ps << ps << ps << tchk << ps << vg << endl;
		cout << vg << ps << ps << ps << ps << ps << ps << ps << ps << ps << vg << endl;
		cout << vg << ps << tchk << ps << ps << ps << ps << ps << tchk << ps << vg << endl;
		cout << vg << ps << ps << ps << ps << ps << ps << ps << ps << ps << vg << endl;
		cout << vg << ps << tchk << ps << ps << ps << ps <<  ps << tchk << ps << vg << endl;
		cout << vg << gg << gg << gg << gg <<  gg << gg << gg << gg << gg << vg << endl;
	} 

	cout << endl;
}


int main ()
{
	setlocale (0,"rus");
	int a, b;

	srand(rand());

	a = (rand() % 6) + 1;
	b = (rand() % 6) + 1;

	cubik (a);
	cubik (b);

	cout << "Нажми любую клавишу чтобы бросить кубики" << endl;
	_getch ();

	system ("cls");

	main ();

	return 0;

}