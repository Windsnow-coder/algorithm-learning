class MyStack {
public:
    queue<int>q_in;
    MyStack() {     
    }
    void push(int x) {
        q_in.push(x);
    }  
    int pop() {
        queue<int>q_rein;
        while(q_in.size()>1)
        {
            q_rein.push(q_in.front());
            q_in.pop();
        }
        int a=q_in.front();
        q_in.pop();
        while(!q_rein.empty())
        {
            q_in.push(q_rein.front());
            q_rein.pop();
        }
        return a;
    } 
    int top() {
        queue<int>q_rein;
        while(q_in.size()>1)
        {
            q_rein.push(q_in.front());
            q_in.pop();
        }
        int a=q_in.front();
        q_in.pop();
        while(!q_rein.empty())
        {
            q_in.push(q_rein.front());
            q_rein.pop();
        }
        q_in.push(a);
        return a;
    } 
    bool empty() {
        return q_in.empty();
    }
};