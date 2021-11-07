#include <iostream>
#include <D:\c++\Programare_procedurala\Structuri_de_date\ArboriProbleme\ArboriProbleme\CerintaA.h>;
#include <D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\Ierarhie.h>;

using namespace std;

int main()
{
	Ierarhie ierarhie;
	ierarhie.root = new Node();
	ierarhie.root->data = 8;

	ierarhie.insert(8, 3);
	ierarhie.insert(8, 10);
	ierarhie.insert(3, 1);
	ierarhie.insert(3, 6);
	ierarhie.insert(6, 4);
	ierarhie.insert(6, 7);
	ierarhie.insert(10, 14);
	ierarhie.insert(14, 13);

}
