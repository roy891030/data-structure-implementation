#include <iostream>
#define MAX 5

class Stack{
    public:
        int top;
        int arr[MAX];

        Stack(){
            top=-1;
        }

        bool isEmpty(){
            return (top==-1);
        }

        bool isFull(){
            return (top==MAX-1);
        }

        int pop(){
            if(isEmpty()){
                std::cout<<"stack is empty!"<<std::endl;
            }
            int result;
            result=arr[top];
            top--;
            return result;
        }
        void push(int x){
            if(isFull()){
                std::cout<<"stack is full!"<<std::endl;
                return ;
            }
            top++;
            arr[top]=x;
            return ;
        }

};


int main(){
    Stack stack;
    stack.push(2);
    stack.push(5);
    stack.push(4);
    stack.push(1);
    stack.push(1);

    std::cout<<stack.pop()<<std::endl;
    std::cout<<stack.pop()<<std::endl;
    std::cout<<stack.pop()<<std::endl;
    std::cout<<stack.pop()<<std::endl;
    std::cout<<stack.pop()<<std::endl;

}