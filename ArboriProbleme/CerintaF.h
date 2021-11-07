#include <iostream>
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\Ierarhie.h";
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\TreeNode.h";
#include <string>

using namespace std;

struct PB6 {

	string inPost = "";

	string postordine(Node* node)
	{
		if (node == NULL)
			return "";

		return postordine(node->left) + postordine(node->right) + to_string(node->data) + ",";
	}

	bool sirCrescator(string post)
	{
		char* numere = const_cast<char*>(post.c_str());

		char* nr;

		nr = strtok(numere, ",");

		while (strtok(NULL, ",") != NULL)
		{
			nr = strtok(NULL, ",");
			if (nr < strtok(NULL, ","))
				return true;
		}
		return false;
	}

};