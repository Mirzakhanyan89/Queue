/* main_test_queue_arr.cpp		*/

#include "queue_arr.h"

int main() {
    Queue<int, 5> queue(10);

    // Test the push_back function
    queue.push_back(20);
    queue.push_back(30);
    queue.push_back(40);
    queue.push_back(50);
    queue.push_back(60); // This push_back will print an error message since the container is full

	// Test to print elements
	std::cout<< "Thes are the containers elements\n";
	queue.print_elements();

    // Test the size function
    std::cout << "Queue size: " << queue.size() << std::endl;

    // Test the front and back functions
    std::cout << "Front element: " << queue.front() << std::endl; // Should print 10
    std::cout << "Back element: " << queue.back() << std::endl;   // Should print 50

    // Test the pop_front function
    queue.pop_front();
    std::cout << "Front element after pop_front: " << queue.front() << std::endl; // Should print 20

    // Test the is_empty function
    std::cout << "Is queue empty? " << (queue.is_empty() ? "Yes" : "No") << std::endl; // Should print "No"

    // Pop the remaining elements
    queue.pop_front();
    queue.pop_front();
    queue.pop_front();
    queue.pop_front();
    queue.pop_front(); // This pop_front will print an error message since the container is empty

    // Test the is_empty function again
    std::cout << "Is queue empty now? " << (queue.is_empty() ? "Yes" : "No") << std::endl; // Should print "Yes"

    return 0;
}


