#include<bits/stdc++.h>

using namespace std;

struct node
{
    node* prev;
    int value;
    node *next;


    node()
    {
        prev = NULL;
        value = 0;
        next = NULL;

    }
    node(int x)
    {
        prev = NULL;
        value = x;
        next = NULL;
    }
};

node* head ;

void printLinkedList()
{
    node* temp = head;
    while(temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp-> next;

    }
    cout << endl;
}

void reversePrint()
{
    node* temp = head;
    while(temp->next != NULL)
    {
      //  cout << temp->value << " ";
        temp = temp-> next;

    }

    while(temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp-> prev;
    }
}


int main()
{
    head = NULL;

    node* n1 = new node(3);
    node* n2 = new node(2);

    head = n2;

    n2->next  = n1;

    n1->prev = n2;

    printLinkedList();
    reversePrint();


    return 0;

}
