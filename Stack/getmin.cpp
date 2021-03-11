// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};


int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int q;
       cin>>q;
        _stack *a = new _stack();
       while(q--){

       int qt;
       cin>>qt;

       if(qt==1)
       {
           //push
           int att;
           cin>>att;
           a->push(att);
       }
       else if(qt==2)
       {
           //pop
           cout<<a->pop()<<" ";
       }
       else if(qt==3)
       {
           //getMin
           cout<<a->getMin()<<" ";
       }
       }
       cout<<endl;
   }

}


// } Driver Code Ends


/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

/*returns min element from stack*/
int mini=INT_MAX;

int _stack :: getMin()
{   
   
        if (s.empty()) 
            return -1; 
  
        // variable minEle stores the minimum element 
        // in the stack. 
        else
            return minEle;
}

/*returns poped element from stack*/
int _stack ::pop()
{
    if (s.empty()) 
        { 
           // cout << "Stack is empty\n"; 
            return -1; 
        } 
  
       // cout << "Top Most Element Removed: "; 
        int t = s.top(); 
        s.pop(); 
  
        // Minimum will change as the minimum element 
        // of the stack is being removed. 
        if (t < minEle) 
        { 
           int c= minEle; 
            minEle = 2*minEle - t; 
            return c;
        } 
  
        
            return t; 
   //Your code here
}

/*push element x into the stack*/
void _stack::push(int x)
{
 if (s.empty()) 
        { 
            minEle = x; 
            s.push(x); 
            //cout <<  "Number Inserted: " << x << "\n"; 
            return; 
        } 
  
        // If new number is less than minEle 
        if (x < minEle) 
        { 
            s.push(2*x - minEle); 
            minEle = x; 
        } 
  
        else
           s.push(x); 
  
       // cout <<  "Number Inserted: " << x << "\n"; 
    } 

