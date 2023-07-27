# Queue Data Structure

![Queue](queue.png)

This repository contains a C++ implementation of the Queue data structure using an array.

## Overview

A Queue is a linear data structure that follows the First-In-First-Out (FIFO) principle. The elements are inserted at the end (rear) and removed from the front (front). This implementation uses an array to store the elements and supports the following operations:

- `push_back`: Adds an element to the back of the queue.
- `pop_front`: Removes the element from the front of the queue.
- `front`: Returns the front element of the queue without removing it.
- `back`: Returns the back element of the queue without removing it.
- `is_empty`: Checks if the queue is empty.
- `size`: Returns the current size of the queue.

## Implementation

The `Queue` class is defined as a templated class to support different data types. The size of the queue is determined by the `capacity` parameter passed during its instantiation.

## Usage

To use the Queue data structure, you can include the `queue_arr.h` file in your C++ project and create a queue object as follows:

```cpp
#include "queue_arr.h"

int main() {
    Queue<int, 5> queue; // Create a queue of integers with a capacity of 5
    // Perform queue operations here...
    return 0;
}
