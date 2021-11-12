//
// Created by Rodrigo Asbun on 9/25/21.
//

#ifndef DARRAY_H
#define DARRAY_H

#include <iostream>
#include <array>
#include <map>
#include <list>
#include <set>

const int CAP = 50;
// We declare the capacity as a global constant so
// that we can easily change the value if needed.

//Exam 2 Practice
void function2(std::map<int, int>& aMap, const std::list<int>& aList, std::set<int>& aSet, int element);

class DArray
{
    friend std::ostream& operator<<(std::ostream& out, const DArray& theArray);

public:
    DArray();
    // Default constructor
    // Initializes the array to the capacity
    // set by the global constant.

    DArray(int newCapacity);
    // Overloaded constructor
    // Initializes the array to a given capacity.

    //Lab 8: Binary Search
    bool search(int elemToSearch, int& numOfOperations) const;

    //Exam 2 practice
    bool function1(const std::vector<int>& arr) const;


    void addElement(int newElement);
    // Function adds a given element to the array.

    int getNumOfElements() const;
    //Functions returns the number of elements in the array.

    void replaceElementAt(int newElement, int idx);
    // Function replaces an element stored at a given index with
    // a new element passed as a parameter. It assumes there is
    // enough space to insert the new element.

    bool compareArrays(const DArray& otherArray) const;
    // Function returns true if the calling object stores the
    // same values stored in the parameter object, all in the
    // same order.

    void printArray() const;
    // Function prints all elements in the array.
    // If the array is empty, it outputs an error message.

    bool isFull() const;

    bool isEmpty() const;

    void clearArray();

    ~DArray( );
    //Destructor

private:
    int *a;            //will point to an array of integers
    int capacity;      //capacity of the array
    int numOfElements; //total number of elements in the array
};

#endif //DARRAYCLASS_DARRAY_H
