//stack implementation using C++

#include <iostream>
using namespace std;

int stack[100];
int n,i,top,x;

void push();
void pop();
void display();

int main()
{ 
  int ch;
  cout << "Enter the number of elements in the stack";
  cin >> n ;
  i = 1 ;
  top = -1 ;
  while ( i )
  { 
    cout << "Enter your choice (1-4)" << endl ;
    cout << "1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n";
    cin >> ch;
    switch (ch)
    {
      case 1 :  push();
                break;
      case 2 :  pop();
                break;
      case 3 :  display();
                break;
      case 4:   i=0;
                break;
      default:  cout<<"Wrong Choice!!!!"<<endl;
                break;
    }
  }
return 0;  
}

bool isFull( int top )
{
    if(top >= n-1)           // OVERFLOW CONDITION //
    {
      return true ;
    }
    return false ;
}

void push()
{  
    if ( isFull(top) == true )
    {
      cout << "Stack is Full \n" ;
    }
    else
    {
        cout << "Enter the value to be added :";
        cin >> x ;
        top = top + 1 ;
        stack[top] = x ;
    }
}

bool isNull(int top)
{
  if(top <= -1)         // Underflow COndition 
  {
    return true ;
  }
  return false ;
}
void pop()
{
  if( isNull(top) == true )
  {
      cout << "STACK IS UNDERFLOW" << endl;
  }
  else
  {
    cout << "Value : " << stack[top] << " GOT deleted." << endl ;
    top-- ;
  }
}
void display()
{
  if(top >= 0)
  {
    cout<<"Elements in the stack are :";
    for(i = top ; i >= 0 ; i-- )
       cout << stack[i] << " ";
    cout << "\n" ;
  }
  else
   cout << "STACK IS EMPTY." << endl;
}


// OUTPUT //
/*
  Enter the number of elements in the stack3
Enter your choice (1-4)
1.PUSH
2.POP
3.DISPLAY
4.EXIT
1
Enter the value to be added :1
Enter your choice (1-4)
1.PUSH
2.POP
3.DISPLAY
4.EXIT
1
Enter the value to be added :2
Enter your choice (1-4)
1.PUSH
2.POP
3.DISPLAY
4.EXIT
1
Enter the value to be added :3
Enter your choice (1-4)
1.PUSH
2.POP
3.DISPLAY
4.EXIT
3
Elements in the stack are :3 2 1 
Enter your choice (1-4)
1.PUSH
2.POP
3.DISPLAY
4.EXIT
2
Value : 3 GOT deleted.
Enter your choice (1-4)
1.PUSH
2.POP
3.DISPLAY
4.EXIT
3
Elements in the stack are :2 1 
Enter your choice (1-4)
1.PUSH
2.POP
3.DISPLAY
4.EXIT
4
  */
