#include <iostream>
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\Ierarhie.h";
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\TreeNode.h";

using namespace std;

struct PB9 {
	Ierarhie ierarhie;

	void rezolva(Node* node)
	{
		ierarhie.root = new Node();
		ierarhie.root->data = node->data * 10;

		built(ierarhie.root);
	}

	void built(Node* node)
	{
		if (node == NULL)
			return;

		if (node->left != NULL)
		{
			ierarhie.insert(node->data * 10, node->left->data * 10);
		}
		if (node->right != NULL)
		{
			ierarhie.insert(node->data * 10, node->right->data * 10);
		}
		built(node->left);
		built(node->right);
	}
};