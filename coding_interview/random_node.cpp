#include <iostream>
#include <cstdlib>

using namespace std;

class BstNode
{
public:
    int key;
    int size;
    BstNode *left;
    BstNode *right;

    BstNode(int _key) : key(_key), size(1), left(NULL), right(NULL) {}
};

class Bst
{
    BstNode *root;

    BstNode *insertUtil(BstNode *node, int key);
    void printInOrder(BstNode *node);
    BstNode *getIthNode(int i, BstNode *node);

public:
    Bst() : root(NULL) {}
    void insert(int key);
    BstNode *getRandomNode();
    void print();
};

BstNode *Bst::getIthNode(int i, BstNode *node)
{
    // Trying to reach the random positon using size attribute of the class
    int leftSize = node->left == NULL ? 0 : node->left->size;
    if (i <= leftSize)
    {
        return getIthNode(i, node->left);
    }
    else if (i == leftSize + 1)
    {
        return node;
    }
    else
    {
        return getIthNode(node->size - i, node->right);
    }
}

BstNode *Bst::getRandomNode()
{
    // Finding random values based on the size of the tree
    int i = rand() % root->size;
    cout << "Getting " << i << " th node." << endl;
    return getIthNode(i, root);
}

void Bst::insert(int key)
{
    root = insertUtil(root, key);
}

BstNode *Bst::insertUtil(BstNode *node, int key)
{
    if (node == NULL)
    {
        node = new BstNode(key);
        return node;
    }
    if (key <= node->key)
    {
        node->left = insertUtil(node->left, key);
    }
    else
    {
        node->right = insertUtil(node->right, key);
    }
    node->size++;
    return node;
}

void Bst::print()
{
    printInOrder(root);
}

void Bst::printInOrder(BstNode *node)
{
    if (node == NULL)
    {
        return;
    }
    printInOrder(node->left);
    cout << node->key << endl;
    printInOrder(node->right);
}

int main()
{
    Bst *bst = new Bst();
    int keys[9] = {9, 3, 5, 6, 7, 2, 1, 10, 11};
    for (int i = 0; i < 9; i++)
    {
        bst->insert(keys[i]);
    }
    bst->print();
    for (int i = 0; i < 5; i++)
    {
        cout << bst->getRandomNode()->key << endl;
    }
    return 0;
}