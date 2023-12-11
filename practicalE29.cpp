#include <iostream>
using namespace std;

const int MAX_SIZE = 5;

class Queue{
    private:
        int arr[MAX_SIZE];
    
    public:
        int size;
        int front = -1,rear = -1;

        // Checking the array is empty or not
        bool isEmpty(){
            return front == -1;
        }

        // Checking the array is full or not
        bool isFull(){
            return (rear == MAX_SIZE - 1);
        }

        // Adding the element to the queue
        int enqueue(int element){
            if(isFull()){
                cout<<"Queue is full"<<endl;
                return -1;
            }else if(isEmpty()){
                front = rear = 0;
            }else{
                rear += 1;
            }
            arr[rear] = element;
        }

        // Deleting the element from the array 
        int dequeue(){
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
                return -1;
            }else if(front == rear){
                front = rear = -1;
            }else{
                front++;
            }
                
        }

        // Displaying the element from queue
        void display(){
            for(int i = front; i <= rear; i++){
                cout<<" "<<arr[i]<<" ";
            }
            cout<<endl;
        }
};

int main(){
    Queue job;
    int choice, element;
    
    do{
        cout<<"*********************"<<endl;
        cout<<"1.Add Queue"<<endl;
        cout<<"2.Delete Queue"<<endl;
        cout<<"3.Display Queue"<<endl;
        cout<<"Enter a choice:";
        cin>>choice;
        cout<<"************************"<<endl;

        switch(choice){
            case 1:
                if(!job.isFull()){
                    cout<<"Enter a size:";
                    cin>>job.size;
                    for(int i = 0; i < job.size; i++){
                        cout<<"Enter a element to enqueue:"<<endl;
                        cin>>element;
                        job.enqueue(element);
                    }
                }else{
                    cout<<"Queue is full"<<endl;
                }
                
                break;
            
            case 2:
                job.dequeue();
                break;
            
            case 3:
                if(job.isEmpty()){
                    cout<<"Queue is empty"<<endl;
                }else{
                    job.display();
                }
                break;
            
            default:
                cout<<"Invalid Input";      
        }

    }while(choice != 0);
    return 0;
}