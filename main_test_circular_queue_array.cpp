/*	main_test_circular_queue_array.cpp	*/

#include "circular_queue_array.h"

int main() {
    Circular_Queue<int, 5> myQueue(10);

    // Enqueue some elements
    myQueue.enqueue(20);
    myQueue.enqueue(30);
    myQueue.enqueue(40);

    // Print the elements in the queue
    std::cout << "Elements in the queue: ";
    for (std::size_t i = 0; i < 4; ++i) {
        std::cout << myQueue.front() << " ";
        myQueue.dequeue();
    }
    std::cout << std::endl;

    // Check if the queue is empty
    std::cout << "Is the queue empty? " << (myQueue.is_empty() ? "Yes" : "No") << std::endl;

    // Enqueue more elements to check the circular behavior
    myQueue.enqueue(50);
    myQueue.enqueue(60);
    myQueue.enqueue(70);

    // Print the elements in the queue
    std::cout << "Elements in the queue: ";
    for (std::size_t i = 0; i < 3; ++i) {
        std::cout << myQueue.front() << " ";
        myQueue.dequeue();
    }
    std::cout << std::endl;

    return 0;
}

