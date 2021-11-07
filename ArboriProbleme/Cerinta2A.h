#include <iostream>
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\Ierarhie.h";
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\TreeNode.h";

using namespace std;

struct PB2_1 {

	int m = INT_MIN;

	void rezolva(Ierarhie ierarhie, int z)
	{
		maxim(ierarhie.find(ierarhie.root, z));

		cout << m;
	}

	int maxim(Node* node)
	{
		if (node == NULL)
			return;

		if (node->data > m)
			m = node->data;

		maxim(node->left);
		maxim(node->right);
	}
};