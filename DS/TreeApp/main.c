/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.20
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct treeNode
{
	char data;
	struct treeNode* left;
	struct treeNode* right;
} treeNode;

treeNode* makeRootNode(char data, treeNode* leftNode, treeNode* rightNode)
{
	treeNode* root = (treeNode*)malloc(sizeof(treeNode));
	root->data = data;
	root->left = leftNode;
	root->right = rightNode;
	return root;
}

void preorder(treeNode* root)
{
	if (root)
	{
		printf("%c", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(treeNode* root)
{
	if (root)
	{
		inorder(root->left);
		printf("%c", root->data);
		inorder(root->right);
	}
}

void postorder(treeNode* root)
{
	if (root)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%c", root->data);
	}
}

// 메인함수
int main(void)
{
	treeNode* n11 = makeRootNode('K', NULL, NULL);
	treeNode* n10 = makeRootNode('J', NULL, NULL);
	treeNode* n9 = makeRootNode('I', NULL, NULL);
	treeNode* n8 = makeRootNode('H', NULL, NULL);
	treeNode* n7 = makeRootNode('G', NULL, n11);
	treeNode* n6 = makeRootNode('F', NULL, NULL);
	treeNode* n5 = makeRootNode('E', n9, n10);
	treeNode* n4 = makeRootNode('D', n8, NULL);
	treeNode* n3 = makeRootNode('C', n6, n7);
	treeNode* n2 = makeRootNode('B', n4, n5);
	treeNode* n1 = makeRootNode('A', n2, n3);

	printf("preorder :");
	preorder(n1);
	printf("\n");

	printf("inorder :");
	inorder(n1);
	printf("\n");

	printf("postorder :");
	postorder(n1);
	printf("\n");

	system("pause");
	return EXIT_SUCCESS;
}