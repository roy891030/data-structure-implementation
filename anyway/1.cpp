#include <iostream>

const int MAX_SIZE = 100; // 堆疊的最大容量

class Stack {
private:
    int data[MAX_SIZE]; // 使用陣列儲存堆疊的資料
    int topIndex; // 指向頂部元素的索引

public:
    Stack() {
        topIndex = -1; // 初始化頂部索引為 -1，表示堆疊為空
    }

    // 將元素壓入堆疊
    void push(int value) {
        if (topIndex < MAX_SIZE - 1) { // 檢查堆疊是否已滿
            topIndex++;
            data[topIndex] = value;
        } else {
            std::cout << "Stack overflow! Cannot push element " << value << std::endl;
        }
    }

    // 從堆疊彈出元素
    void pop() {
        if (topIndex >= 0) { // 檢查堆疊是否為空
            topIndex--;
        } else {
            std::cout << "Stack underflow! Cannot pop element." << std::endl;
        }
    }

    // 獲取頂部元素
    int top() {
        if (topIndex >= 0) { // 檢查堆疊是否為空
            return data[topIndex];
        } else {
            std::cout << "Stack is empty." << std::endl;
            return -1; // 堆疊為空時返回 -1（或其他適當的錯誤值）
        }
    }

    // 檢查堆疊是否為空
    bool empty() {
        return (topIndex == -1);
    }

    // 獲取堆疊的大小
    int size() {
        return topIndex + 1;
    }
};

int main() {
    Stack stack;

    stack.push(66);
    stack.push(2);
    stack.push(3);

    std::cout << "Stack size: " << stack.size() << std::endl;
    std::cout << "Top element: " << stack.top() << std::endl;

    stack.pop();
    std::cout << "Top element after pop: " << stack.top() << std::endl;
    stack.pop();
    std::cout << "Top element after pop: " << stack.top() << std::endl;
    stack.pop();
    std::cout << "Top element after pop: " << stack.top() << std::endl;
    std::cout << "roy is cool" << std::endl;
    return 0;


};