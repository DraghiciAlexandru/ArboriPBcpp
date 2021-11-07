#include <iostream>
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\Ierarhie.h";
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\TreeNode.h";

using namespace std;

struct PB2_4 {

	int vector[100][1];
	int n = 0;

	void built(Node* node)
	{
		if (node == NULL)
			return;
		built(node->left);
		built(node->right);
		if (binar(node->data))
		{
			vector[n][0] = node->data;
			n++;
		}
	}

	bool binar(int nr)
	{
		if (nr % 10 != 0 || nr % 10 != 1)
			return false;

		else if (nr > 0) {
			return binar(nr / 10);
		}

		return true;
	}

};