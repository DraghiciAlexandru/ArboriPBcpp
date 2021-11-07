#include <iostream>
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\Ierarhie.h";
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\TreeNode.h";
#include <math.h>

using namespace std;

struct PB10 {

	int s = 0;

	void suma(Node* node)
	{
		if (node == NULL)
			return;

		int sum = mijloc(node->data);
		int cifra = sum % 10;

		while (sum > 9)
		{
			sum = sum / 10;
			cifra += sum % 10;
		}

		if (perf(cifra % 10))
		{
			s + node->data;
		}

		suma(node->left);
		suma(node->right);
	}

	int mijloc(int nr)
	{
		if (nr > 99)
		{
			nr = nr / 10;
			int aux = 0, p = 1;
			while (nr > 9)
			{
				aux = (nr % 10) * p + aux;
				p *= 10;
				nr = nr / 10;
			}
			nr = aux;
			return mijloc(nr);
		}
		return nr;
	}

	bool perf(int nr)
	{
		if (sqrt(nr) == (int)sqrt(nr))
			return true;
		return false;
	}

};