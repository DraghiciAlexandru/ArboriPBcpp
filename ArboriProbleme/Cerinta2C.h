#include <iostream>
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\Ierarhie.h";
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\TreeNode.h";

using namespace std;

struct PB2_3 {

	int vector[100];
	int n = 0;

	void built(Node* node)
	{
		if (node == NULL)
			return;
		if (prim(node->data))
		{
			vector[n] = node->data;
			n++;
		}
		built(node->left);
		built(node->right);
	}

	bool prim(int nr)
	{
		if (nr == 0 || nr == 1)
			return false;

		for (int i = 2; i < nr / 2; i++)
			if (nr % i == 0)
				return false;
		return true;
	}

};