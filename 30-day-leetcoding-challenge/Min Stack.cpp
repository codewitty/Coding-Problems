class MinStack {
    stack<int> s;
    stack<int> trackMin;
public:
    void push(int x) {
        if(trackMin.empty() || x<=trackMin.top())
            trackMin.push(x);
        s.push(x);
    }

    void pop() {
        if(s.empty()) return;
        if(s.top()==trackMin.top())
            trackMin.pop();
        s.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return trackMin.top();
    }
};
    /** initialize your data structure here. 
    int data;
    MinStack * head;
    MinStack * next;
    MinStack(){
        next = NULL;
    }
    
    void push(int x) {
          MinStack *newNode = new MinStack();
          newNode->data = x;
          if (next == NULL) { 
            next = newNode;
          }
        else {
            newNode = next->next;
            next = newNode;
        }
    }
    
    void pop() {
        if (next == nullptr)
            return;
        else{
            next = next->next;
            delete next->next;
        }   
    }
    
    int top() {
        if (next)
            return next->next->data;
        else
            return 0;
    }
    
    int getMin() {
        int minNum = 0;
         while (next->next){
            minNum = min(minNum, next->data);
          }
        return minNum;
        
    }
    */

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
