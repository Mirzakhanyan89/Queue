/*	queue_arr.h	*/

#ifndef QUEUE_ARR
#define QUEUE_ARR

#include <iostream>

template <typename T, std::size_t capacity>
class Queue {
private:
	T arr[capacity];
	std::size_t arr_size;
public:
	Queue(T elem);
	void push_back(T elem);
	void pop_front();
	bool is_empty(); 
	T back();
	T front();
	std::size_t size();
	void print_elements();
};

template <typename T, std::size_t capacity>
Queue<T, capacity>::Queue(T elem) : arr_size{} {
	arr[0] = elem;
	++arr_size;
}

template <typename T, std::size_t capacity>
void Queue<T, capacity>::push_back(T elem) {
	if (arr_size >= capacity) {
		std::cerr<< "The containter is full, you cant add element!!!\n";
		return;
		}
	arr[arr_size++] = elem;
}

template <typename T, std::size_t capacity>
void Queue<T, capacity>::pop_front() {
	if (arr_size == 0) {
		std::cerr<< "Your container dosent have any element!!!\n";
		return;
		}
	for (int i{}; i<arr_size-1; ++i) {
		arr[i] = arr[i+1];
		}
	--arr_size;
}
	
template <typename T, std::size_t capacity>
bool Queue<T, capacity>::is_empty() {
	return (arr_size == 0);
} 

template <typename T, std::size_t capacity>
T Queue<T, capacity>::front() {
	if (arr_size == 0) {
		std::cerr<< "Your container dosent have any element!!!\n";
		return T();
		}
	return arr[0];
}


template <typename T, std::size_t capacity>
T Queue<T, capacity>::back() {
	if (arr_size == 0) {
		std::cerr<< "Your container dosent have any element!!!\n";
		return T();
		}
	return arr[arr_size-1];
}

template <typename T, std::size_t capacity>
std::size_t Queue<T, capacity>::size() {
	return arr_size;
}

template <typename T, std::size_t capacity>
void Queue<T, capacity>::print_elements() {
	for (int i{}; i<arr_size; ++i) {
		std::cout<< arr[i] << '\t';
		}
	std::cout<< std::endl;
}


#endif		//QUEUE_ARR
