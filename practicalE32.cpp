#include <iostream>
using namespace std;

// declaring the size of the queue
const int MAX_SIZE = 5;

// Queue class 
class Queue{
    
    public:
        int arr[MAX_SIZE];
        int front = -1, rear = -1;
        int size, temp;

        // Check if the array is empty or not
        bool isEmpty(){
            return front == -1;
        }

        // Check if the array is full or not
        bool isFull(){
            return(rear == MAX_SIZE -1);
        }

        // Adding the pizza to the order
        int enqueue(int element){
            if(isFull()){
                cout<<"Maximum 5 orders are allowed."<<endl;
                return 0;
            }else if(isEmpty()){
                front = rear = 0;
            }else{
                rear++;
            }
            arr[rear] = element;
        }

        // Serving the pizza
        int dequeue(){
            if(isEmpty()){
                cout<<"No orders to serve."<<endl;
                return -1;
            }else if(front == rear){
                front = rear = -1;
            }else{
                temp = arr[front];
                for(int i = front; i <= rear; i++){
                    arr[i] = arr[i + 1];
                }
                rear--;
            }
            return temp;
        }

        // Displaying the pizza orders
        void display(){
            if(isEmpty()){
                cout<<" No orders to display."<<endl;
                return;
            }else{
                cout<<"Orders in the pizza parlor:"<<endl;
                for(int i = front; i <= rear; i++){
                    cout<<arr[i]<<" ";    
                }
                cout<<endl;
            }
            
        }


};


int main(){

    // Creating the pizza object
    Queue pizza;
    int choice, order_no;

    do{

        // Showing the menu
        cout<<"*******************"<<endl;
        cout<<"1. Place an order"<<endl;
        cout<<"2. Serve an order"<<endl;
        cout<<"3. Display the order"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter a choice:";
        cin>>choice;
        cout<<"********************"<<endl;

        // From different choice perform a operations
        switch(choice){
            case 1:

                if(pizza.isFull()){
                    cout<<"Sorry, the pizza parlor is full. Cannot accept more orders"<<endl;
                }else if(pizza.size > 5){
                    cout<<"Sorry, we accept maximum 5 orders."<<endl;
                }
                else{

                    cout<<"How many orders:";
                    cin>>pizza.size;
                    for(int i = 0; i < pizza.size; i++){
                        cout<<"Enter Order Number:";
                        cin>>order_no;
                        pizza.enqueue(order_no);
                    }  
                }
                
                break;
            
            case 2:
                pizza.dequeue();
                cout<<"Serving order No:"<<pizza.temp<<endl;
                break;
            
            case 3:
                pizza.display();
                break;
            
            default:
                cout<<"Invalid input"<<endl;
        }


    }while(choice != 0);

    return 0;

}


// Output
// 1. Place an order
// 2. Serve an order
// 3. Display the order
// 0. Exit
// Enter a choice:1
// ********************
// How many orders:5
// Enter Order Number:10
// Enter Order Number:20
// Enter Order Number:30
// Enter Order Number:40
// Enter Order Number:50
// *******************
// 1. Place an order
// 2. Serve an order
// 3. Display the order
// 0. Exit
// Enter a choice:3
// ********************
// Orders in the pizza parlor:
// 10 20 30 40 50 
// *******************
// 1. Place an order
// 2. Serve an order
// 3. Display the order
// 0. Exit
// Enter a choice:2
// ********************
// Serving order No:10
// *******************
// 1. Place an order
// 2. Serve an order
// 3. Display the order
// 0. Exit
// Enter a choice:2
// ********************
// Serving order No:20
// *******************
// 1. Place an order
// 2. Serve an order
// 3. Display the order
// 0. Exit
// Enter a choice:3
// ********************
// Orders in the pizza parlor:
// 30 40 50 
// *******************
// 1. Place an order
// 2. Serve an order
// 3. Display the order
// 0. Exit
// Enter a choice: