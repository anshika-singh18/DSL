#include <iostream>
using namespace std;
#define MAX 20

class Job{
    int id,priority;
    friend class Queue;

    public:
    void input(){
        cout<<"Enter job id: ";
        cin>>id;
        cout<<"Enter job priority: ";
        cin>>priority;
    }

    void display(){
        cout<<endl;
        cout<<id;
        cout<<"\t\t"<<priority<<endl;
    }

    bool operator<=(Job j){
        if (priority<=j.priority){
            return true;
        }

        else{
            return false;
        }
    }

};


class Queue{
    int front,rear;
    Job queue[MAX];

    public:
    Queue(){
        front =-1;
        rear=-1;
    }

    bool isempty();
    bool isfull();
    void enqueue();
    void dequeue();
    void displayq();

};

bool Queue::isempty(){
    if ((front==rear+1) || rear==-1){
        return 1;
    }
    else{
        return 0;
    }
}

bool Queue::isfull(){
    if (rear==MAX-1){
        return 1;
    }

    else{
        return 0;
    }
}


void Queue::enqueue(){
    Job j;
    if (isfull()){
        cout<<"THequeue is full!"<<endl;
    }

    else{
        j.input();
        if (rear==-1){
            front ++;
            rear++;
            queue[rear]=j;
        }

        else{
            int i=rear;
            while(i>=0 && queue[i]<=j){
                queue[i+1]=queue[i];
                i--;
            }
            queue[i+1]=j;
            rear++;
        }
    }
}


void Queue::dequeue(){
    if (isempty()){
        cout<<"The queue is empty!"<<endl;
    }

    else{
        front ++;
    }
}

void Queue::displayq(){
    if (isempty()){
        cout<<"Queue is empty!"<<endl;
    }

    else{
        for (int i=front; i<=rear; i++){
            queue[i].input();
        }
    }
}

int main(){
    int ch;
	Queue q;

	do
	{
		cout<<"\n****operations****\n";
		cout<<"1.Insert job\n";
		cout<<"2.Remove jobs\n";
		cout<<"3.Display\n";
		cout<<"4.Exit\n";

		cout<<"Enter choice: ";
		cin>>ch;

		switch(ch)
		{

			case 1:
				q.enqueue();
				break;

			case 2:
				q.dequeue();
				break;

			case 3:
				cout<<"Job ID ";
				cout<<"\t  Job Priority ";
				q.displayq();
				break;

			case 4:
				cout<<"Exiting Program\n";
				break;

			default:
				cout<<"Invalid input!\n";
				break;
		}
	} while(ch!=4);

	return 0;
}
