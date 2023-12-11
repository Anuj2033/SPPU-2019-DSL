#include <iostream>
using namespace std;

const int MAX_SIZE = 10;
class Queue{
    private:
        int arr[MAX_SIZE];
        int front, rear;
    
    public:

        Queue(){
            front = rear = -1;
        }

        bool isEmpty(){
            return(front == -1);
        }

        bool isFull(){
            return(front == 0 && rear == MAX_SIZE - 1 || front == rear + 1);
        }

        int push_front(int value){
            if(isFull()){
                cout<<"Queue is full cannot add at the front"<<endl;
                return -1;
            }
            
            if(isEmpty()){
                front = rear = 0;
            }else if(front == 0){
                front = MAX_SIZE - 1;
            }else{
                front--;
            }
            arr[front] = value;
        }

        int push_back(int value){
            if(isFull()){
                cout<<"Queue is full cannot add at the back"<<endl;
                return -1;
            }
            
            if(isEmpty()){
                front = rear = 0;
            }else if(rear == MAX_SIZE - 1){
                rear = 0;
            }else{
                rear++;
            }
            arr[rear] = value;
        }

        int pop_front(){
            if(isEmpty()){
                cout<<"Queue is empty. cannot remove from front"<<endl;
                return -1;
            }
            cout<<"Removed "<<arr[front] <<" from the front"<<endl;
            if(front == rear){
                front = rear = -1;
            }else if(front == MAX_SIZE -1){
                front = 0;
            }else{
                front++;
            }
        }

        int pop_back(){
            if(isEmpty()){
                cout<<"Queue is empty. cannot remove from the back"<<endl;
                return -1;
            }
            cout<<"Removed "<<arr[rear]<< " from the rear"<<endl;
            if(front == rear){
                front = rear = -1;
            }else if(rear == 0){
                rear = MAX_SIZE - 1;
            }else{
                rear--;
            }
        }

        void display(){
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
            }
            cout<<"Jobs"<<endl;
            for(int i = front; i != ((rear + 1) % MAX_SIZE); i = (i + 1) % MAX_SIZE){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};

void menu(int choice, Queue& job, int value){

    do{
        cout<<endl;
        cout<<"---MENU---"<<endl;
        cout<<"1. Add job to front"<<endl;
        cout<<"2. Add job to rear"<<endl;
        cout<<"3. Remove job to front"<<endl;
        cout<<"4. Remove job to rear"<<endl;
        cout<<"5. Display"<<endl;
        cout<<"Enter a choice:";
        cin>>choice;
        cout<<endl;

        switch (choice)
        {
        case 1:
            cout<<"Enter a job:";
            cin>>value;
            job.push_front(value);
            break;
        
        case 2:
            cout<<"Enter a job:";
            cin>>value;
            job.push_back(value);
            break;
        
        case 3:
            job.pop_front();
            break;
        
        case 4:
            job.pop_back();
            break;
        
        case 5:
            job.display();
            break;
        
        default:
            cout<<"Invalid input"<<endl;
            break;
        }
    }while(choice != 6);
}

int main(){
    int choice, value;
    Queue l1;
    menu(choice, l1, value);
    return 0;
}