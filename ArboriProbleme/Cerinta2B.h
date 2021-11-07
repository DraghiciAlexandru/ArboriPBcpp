#include <iostream>
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\Ierarhie.h";
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\TreeNode.h";

using namespace std;

struct PB2_2 {

	int m = INT_MIN;

	void minim(Node* node) {
		if (node == NULL)
			return;
		if (produsCif(node->data) != 0)
			if (node->data > m&& node->data% produsCif(node->data) == 0)
				m = node->data;
		minim(node->left);
		minim(node->right);
	}

	int produsCif(int nr)
	{
		if (nr == 0)
			return 0;

		int p = 1;
		while (nr > 0)
		{
			p *= nr % 10;
			nr = nr / 10;
		}
		return p;
	}
};