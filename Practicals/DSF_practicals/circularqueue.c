#include<stdio>
struct queue{
    int rear,front;
    int size;
    int *arr;

    queue(s){
        front = rear =-1;
        size = s;
        arr = new int[s];
    }

    void enQueue(int value);
    void displayQueue();
    };

    //function to insert element in circular queue
    void queue::enQueue(int value)
    {
        if(front==0&&rear== size-1){
            printf("\nQueue is full");
            return;
        }
        else if(front = -1){
            front = rear = 0;
            arr[rear]=value;
        }
        else{
            rear++;
            arr[rear] = value;
        }
    }
    void Queue::displayQueue()
{
    if (front == -1)
    {
        printf("\nQueue is Empty");
        return;
    }
    printf("\nElements in Circular Queue are: ");
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
            printf("%d ",arr[i]);
    }
    else
    {
        for (int i = front; i < size; i++)
            printf("%d ", arr[i]);
 
        for (int i = 0; i <= rear; i++)
            printf("%d ", arr[i]);
    }
}
itn main(){
    queue q(6);

    //Insert element in Circular queue
    q.enQueue(5);
    q.enQueue(6);
    q.enQueue(7);
    q.enQueue(8);
    q.enQueue(9);

    q.displayQueue();
    return 0;
}
