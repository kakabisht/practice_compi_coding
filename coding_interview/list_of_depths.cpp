#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
};

vector<list<Node *>> listsofDepth(Node *node)
{

    vector<list<Node *>> array_linklist; // mantian all the d link lists

    list<Node *> curr; // current value of node
    if (node != NULL)
    {
        curr.push_back(node);
    }

    while (curr.size() > 0)
    {
        array_linklist.push_back(curr); //add nodes at curr level to the vector

        list<Node *> parents = curr;
        list<Node *>::iterator it;
        curr.clear();
        for (it = parents.begin(); it != parents.end(); it++)
        {
            curr.push_back(*it);
        }
    }
    return array_linklist;
}
int main()
{
    return 0;
}