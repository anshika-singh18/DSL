#include <iostream>
using namespace std;

#define MAX 20

class queue{
    int job[MAX];
    int front , rear;
    public:

    queue(){
        front=-1;
        rear=-1;
    }

    int isfull(){
        if (rear==MAX-1){
            return 1;
        }
        else{
            return 0;
        }
    }

    int isempty(){
        if (front==rear){
            return 1;
        }
        else{
            return 0;
        }
    }

    void enqueue(int x){
        if (isfull()) return;
        
        else{
            rear++;
            front=0;
            job[rear]=x;
        }
    }

    void enqueuef(int x){
        if (front==0){
            cout<<"Queue is full"<<endl;
        }
        else if(front==-1){
            front=front+1;
            rear=rear+1;
            job[front]=x;
        }
        else{
            front-=1;
            job[front]=x;
        }
    }

    void delqf(){
        if (front==-1){
            cout<<"Queue is Empty"<<endl;
        }
        else{
            front+=1 ;
        }
    }

    void delqr(){
        if (rear==-1){
            cout<<"Queue is empty"<<endl;
        }
        else{
            rear=rear-1;
        }
    }

    void display(){
        int i;
        for (i= front; i<=rear; i++){
            cout<<job[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    queue q;
    q.enqueue(5);
    q.enqueue(9);
    q.enqueue(3);
    q.display();
    // q.enqueuef(7);
    // q.display();
    // q.delqf();
    // q.display();
    // q.delqr();
    // q.display();
}