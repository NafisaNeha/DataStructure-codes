
#include<bits/stdc++.h>

using namespace std;

struct node
{
    int value;
    node *next;

    node()
    {
        value = 0;
        next = NULL;
    }
    node(int x)
    {
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


void insertElementAfterHeadInLinkedList(int x)
{
    node* newNode = new node(x);
    newNode->next = head;
    head = newNode;
}

bool searchFromLinkedList(int key)
{
    node* temp = head;
    while(temp != NULL)
    {
        if(temp->value == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}



void deleteNodeAfterHead()
{
    head = head->next;
}



void appendInLinkedList(int x)
{
    node* newNode = new node(x);
    node* temp = head;
    while(temp->next != NULL)
    {

        temp = temp-> next;

    }
    temp->next = newNode;

}



void deleteLastElementInLinkedList()
{
    node* previousNode = head;
    node* current = previousNode->next;

    while((current->next) != NULL)
    {


        current = current-> next;


    }
    temp->next = NULL;
}


void insertElementInLinkedList(int x,int position)
{
    node* newNode = new node(x);
    node* temp = head;
    while(temp != NULL)
    {
        if(temp->value == key)
        {
            break;
        }
        temp = temp->next;
    }


}

int main()
{
    head = NULL;
    node* n1 = new node(3);
    node* n2 = new node(2);
    node* n3 = new node(1);
    head = n1;

    /*   n1->value = 5;
       n2->value = 7;
       n3->value = 10;   */

    n1->next = n2;
    n2->next = n3;

    printLinkedList();

    deleteLastElementInLinkedList();



    printLinkedList();

    return 0;

}
