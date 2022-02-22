#include<bits/stdc++.h>

using namespace std;

//Friend function:
/*
   sometimes it becomes neccessery to have access of private and protected members of class outside class.
   this is achieved by using friend function. if we make class B friend of class A then class B can access private and protected members 
   of class A.
*/
//friend function can be memeber of another class or A global function

//points about friend fucntion:
/*
  1. Too many friend function or external classes declared as a friend of private and protected data lessen the value of encapsulation in oops
  2. friendship is not inherited .
  3. friendship is not mutual . if Class B is friend of class A then reverse is not true.
*/
//Program to demostrate friend class

class A
{
private:
    /* data */
    int x;
public:
    A(/* args */){
        x=0;
        //default
    }
    friend class B;
};

class B
{
private:
    /* data */
public:
    B(/* args */)
    {
        //default
    }
    void Show(A &a)
    {
        cout<<a.x<<endl;
    }
    
};

//friend function with a global function

/*
 class A
 {
     private:
       int x;

     public:
        friend void Show(A &a);  
 };
 
 void Show(A &a)
 {
     cout<<a.x<<endl;
 }

 int main()
 {
     A a;
     Show(a);
 }
  
*/

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout<<"Hello world"<<endl;

    A a;
    B b;
    b.Show(a);
     
   return 0;
}



