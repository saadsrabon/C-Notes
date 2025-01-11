#include<bits/stdc++.h>
using namespace std;

// Implement stack with  Vector
class myStack {
    public:
    vector<int> st;

    // push
    void push(int val)
    {
        st.push_back(val);
    };
    //pop
    void pop()
    {
        st.pop_back();
    };
    
    //top
    int top()
    {
        return st.back();
    };
    //size
    int size()
    {
        return st.size();
    };

    //empty
    bool empty (){
       return st.empty();
    }

};

class Node {
    public:
    int val;
    Node *next;

    Node(int val){
        this->val =val;
        this->next =NULL;

    }
};
class myQuee {
    public:
    Node *head = NULL;
    Node * tail =NULL;
       int sz =0;
    // push
    void push(int val)
    {
           sz++;
      Node * newNode =new Node(val);
      if(head ==NULL){
        head =newNode;
        tail =newNode;
     
        return;
      }
      tail->next = newNode;
      tail =newNode;
    };
    //pop
    void pop()
    {   sz--;
      Node * dltNode = head;
      head =head->next;
      delete dltNode;
      if(head ==NULL)
      tail =NULL;
    };
    
    //top
    int front()
    {
        return head->val;
    };
    //size
    int size()
    {
        return sz;
    };

    //empty
    bool empty (){
       return head ==NULL;
    }
};

int main() 
{  int N;
    cin>>N;
    int M;
    cin>>M;
    myStack stack;
    myQuee qoue;
     int x;
     while(N--){
        cin>>x;
        
        stack.push(x);
     };

  
        
        int y ;
    while(M--){
        cin>>y;
       qoue.push(y);
    }



 if(stack.size()!=qoue.size()){
    cout<<"NO"<<endl;
    return 0;

 }
    while(!stack.empty()){
        int val = qoue.front();
        int val2 = stack.top();

        
if (val != val2) {
            cout << "NO" << endl;
            return 0;
        }

        stack.pop();
        qoue.pop();
        
    
   
 }
     cout<<"YES";

    return 0;
}