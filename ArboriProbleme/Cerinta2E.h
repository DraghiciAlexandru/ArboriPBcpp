#include <iostream>
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\Ierarhie.h";
#include "D:\c++\Programare_procedurala\Structuri_de_date\Arbori\Arbori\Arbori\TreeNode.h";
#include <string>

using namespace std;

struct PB2_5 {

	bool verificare(Node* node, string propozitie)
	{
		if (propozitie == preorder(node).substr(0, preorder(node).size() - 1))
			return true;
		if (propozitie == inorder(node).substr(0, preorder(node).size() - 1))
			return true;
		if (propozitie == postorder(node).substr(0, preorder(node).size() - 1))
			return true;
	}

	string preorder(Node* node)
	{
		if (node == NULL)
			return "";

		return to_string(node->data) + " " + preorder(node->left) + preorder(node->right);
	}

	string inorder(Node* node)
	{
		if (node == NULL)
			return "";

		return inorder(node->left) + to_string(node->data) + " " + inorder(node->right);
	}

	string postorder(Node* node)
	{
		if (node == NULL)
			return "";

		return postorder(node->left) + postorder(node->right) + to_string(node->data) + " ";
	}

};