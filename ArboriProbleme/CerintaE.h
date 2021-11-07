#include <iostream>
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\Ierarhie.h";
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\TreeNode.h";

using namespace std;

struct PB5 {

	void gemene(Node* node)
	{
		if (node == NULL)
			return;
		if (node->left != NULL && node->right != NULL)
		{
			if (node->left->data == node->right->data)
				cout << node->data << endl;
		}
		gemene(node->left);
		gemene(node->right);
	}
};