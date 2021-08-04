#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void insertathead(node *&head, int data)
{
    if (head == NULL)
    {
        head = new node(data);
        return;
    }
    node *n = new node(data);
    n->next = head;
    head = n;
}
void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << endl;
}

void insertatmiddle(node* &head,int data,int pos)
{
    if(pos==0){
        insertathead(head,data);
    }
    else
    {
        node* temp=head;
        for(int jump=1;jump<=pos-1;jump++)
        {
            temp=temp->next;
        }
        node* n = new node(data);
        n->next=temp->next;
        temp->next=n;
    }
}
node * recreverse(node *head)
{
    if(head==NULL||head->next==NULL) return head;
    node* shead = recreverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return shead;
}

void reciterative(node* &head)
{
    node* prev=NULL;
    node* temp;
    node* current=head;
    while(current!=NULL)
    {
        temp=current->next;
        current->next=prev;
        prev=current;
        current=temp;
    }
    head=prev;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    node *head = NULL;
    insertathead(head, 4);
    insertathead(head, 3);
    insertathead(head, 20000);
    insertathead(head, 10000);
    print(head);
    reciterative(head);
    print(head);
    return 0;
}