//
// Created by Rodrigo Asbun on 9/25/21.
//
#include "DArray.h"
#include <vector>
#include <algorithm>

using namespace std;

ostream& operator<<(ostream& out, const DArray& theArray)
{
    for (int i = 0; i < theArray.numOfElements; ++i)
        out << theArray.a[i] << " ";
    return out;
}

DArray::DArray()
{
    // The default constructor sets the capacity of
    // the array to the value given by the constant value.
    // Note that this is the only time that the
    // global constant will be retrieved. From now on,
    // only the member variable capacity should be used.
    capacity = CAP;

    // The number of elements of the array is initially
    // set to zero. It is the function addElement that
    // will be populating the array.
    numOfElements = 0;

    // Create a dynamic array.
    // Note that this array will not be part of the object,
    // but only the pointer pointing to it, which is a,
    // will be part of the object.
    a = new int[capacity];
}

DArray::DArray(int newCapacity)
{
    // Same as the default constructor, but
    // the capacity is given by the parameter.
    capacity = newCapacity;
    a = new int[capacity];
    numOfElements = 0;
}


// Lab 8
bool DArray::search(int elemToSearch, int &numOfOperations) const
{
    int first{0};
    int last{numOfElements - 1};
    bool found = false;

    while ((first <= last) && !found)
    {
        int middleIdx = (first + last) / 2;

        if (elemToSearch < a[middleIdx])
        {
            numOfOperations++;
            last = middleIdx - 1;
        } else if (elemToSearch > a[middleIdx])
        {
            numOfOperations++;
            first = middleIdx + 1;
        } else if (elemToSearch == a[middleIdx])
        {
            numOfOperations++;
            found = true;
        }
    }
    return found;
}

//Exam 2 practice
bool DArray::function1(const std::vector<int>& arr) const
{
    if (numOfElements == 0)
        return false;
    else if (numOfElements != static_cast<int>(arr.size()))
        return false;
    else
    {
        int idx{0};
        while (idx < numOfElements)
        {
            if (arr[idx] != a[idx])
                return false;
            idx++;
        }
        return true;
    }
}

void function2(map<int, int>& aMap, const list<int>& aList, set<int>& aSet, int element)
{
    if ((find(aList.begin(), aList.end(), element) != aList.end()))
    {
        aSet.insert(aList.begin(), aList.end());

        int listSize = static_cast<int>(aList.size());
        auto iterList = aList.begin();
        auto iterSet = aSet.begin();

        for (int i = 0; i < listSize; ++i)
        {
            aMap[*iterSet] = *iterList;
            ++iterList;
            ++iterSet;
        }
    }
}

void DArray::addElement(int newElement)
{
    // The element will be added at the end of the array.
    // Where is the end of the array? The member variable
    // numOfElements stores the number of elements, which
    // indicates the first index available after the last
    // element stored in the array. Initially, the array is
    // empty; therefore, the numOfElements is zero, and zero
    // is the first index available to store the new element.
    a[numOfElements] = newElement;
    ++numOfElements;
}

int DArray::getNumOfElements() const
{
    return numOfElements;
}

void DArray::replaceElementAt(int newElement, int idx)
{
    a[idx] = newElement;
}

bool DArray::compareArrays(const DArray& otherArray) const
{
    // Before traversing the array, we should check if the
    // number of elements is the same, because if it is not,
    // then it is obvious that the arrays cannot be the same.
    if (numOfElements != otherArray.numOfElements)
        return false;
    else
    {
        int idx = 0;

        while (idx < numOfElements)
        {
            if (a[idx] == otherArray.a[idx])
                ++idx;
            else
                return false;
        }

        return true;
        // NOTE: If you omit this return statement,
        // the function is incomplete. Some compilers
        // might give you a WARNING, but others might
        // not. Why is so important?
        // If the while loop does not execute, because
        // idx is greater or equal to numOfElements,
        // then there will be no return value.
    }
}

void DArray::printArray() const
{
    // The function assumes that the array has at least one value.
    // Checking whether the array is empty is at times done before
    // calling a print function.
    for (int i = 0; i < numOfElements; ++i)
        cout << a[i] << " ";
    cout << endl;
}

bool DArray::isFull() const
{
    return (numOfElements == capacity);
}

bool DArray::isEmpty() const
{
    return (numOfElements == 0);
}

void DArray::clearArray()
{
    numOfElements = 0;
}

DArray::~DArray( )
{
    // Recall that we are responsible for any dynamic data
    // we create; therefore, it is up to us to delete it from
    // memory when we are done using it.

    delete [] a;
    // Note that this is an array and the function delete requires
    // the use of square brackets to let the compiler know that
    // the whole array needs to be deleted from memory.
    // Without the square brackets, the compiler would be deleting
    // only the first element of the array.

    a = nullptr;
    // Nulling the pointer after deleting the data
    // to which is pointing is necessary with new compilers,
    // to avoid getting a warning that we are leaving what is
    // called a dangling pointer (a pointer pointing to a
    // location in memory that has been deleted).
}
