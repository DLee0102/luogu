#include <iostream>
#include <vector>

/**
 * @brief 线段树：是一个完全二叉树，把实际值的数组依次放在最底端，中间节点是子结点之和，便于进行区间搜索和区间操作，时间复杂度为
 * 指数级；此题是变种线段树
 * 
 */

using namespace std;

struct Node
{
    int id = 0;
    int power = 0;
};

Node maxNode(Node n1, Node n2)
{
    return n1.power >= n2.power ? n1 : n2;
}

Node minNode(Node n1, Node n2)
{
    return n1.power < n2.power ? n1 : n2;
}

Node array[150];
Node tree[600];
void build(int node, int start, int end)
{
    if (start == end)
    {
        tree[node] = array[start];
        return;
    }
    
    int lnode = node * 2;
    int rnode = node * 2 + 1;
    int mid = (start + end) / 2;
    build(lnode, start, mid);
    build(rnode, mid + 1, end);
    tree[node] = maxNode(tree[lnode], tree[rnode]);
}

int main()
{
    int n = 0;
    cin >> n;
    for (int i = 1; i <= (1 << n); i ++)
    {
        array[i].id = i;
        cin >> array[i].power;
    }
    build(1, 1, (1 << n));
    cout << minNode(tree[2], tree[3]).id;
    
}
