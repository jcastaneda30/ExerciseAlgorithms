#include <deque>

class MyCircularDeque {
private:
    std::deque<int> dq;
    int capacity;

public:
    MyCircularDeque(int k) {
        capacity = k;
    }

    bool insertFront(int value) {
        if (isFull())
            return false;
        
        dq.push_front(value);
        return true;
    }

    bool insertLast(int value) {
        if (isFull())
            return false;

        dq.push_back(value);
        return true;
    }

    bool deleteFront() {
        if (isEmpty())
            return false;

        dq.pop_front();
        return true;
    }

    bool deleteLast() {
        if (isEmpty())
            return false;

        dq.pop_back();
        return true;
    }

    int getFront() {
        return isEmpty() ? -1 : dq.front();
    }

    int getRear() {
        return isEmpty() ? -1 : dq.back();
    }

    bool isEmpty() {
        return dq.empty();
    }

    bool isFull() {
        return dq.size() == capacity;
    }
};
