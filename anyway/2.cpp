#include <iostream>

void fun(){
    static int x=1;
    x+=1;
    std::cout<<x;
}

void fun2(){
    int x=1;
    x+=1;
    std::cout<<x;
}

class a
{

    public:
        a()
        { 
            std :: cout << "cool \n";
        }
        int x=1;


        void plus(){
            x+=1;
            std :: cout << x << '\n';
        }
};

int main(){
    a a1;
    a1.plus();
    a1.plus();
    a1.plus();
    std::cout<<"-----"<<'\n';
    fun();
    fun();
    fun();
    std::cout<<'\n'<<"-----"<<'\n';
    fun2();
    fun2();
    fun2();
    std::cout<<'\n'<<"-----"<<'\n';
    return 0;
}

