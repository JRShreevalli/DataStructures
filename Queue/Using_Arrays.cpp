#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
#define max 50
 
void enQueue();
void deQueue();
void display();
int queue_array[max];
int rear = - 1;
int front = - 1;
main()
{
    int choice;
    while (1)
    {
        cout << "1.Insert element to queue " << endl ;
        cout << "2.Delete element from queue \n" ;
        cout << "3.Display all elements of queue \n" ;
        cout << "4.Quit \n" ;
        cout << "Enter your choice : " ;
        cin >> choice ;
        switch (choice)
        {
            case 1:
                    enQueue();
                    break;
            case 2:
                    deQueue();
                    break;
            case 3:
                    display();
                    break;
            case 4:
                    exit(1);
            default:
                    cout << "Wrong choice \n" ;
        } 
    } 
} 

int isFull(int rear)
{
    if( rear == max - 1 )
        return 1 ;
    else
        return 0 ;
}

void enQueue()
{
    int add_item;

    if (isFull(rear) == 1)
        cout << "Queue Overflow \n" ;
    else
    {
            front = 0;
            cout << "\n Inset the element in queue : " ;
            cin >> add_item ;
            rear = rear + 1;
            queue_array[rear] = add_item;
    }
} 

int isNull(int front , int rear)
{
    if (front == - 1 || front > rear)
    {
        return 1 ;
    }
    else
    {
        return 0 ;
    }
}
void deQueue()
{
    if ( isNull(front,rear) == 1 )
    {
        cout << "Underflow COndition \n" ;
    }
    else
    {
        cout << "Element deleted from queue :\n  " << queue_array[front] ;
        front = front + 1;
    }
} 
 
void display()
{
    int i;
    if ( isNull(front,rear) == 1 )
        cout << "Queue is empty " << endl ;
    else
    {
        cout << "Queue is : " << endl ;
        for (i = front; i <= rear; i++)
            cout <<  queue_array[i] << " ";
        cout << endl ;
    }
} 
