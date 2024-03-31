#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* nodeptr;
};

class LinkedList {
  private:
    Node* head;
  public:
    LinkedList(){
      head = NULL;
    }

    void append(int newElement) {
      Node* newNode = new Node();
      newNode->data = newElement;
      newNode->nodeptr = NULL;
      if(head == NULL) {
        head = newNode;
      } else {
        Node* next = head;
        while(next->nodeptr != NULL)
          next = next->nodeptr;
          next->nodeptr = newNode;
      }
    }

    void insert_beginning(int newElement) {
        Node* newNode = new Node();
        newNode->data = newElement;
        newNode->nodeptr = head;
        head = newNode;
      }


      void insert_end(int newElement)
      {
     Node* newNode = new Node();
     newNode->data = newElement;
     newNode->nodeptr = NULL;
     if(head == NULL)
     {
     head = newNode;
     }
     else
     {
     Node* next = head;
         while(next->nodeptr != NULL)
         next = next->nodeptr;
         next->nodeptr = newNode;
     }
      }

      void insert_position(int newElement, int position)
      {
           Node* newNode = new Node();
           newNode->data = newElement;
           newNode->nodeptr = NULL;

           if(position < 1)
           {
          cout<<"Position should be >= 1.";
           }
           else if (position == 1)
           {
          newNode->nodeptr = head;
          head = newNode;
           }
           else
           {
          Node* temp = head;
               for(int i = 1; i < position-1; i++)
               {
              if(temp != NULL)
          {
          temp = temp->nodeptr;
          }
               }

               if(temp != NULL)
               {newNode->nodeptr = temp->nodeptr;
                temp->nodeptr = newNode;
               }
               else
               {cout<<"\nThe previous node is null.";}

           }
      }

      void PrintList() {
            Node* temp = head;
            if(temp != NULL) {
              cout<<"The list contains: ";
              while(temp != NULL) {
                cout<<temp->data<<" ";
                temp = temp->nodeptr;
              }
              cout<<endl;
            } else {
              cout<<"The list is empty.\n";
            }
          }

      void delete_front()
      {
     if(head != NULL)
     {
              Node* temp = head;
              head = head->nodeptr;
              free(temp);
          }
      }

      void delete_last() {
            if(head != NULL) {
              if(head->nodeptr == NULL) {
                head = NULL;
              } else {
                Node* temp = head;
                while(temp->nodeptr->nodeptr != NULL)
                  temp = temp->nodeptr;
                Node* lastNode = temp->nodeptr;
                temp->nodeptr = NULL;
                free(lastNode);
              }
            }
          }

      void delete_at(int position) {
            if(position < 1)
            {
              cout<<"Position should be >= 1.";
            }
            else if (position == 1 && head != NULL)
            {
              Node* nodeToDelete = head;
              head = head->nodeptr;
              free(nodeToDelete);
            }
            else
            {
              Node* temp = head;
              for(int i = 1; i < position-1; i++)
              {
             if(temp != NULL)
             {
             temp = temp->nodeptr;
                  }
              }
              if(temp != NULL && temp->nodeptr != NULL)
              {
                  Node* nodeToDelete = temp->nodeptr;
                  temp->nodeptr = temp->nodeptr->nodeptr;
                  free(nodeToDelete);
              }
              else
              {
                cout<<"The node is already null.";
              }
            }
          }



 };


int main() {

   int ch, i, num;
   int n;
   int node, position;

   LinkedList l;

   do{
   cout<<endl;
   cout<<"1. Append."<<endl;
   cout<<"2. Insert in the beginning."<<endl;
   cout<<"3. Insert in the end."<<endl;
   cout<<"4. Insert at a position."<<endl;
   cout<<"5. Delete the first."<<endl;
   cout<<"6. Delete the last."<<endl;
   cout<<"7. Delete at a position."<<endl;
   cout<<"8. Exit!"<<endl;

   cin>>n;
   switch(n)
   {
   case 1:
   {
  cout<<"Enter the number of nodes: ";
  cin>>ch;
  for (i=0; i<ch; i++)
  {
  cin>>num;
      l.append(num);
  }
  l.PrintList();
  break;
   }
   case 2:
   {
  cout<<"Enter the number of nodes"<<endl;
  cin>>ch;
    for (i=0; i<ch; i++)
       {
        cin>>num;
          l.insert_beginning(num);
       }
           l.PrintList();
  break;
   }
   case 3:
      {
      cout<<"Enter the number of nodes: ";
      cin>>ch;
      for (i=0; i<ch; i++)
      {
      cin>>num;
          l.insert_end(num);
      }
      l.PrintList();
      break;
      }

   case 4:
   {
  cout<<"Enter the node to be inserted: ";
  cin>>node;
  cout<<"Enter the position at which node is to be inserted: ";
  cin>>position;
  l.insert_position(node,position);
  l.PrintList();
  break;
   }

   case 5:
   {
  l.delete_front();
  l.PrintList();
  break;
   }

   case 6:
      {
      l.delete_last();
      l.PrintList();
      break;
      }

   case 7:
   {
  cout<<"Enter the position where node should be deleted: ";
  cin>>position;
  l.delete_at(position);
  l.PrintList();
  break;
   }

   case 8:
      {
      cout<<"The program ended!";
      break;
      }
   }
   }while(n<5);

   return 0;
}
