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

    node(int data)
    {
        this->data = data;
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
void flatten_a_tree(node *root)
{
    node *curr = root;
    while (curr != NULL)
    {
        if (curr->left)
        {
            /*------- predecessor mean first you have to move left-> and then
            move to right untill right is not NULL------------ */
            node *predecessor = curr->left;
            while (predecessor->left)
            {
                predecessor = predecessor->right;
            }
            predecessor->right = curr->right;
            curr->right = curr->left;
            curr->left = NULL;
        }
        curr = curr->right;
    }
}
void print(node *root)
{
    node *ptr = root;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->right;
    }
}
int main()
{
    node *root;
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    levelOrderTraveral(root);
    cout << endl;
    flatten_a_tree(root);
    cout << "Linked List is : ";
    print(root);
    return 0;
}