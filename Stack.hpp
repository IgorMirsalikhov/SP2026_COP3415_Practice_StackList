#ifndef STACK_HPP
#define STACK_HPP

namespace StackArray {
    template <typename T, int size = 10>
    class Stack {
    public:
        Stack();

        void        push(const T& val);
        bool        empty() const;
        bool        full() const;
        void        print() const;
        T           pop();
        const T&    top() const;
        

    private:
        T data[size];   // Array of stack elements
        int top_idx;    // Index of the top of the stack 
    };

}

namespace StackList {
    template <typename T>
    class Stack {
    public:
        Stack();
        ~Stack();

        void        push(const T& val);
        bool        empty() const;
        void        print() const;
        T           pop();
        const T&    top() const;
        

    private:
        template <typename U>
        class Node {
            public:
                U data;
                Node<U>* next;
                Node(const U& val = U(), Node<U>* n = nullptr) : data(val), next(n) {}
        };
        Node<T>* top_node;
    };

}
#endif