#include <iostream>
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\Ierarhie.h";

using namespace std;

struct PB1 {

	void inlocuieste(Node* node, int nr)
	{
		if (node == NULL)
			return;

		if (node->data == nr)
			node->data = oglindit(nr);

		inlocuieste(node->left, nr);
		inlocuieste(node->right, nr);
	}

	int oglindit(int nr)
	{
		int ogl = 0;
		while (nr > 0)
		{
			ogl = ogl * 10 + nr % 10;
			nr = nr / 10;
		}
		return ogl;
	}

};