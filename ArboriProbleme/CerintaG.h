#include <iostream>
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\Ierarhie.h";
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\TreeNode.h";

using namespace std;

struct PB7 {

	int m = INT_MIN;

	void rezolva(Ierarhie ierarhie, int z)
	{
		maximDreapta(ierarhie.find(ierarhie.root, z)->right);

		cout << m;
	}

	int maximDreapta(Node* node)
	{
		if (node == NULL)
			return;

		if (node->data > m)
			m = node->data;

		maximDreapta(node->left);
		maximDreapta(node->right);
	}

};