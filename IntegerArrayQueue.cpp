
/*This program has the implementation of the enqueue() and dequeue() functions.
The enqueue function returns a bool value: true if the queue is non-full prior to enqueuing the value,
 false if the queue is already full in which case the value is not enqueued. The dequeue() function returns 
the dequeued value if the queue is non-empty, or 0 if the queue is empty. Thank you for reading my code! :) */


#include "IntegerArrayQueue.h"

#include "IntegerArrayQueue.h"
#include <iostream>


bool IntegerArrayQueue::enqueue(int value)
{
    // Check if the queue is full
    if ((back + 2) % size == front)
    {
        return false; // Queue is full, cannot enqueue
    }

    // Increment the back index and enqueue the value
    back = (back + 1) % size;
    array[back] = value;

    return true; // Enqueue successful
}

int IntegerArrayQueue::dequeue()
{
    // Check if the queue is empty
    // Returns 0 if the back is equal meaining if it the queue is empty.	
    if (((back + 1) % size) == front)
    {
	return 0;
    }
	 
    // If the queue is full
    int temp = array[front];
    // Decreases the size of front by 1
    front = (1 + front) % size;
    return temp;	 
 	
}
