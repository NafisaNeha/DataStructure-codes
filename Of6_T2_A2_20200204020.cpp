
#include <bits/stdc++.h>
using namespace std;

int graph[100][100];
int status[100];

struct node
{
    int val;
    node *next;

    node(int x)
    {
        val = x;
        next = NULL;
    }
};
node *head;
bool isEmpty()
{
    if (head == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void push(int val)
{
    node *n = new node(val);

    if (isEmpty())
    {

        head = n;
    }
    else
    {
        n->next = head;
        head = n;
    }
}

int pop()
{
    int store = 0;
    node *temp = head;
    if (isEmpty())
    {
        return store;
    }
    else
    {
        store = temp->val;
        head = temp->next;
        delete temp;
        return store;
    }
}

void inputGraph(int number_of_node, int number_of_edge)
{
    int source, destination, weight;
    weight = 1;

    cout << "Enter the edges " << endl;
    for (int i = 1; i <= number_of_edge; i++)
    {
        cin >> source >> destination;
        graph[source][destination] = weight;
    }
}
void printAM(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n\n";
}

void initStatus(int number_of_node)
{
    for (int i = 1; i <= number_of_node; i++)
    {
        status[i] = 1;
    }
}

void addNeighbors(int nodeN, int n)
{
    for (int i = n; i >= 1; i--)
    {
        if (graph[nodeN][i] == 1 && status[i] == 1)
        {
            push(i);
            status[i] = 2;
        }
    }
}

void dfs(int source_node, int number_of_node)
{
    int popped_value;
    initStatus(number_of_node);
    head = NULL;

    push(source_node);

    status[source_node] = 2;
    while (!isEmpty())
    {
        popped_value = pop();
        cout << popped_value << "->";
        status[popped_value] = 3;

        addNeighbors(popped_value, number_of_node);
    }
}

int main()
{

    int number_of_node, number_of_edge, source_node;


    cout << "Enter no of Node: " << endl;
    cin >> number_of_node;

    cout << "Enter no of Edge: " << endl;
    cin >> number_of_edge;

    cout << "Enter Source: " << endl;
    cin >> source_node;


    inputGraph(number_of_node, number_of_edge);

    cout << "The Adjecency Matrix is: " << endl;
    printAM(number_of_node);

    dfs(source_node, number_of_node);

    return 0;
}
