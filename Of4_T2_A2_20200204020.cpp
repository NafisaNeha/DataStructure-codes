#include <bits/stdc++.h>
using namespace std;

struct node
{
    node* prev;
    int val;
    node* next;

    node(int x)
    {
        prev = NULL;
        val = x;
        next = NULL;
    }
};
node* head;

void INSERT_F(int x)
{
    node *n1 = new node(x);
    if(head==NULL){
        head = n1;
        n1->next = NULL;
        n1->prev = NULL;
    }
    else{
        n1->next = head;
        head = n1;
        n1->prev = NULL;
        n1->next->prev = n1;
    }

}
void INSERT_N(int x, int n)
{
    node *n1 = new node(x);
    node *temp = head;
    bool flag = false;
    int list_n = 1;
    if(head==NULL && n==1){
        head = n1;
        n1->next = NULL;
        n1->prev = NULL;
        flag = true;
    }
    else if(n==1){
        n1->next = head;
        n1->prev = NULL;
        if(n1->next != NULL)
            n1->next->prev = n1;
        head = n1;
        flag = true;
    }
    else{
        while(temp!=NULL){
            if(list_n+1 == n){
                n1->next = temp->next;
                n1->prev = temp;
                temp->next = n1;
                if(n1->next != NULL)
                    n1->next->prev = n1;
                flag = true;
            }
            if(temp->next!=NULL){
                temp = temp->next;
            }
            else
                break;
            list_n++;
        }
    }
    if(!flag){
        cout<<"Error:The value of n is greater than the size of the list and the last empty position"<<endl;
    }

}
void INSERT_L(int x)
{
    node *n1 = new node(x);
    node *temp = head;
    if(head==NULL){
        head = n1;
        n1->next = NULL;
        n1->prev = NULL;
    }
    else{
        while((temp->next)!=NULL){
            temp = temp->next;
        }
        n1->next = NULL;
        temp->next = n1;
        n1->prev = temp;
    }
}

void DELETE_F()
{
    if(head==NULL){
        cout<<"The list is empty"<<endl;
    }
    else{
        head = head->next;
        head->prev = NULL;
    }

}
void DELETE_N(int n)
{
    node *temp = head;
    node *prev;
    bool flag = false;
    int list_n = 1;
    if(head==NULL){
        cout<<"The list is empty"<<endl;
        return;
    }
    else if(n==1){
        head = head->next;
        head->prev = NULL;
        flag = true;
    }
    else{
        while(temp!=NULL){
            if(list_n == n){
                prev->next = temp->next;
                if(prev->next != NULL)
                    prev->next->prev = prev;
                flag = true;
            }
            if(temp->next!=NULL){
                prev = temp;
                temp = temp->next;
            }
            else
                break;
            list_n++;
        }
    }
    if(!flag){
        cout<<"Error:The value of n is greater than the size of the list"<<endl;
    }

}
void DELETE_L()
{
    node *temp = head;
    node *prev;
    if(head==NULL){
        cout<<"The list is empty"<<endl;
    }
    else if(head->next == NULL){
        head = NULL;
    }
    else{
        while((temp->next)!=NULL){
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
    }

}
int SEARCH(int x)
{
    node *temp = head;
    int list_n = 1;
    while(temp!=NULL){
        if(temp->val == x){
            return list_n;
        }
        list_n++;
        temp = temp->next;
    }
    return -1;

}
void PRINT()
{
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->val<<endl;
        temp = temp->next;
    }

}
void PRINT_REV()
{
    node *temp = head;
    if(head!=NULL){
        while(temp->next!=NULL){
            temp = temp->next;
        }
    }
    while(temp!=NULL){
        cout<<temp->val<<endl;
        temp = temp->prev;
    }

}
int main()
{
    head = NULL;
    int x,n;

    while(true)
    {
        printf("1. Insert First\n2. Insert N\n3. Insert Last\n");
        printf("4. Delete First\n5. Delete N\n6. Delete Last\n");
        printf("7. Print\n8. Reverse Print\n9. Search\n");
        printf("10. Exit\n");
        printf("Enter Choice: ");
        int ch;
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("\n Enter value: ");
            scanf("%d",&x);
            INSERT_F(x);
            break;
        case 2:
            printf("\n Enter value, position: ");
            scanf("%d%d",&x,&n);
            INSERT_N(x,n);
            break;
        case 3:
            printf("\n Enter value: ");
            scanf("%d",&x);
            INSERT_L(x);
            break;
        case 4:
            DELETE_F();
            break;
        case 5:
            printf("\n Enter position: ");
            scanf("%d",&n);
            DELETE_N(n);
            break;
        case 6:
            DELETE_L();
            break;
        case 7:
            PRINT();
            break;
        case 8:
            PRINT_REV();
            break;
        case 9:
            printf("\n Enter value: ");
            scanf("%d",&x);
            printf("Value found at position: %d",SEARCH(x));
            break;
        case 10:
            return 0;
            break;
        default:
            continue;
        }
    }

    return 0;
}
