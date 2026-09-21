class MyQueue {
public:
    stack<int>sk_in;
    stack<int>sk_out;
    MyQueue() {
    }
    void push(int x) {

        sk_in.push(x);

        //sk_in.push(x);
    }
    int pop() {
        if(!sk_out.empty())
        {
            int a=sk_out.top();
            sk_out.pop();
            return a;
        }
        else
        {
            while(!sk_in.empty())
            {
                sk_out.push(sk_in.top());
                sk_in.pop();
            }
            int a=sk_out.top();
            sk_out.pop();
            return a;
        }
        
        /*stack<int>sk_out;
        while(!sk_in.empty())
        {
            sk_out.push(sk_in.top());
            sk_in.pop();
        }
        int a=sk_out.top();
        sk_out.pop();
        while(!sk_out.empty())
        {
            sk_in.push(sk_out.top());
            sk_out.pop();
        }
        return a;*/
    }
    int peek() {
        if(!sk_out.empty())
        {
            int a=sk_out.top();
            return a;
        }
        else
        {
            while(!sk_in.empty())
            {
                sk_out.push(sk_in.top());
                sk_in.pop();
            }
            int a=sk_out.top();
            return a;
        }

        /*stack<int>sk_out;
        while(!sk_in.empty())
        {
            sk_out.push(sk_in.top());
            sk_in.pop();
        }
        int a=sk_out.top();
        while(!sk_out.empty())
        {
            sk_in.push(sk_out.top());
            sk_out.pop();
        }
        return a;*/
    }   
    bool empty() {
        return (sk_in.empty())&&(sk_out.empty());
        
        //return sk_in.empty();
    }
};