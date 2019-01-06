#include<iostream>
#include<string>
using namespace std;

struct node {
    node *left, *right;
    char val;
};

node *createTree(string pre, string in)
{
    node *t = nullptr;
    if(pre.length() > 0) {
        t = new node;
        t -> val = pre[0];
        int index = in.find(pre[0]);
        t -> left = createTree(pre.substr(1, index), in.substr(0, index));
        t -> right = createTree(pre.substr(index + 1), in.substr(index + 1));
    }
    return t;
}

void post_order(node *root)
{
    if(root != nullptr) {
        post_order(root -> left);
        post_order(root -> right);
        cout << root -> val;
    }
}

int main()
{
    string qx, zx;
    while(cin >> qx >> zx) {
        node *root = createTree(qx, zx);
        post_order(root);
        cout << endl;
    }
    return 0;
}
