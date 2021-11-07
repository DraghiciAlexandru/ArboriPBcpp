#include <iostream>
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\Ierarhie.h";
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\TreeNode.h";

using namespace std;

struct PB2 {

	void frunze(Node* node)
	{
		if (node == NULL)
			return;
		if (node->left == NULL && node->right == NULL)
		{
			cout << node->data;
			return;
		}
		frunze(node->left);
		frunze(node->right);
	}

};