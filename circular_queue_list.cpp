/*	circular_queue_list.cpp	*/

#include <iostream>
#include <list>

template <typename T>
class CircularQueue {
private:
    std::list<T> list;
    typename std::list<T>::iterator front_iter;
    typename std::list<T>::iterator rear_iter;
    std::size_t size;

public:
    CircularQueue();
    void enqueue(T elem);
    void dequeue();
    T front();
    T back();
    bool is_empty();
    std::size_t getSize();
};

template <typename T>
CircularQueue<T>::CircularQueue() : size(0) {}

template <typename T>
void CircularQueue<T>::enqueue(T elem) {
    list.push_back(elem);
    if (size == 0) {
        front_iter = rear_iter = std::begin(list);
    } else {
        rear_iter = std::next(rear_iter);
    }
    ++size;
}

template <typename T>
void CircularQueue<T>::dequeue() {
    if (size == 0) {
        std::cerr << "Your container is empty, you can't pop element!!!\n";
        return;
    }
    front_iter = std::next(front_iter);
    list.pop_front();
    --size;
}

template <typename T>
T CircularQueue<T>::front() {
    if (size == 0) {
        std::cerr << "Your container is empty!!!\n";
        return T();
    }
    return *front_iter;
}

template <typename T>
T CircularQueue<T>::back() {
    if (size == 0) {
        std::cerr << "Your container is empty!!!\n";
        return T();
    }
    return *rear_iter;
}

template <typename T>
bool CircularQueue<T>::is_empty() {
    return (size == 0);
}

template <typename T>
std::size_t CircularQueue<T>::getSize() {
    return size;
}

int main() {
    CircularQueue<int> myQueue;

    // Enqueue some elements
    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);
    myQueue.enqueue(40);

    // Print the elements in the queue
    while (!myQueue.is_empty()) {
        std::cout << "Front element: " << myQueue.front() << std::endl;
        std::cout << "Back element: " << myQueue.back() << std::endl;
        myQueue.dequeue();
    }

    return 0;
}

