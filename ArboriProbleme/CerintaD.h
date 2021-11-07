#include <iostream>
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\Ierarhie.h";
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\TreeNode.h";
#include <queue>

using namespace std;

struct PB4 {

	int Y = 0;

	void vector(Node* node)
	{
		queue<Node*> que;

		que.push(node);

		int n = 0;

		while (que.size != 0)
		{
			if (que.front()->left != NULL)
			{
				que.push(que.front()->left);
			}
			if (que.front()->right != NULL)
			{
				que.push(que.front()->right);
			}

			n++;

			if (que.front()->data == Y)
			{
				cout << n << endl;
			}

			que.pop();
		}
	}

};