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
    cout << "enter root data : " << endl;
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

void preorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " "; // N
    preorder(root->left);      // L
    preorder(root->right);     // R
}
void postorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);     // L
    postorder(root->right);    // R
    cout << root->data << " "; // N
}
int maxDepth(node*root)
{
    if(root == NULL)return 0;
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    return max(left, right)+1;
    // return !root ? 0 : max(maxDepth(root->left), maxDepth(root->right))+1;
}
void buildFromLevelOrderTraversal(node *root)
{
    queue<node *> q;
    cout << "enter data for root " << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "enter left node for " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "enter right node for " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
    levelOrderTraveral(root);
}
int main()
{
    node *root = NULL;
    buildTree(root);
    // buildFromLevelOrderTraversal(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    cout<<"Depth of Tree -> "<< maxDepth(root);
    return 0;
}