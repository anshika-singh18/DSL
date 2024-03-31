#include <iostream>
using namespace std;
#define MAX 10

class Queue{
int data[MAX];
int front, rear;
public:
Queue(){
front=-1;
rear=-1;
}


void isEmpty();
void isFull();
void enqueue(int x);
void dequeue();
void display();
};

void Queue::isEmpty(){
if (front==rear){
cout<<"Queue is Empty!";
}
}

void Queue::isFull(){
if (rear==MAX-1){
cout<<"Queue is Full!";
}
}

void Queue::enqueue(int x){
    front=0;
rear ++;
data[rear]=x;

}

void Queue::dequeue(){
front++;
}

void Queue::display(){
for (int i=front; i<=rear; i++){
cout<<data[i]<<" ";
}
}


int main() {
Queue q;
q.enqueue(6);
q.enqueue(8);
q.enqueue(5);
q.enqueue(5);
q.enqueue(5);
q.enqueue(5);
q.dequeue();
q.isEmpty();
q.isFull();
q.display();
return 0;
}
