/*	circular_queue_array.h	*/

#ifndef CIRC_QUEUE_ARR_H
#define CIRC_QUEUE_ARR_H

#include <iostream>

template <typename T, std::size_t capacity>
class Circular_Queue {
private:
	T arr[capacity];
	std::size_t front_index;
	std::size_t rear_index;
	std::size_t arr_size;
public:
	Circular_Queue(T elem);
	void enqueue(T elem);
	void dequeue();
	T front();
	T back();
	bool is_empty();
	std::size_t size();
};


template <typename T, std::size_t capacity>
Circular_Queue<T, capacity>::Circular_Queue(T elem) : front_index{}, rear_index{}, arr_size{} {
	arr[rear_index] = elem;
	++arr_size;
}

template <typename T, std::size_t capacity>
void Circular_Queue<T, capacity>::enqueue(T elem) {
	if (arr_size >= capacity) {
		std::cerr<< "Your container is full, you cann't push element!!!\n";
		return;
		}
	rear_index = (rear_index + 1) % capacity;
	arr[rear_index] = elem;
	++arr_size;
}

template <typename T, std::size_t capacity>
void Circular_Queue<T, capacity>::dequeue() {
	if (arr_size == 0) {
		std::cerr<< "Your container is empty, you cann't pop element!!!\n";
		return;
		}
	front_index = (front_index + 1) % capacity;
	--arr_size;
}

template <typename T, std::size_t capacity>
T Circular_Queue<T, capacity>::front() {
	if (arr_size == 0) {
		std::cerr<< "Your container is empty!!!\n";
		return T();
	}
	return arr[front_index];
}

template <typename T, std::size_t capacity>
T Circular_Queue<T, capacity>::back() {
	return arr[rear_index];
}
template <typename T, std::size_t capacity>
bool Circular_Queue<T, capacity>::is_empty() {
	return (arr_size == 0);	
}

template <typename T, std::size_t capacity>
std::size_t Circular_Queue<T, capacity>::size() {
	return arr_size;	
}


#endif		// CIRC_QUEUE_ARR_H
