#include <iostream>
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\Ierarhie.h";
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\TreeNode.h";
#include <math.h>

using namespace std;

struct PB3 {

	int ct = 0;

	void nrFrunzePerf(Node* node)
	{
		if (node == NULL)
			return;
		if (node->left == NULL && node->right == NULL && perfect(node->data))
		{
			ct++;
			return;
		}

		nrFrunzePerf(node->left);
		nrFrunzePerf(node->right);
	}

	bool perfect(int nr)
	{
		if (sqrt(nr) == (int)sqrt(nr))
			return true;
		return false;
	}
};