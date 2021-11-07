#include <iostream>
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\Ierarhie.h";
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\TreeNode.h";

using namespace std;

struct PB8 {

	void rezolvare(Ierarhie ierarhie, int x)
	{
		cout << ierarhie.height(ierarhie.root);
		cout << ierarhie.nivel(ierarhie.root, x);
	}

};