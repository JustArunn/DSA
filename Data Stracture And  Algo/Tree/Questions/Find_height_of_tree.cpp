#include <bits/stdc++.h>
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

void inorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);       // L
    cout << root->data << " "; // N
    inorder(root->right);      // R
}
void levelOrderTraveral(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

/*********************************************************************************************************************************/
int maxLen(node *root) { return (!root) ? 0 : max(maxLen(root->left), maxLen(root->right)) + 1; }
/********************************************************************************************************************************/

int main()
{
    node *root;
    root = buildTree(root);
    cout << "Level Order is => " << endl;
    levelOrderTraveral(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "Height of tree is : " << maxLen(root);
    return 0;
}