#include <iostream>
using namespace std;

class Flavours{
  struct icecream{
    int roll;
    struct icecream *next;
  };
  icecream *head;

  public:
  Flavours(){
    head=NULL;
  }
  void append(int);
  void display();
  Flavours vbintersection(Flavours,Flavours, Flavours);
  Flavours vbor(Flavours,Flavours,Flavours);
  Flavours none(Flavours,Flavours,Flavours);
};



void Flavours::append(int nn){
  icecream *newnode, *nodeptr;
  newnode=new icecream;
  newnode->roll=nn;
  newnode->next=NULL;

  if (!head){
    head=newnode;
  }

  else{
    nodeptr=head;
    while(nodeptr->next){
      nodeptr=nodeptr->next;
    }
    nodeptr->next=newnode;
  }
}

void Flavours::display(){
  icecream *nodeptr;
  nodeptr=head;
  while (nodeptr){
    cout<<nodeptr->roll<<" "<<endl;
    nodeptr=nodeptr->next;
  }
}


Flavours Flavours::vbintersection(Flavours fv,Flavours fb,Flavours f3){
  icecream *nodeptrv, *nodeptrb;
  f3.head=NULL;
  nodeptrv=fv.head;
  while(nodeptrv){
    nodeptrb=fb.head;
    while(nodeptrb){
      if (nodeptrv->roll==nodeptrb->roll){
        f3.append(nodeptrb->roll);
      }
      nodeptrb=nodeptrb->next;
    } 
    nodeptrv=nodeptrv->next;  
  }
  return f3;
}

Flavours Flavours::vbor(Flavours fv, Flavours fb, Flavours f3){
  icecream *nodeptrv, *nodeptrb;

  nodeptrv=fv.head;
  while(nodeptrv){
    int count=0;
    nodeptrb=fb.head;
    while(nodeptrb){
      if (nodeptrb->roll==nodeptrv->roll){
        count=1;
      }
      nodeptrb=nodeptrb->next;
    }
    if (count==0){
      f3.append(nodeptrv->roll);
    }
    nodeptrv=nodeptrv->next;
  }

  nodeptrb=fb.head;
  while(nodeptrb){
    int count=0;
    nodeptrv=fv.head;
    while(nodeptrv){
      if (nodeptrb->roll==nodeptrv->roll){
        count=1;
      }
      nodeptrv=nodeptrv->next;
    }
    if (count==0){
      f3.append(nodeptrb->roll);
    }
    nodeptrb=nodeptrb->next;
  }
  return f3;
}

Flavours Flavours::none(Flavours f3 ,Flavours fv,Flavours fb){
  icecream *nodeptr, *nodeptrv, *nodeptr2, *nodeptrb;

  nodeptr=f3.head;
  Flavours f4,f5;
  while(nodeptr){
    int count=0;
    nodeptrv=fv.head;
    while(nodeptrv){
      if (nodeptr->roll==nodeptrv->roll){
        count =1;
      }
      nodeptrv=nodeptrv->next;
    }
    if (count==0){
      f4.append(nodeptr->roll);
    }
    nodeptr=nodeptr->next;
  }

  nodeptr2=f4.head;
  while(nodeptr2){
    int count=0;
    nodeptrb=fb.head;
    while(nodeptrb){
      if (nodeptrb->roll==nodeptr2->roll){
        count=1;
      }
      nodeptrb=nodeptrb->next;
    }
    if (count==0){
      f5.append(nodeptr2->roll);
    }
    nodeptr2=nodeptr2->next;
  }
  return f5;
}


int main(){
  Flavours uni,v,b,vbboth,f3,vbornand,no;
  int n,x,y;
  
  for (int i=1; i<16; i++){
    uni.append(i);
  }

  cout<<"Number of students who like vanilla: ";
  cin>>x;
  for (int i=0; i<x; i++){
    int m;
    cout<<"Enter roll numbers: ";
    cin>>m;
    v.append(m);
  }

  cout<<"Number of students who like butterscotch: ";
  cin>>x;
  for (int i=0; i<x; i++){
    int m;
    cout<<"Enter roll numbers: ";
    cin>>m;
    b.append(m);
  }

  cout<<"Students who like vanilla and butterscotch both!"<<endl;
  vbboth=vbboth.vbintersection(v,b,f3);
  vbboth.display();
  cout<<endl;

  cout<<"Students who like vanilla ot butterscotch but not both!"<<endl;
  vbornand=vbornand.vbor(v,b,f3);
  vbornand.display();
  cout<<endl;

  cout<<"Students who lie none of the flavours!"<<endl;
  no=no.none(uni,v,b);
  no.display();
  cout<<endl;
}