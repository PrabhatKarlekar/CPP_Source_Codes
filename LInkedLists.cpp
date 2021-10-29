#include<iostream>

using namespace std;

class node
{
    int data;
    node *next;
    public:
        void create(int n);
        void display();


};
node *head=NULL;

void node :: create(int n)
{   
    node *p=NULL;
    node *t=NULL;

    for (int i=0; i<n ; i++)
    {
        t=new node;
        cout<<"Enter the data for "<<i+1<<" node : "<<flush;
        cin>>t->data;
        t->next=NULL;

        if(head==NULL)
        {
            head=t;
        }
        else
        {
            p=head;
            while(p->next!=NULL)
            {
                p=p->next;
            }
            p->next=t;
        }
        
    }

}
void node :: display()
{
    node *p=NULL;
    p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ->";
        p=p->next;
    }
}
int main()
{
    cout<<"Enter the no. of node to create : "<<flush;
    int n;
    cin>>n;
    node t;

    t.create(n);
    t.display();
    return 0;

}