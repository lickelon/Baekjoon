#include <cstdio>
#include <cstdlib>

struct node
{
	int data;
	node* right;
	node* left;
};
node* root;

node* init()
{
	node* temp = (node*)malloc(sizeof(node));
	temp->right = NULL;
	temp->left = NULL;
	return temp;
}

void insert(node* _node, int value)
{
	if (value > _node->data) {
		if (_node->right) insert(_node->right, value);
		else {
			_node->right = init();
			_node->right->data = value;
		}
	}
	else {
		if (_node->left) insert(_node->left, value);
		else {
			_node->left = init();
			_node->left->data = value;
		}
	}
}

void solve(node* _node)
{
	if (_node->left) solve(_node->left);
	if (_node->right) solve(_node->right);
	printf("%d\n", _node->data);
}
int main()
{
	int input;
	root = init();
	scanf("%d", &root->data);
	while (scanf("%d", &input) != EOF)
	{
		insert(root, input);
	}
	solve(root);
}