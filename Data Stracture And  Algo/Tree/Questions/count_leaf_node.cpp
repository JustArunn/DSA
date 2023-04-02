#include <iostream>
#include <queue>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "enter the data : " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "enter the data for inserting in left : " << data << endl;
    root->left = buildTree(root->left);
    cout << "enter the data for inserting in right : " << data << endl;
    root->right = buildTree(root->right);
    return root;
}
void inorder(node *root, int &count)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    inorder(root->left, count);

    if (root->left == NULL && root->right == NULL)
    {
        count++;
    }

    inorder(root->right, count);
}
int count_leaf_node(node *root)
{
    int count = 0;
    inorder(root, count);
    return count;
}
int main()
{
    node *root;
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "Number of Leaf node is : " << count_leaf_node(root);
    return 0;
}