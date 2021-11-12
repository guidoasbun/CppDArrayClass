#include "DArray.h"

#include <iostream>
#include <vector>

using namespace std;

void printMap(const map<int, int>& aMap);
void printList(const list<int>& aList);
void printSet(const set<int>& aSet);

int main( )
{
//    std::cout << "CLASS DARRAY\n";
//
//    std::cout << "\n*** TEST: "
//              << "Default constructor / printArray ***\n";
//    DArray a1;
//    std::cout << "Array 1: ";
//    a1.printArray();
//
//    std::cout << "\n*** TEST: "
//              << "Overloaded constructor / addElement / printArray ***\n";
//    int capacityA2 = 10;
//    DArray a2(capacityA2);
//    for (int i = 0; i < 5; ++i) // fill up only half array
//        a2.addElement(i + 10);
//    std::cout << "Array 2: ";
//    a2.printArray();
//
//    std::cout << "\n*** TEST: "
//              << "Fill up array with more elements  ***\n";
//    int numOfElementsA2 = a2.getNumOfElements();
//    for (int i = numOfElementsA2; i < capacityA2; ++i)
//        a2.addElement(i + 10);
//    std::cout << "Array 2 is now: ";
//    a2.printArray();
//
//    std::cout << "\n*** TEST: "
//              << "replaceElementAt (overwrite index 4 with 100)  ***\n";
//    a2.replaceElementAt(100, 4);
//    std::cout << "Array 2 is now: ";
//    a2.printArray();
//
//    std::cout << "\n*** TEST: compareArrays  ***\n";
//
//    std::cout << "Different number of elements...\n";
//    DArray arr1(10);
//    for (int i = 11; i < 15; ++i)
//        arr1.addElement(i);
//    DArray arr2(10);
//    for (int i = 10; i < 14; ++i)
//        arr2.addElement(i);
//    std::cout << "arr1: ";
//    arr1.printArray();
//    std::cout << "arr2: ";
//    arr2.printArray();
//    if (arr1.compareArrays(arr2))
//        std::cout << "    Arrays are the same.\n";
//    else
//        std::cout << "    Arrays are different.\n";
//
//    std::cout << "\nDifferent first element...\n";
//    DArray arr3(10);
//    arr3.addElement(500);
//    for (int i = 11; i < 15; ++i)
//        arr3.addElement(i);
//    std::cout << "arr1: ";
//    arr1.printArray();
//    std::cout << "arr3: ";
//    arr3.printArray();
//    if (arr1.compareArrays(arr3))
//        std::cout << "    Arrays are the same.\n";
//    else
//        std::cout << "    Arrays are different.\n";
//
//    std::cout << "\nDifferent last element...\n";
//    arr3.replaceElementAt(10, 0);
//    arr3.replaceElementAt(500, arr3.getNumOfElements() - 1);
//    std::cout << "arr1: ";
//    arr1.printArray();
//    std::cout << "arr3: ";
//    arr3.printArray();
//    if (arr1.compareArrays(arr3))
//        std::cout << "    Arrays are the same.\n";
//    else
//        std::cout << "    Arrays are different.\n";
//
//    std::cout << "\nDifferent middle element...\n";
//    arr3.replaceElementAt(14, arr3.getNumOfElements() - 1);
//    arr3.replaceElementAt(500, arr3.getNumOfElements() / 2);
//    std::cout << "arr1: ";
//    arr1.printArray();
//    std::cout << "arr3: ";
//    arr3.printArray();
//    if (arr1.compareArrays(arr3))
//        std::cout << "    Arrays are the same.\n";
//    else
//        std::cout << "    Arrays are different.\n";
//
//    std::cout << "\nSame elements...\n";
//    arr3.replaceElementAt(12, arr3.getNumOfElements() / 2);
//    std::cout << "arr1: ";
//    arr1.printArray();
//    std::cout << "arr3: ";
//    arr3.printArray();
//    if (arr1.compareArrays(arr3))
//        std::cout << "    Arrays are the same.\n";
//    else
//        std::cout << "    Arrays are different.\n";
//
//    std::cout << arr1.isFull() << std::endl;
//
//    std::cout << std::endl;

//**********************************************************************LAB


//    DArray array1;
//    array1.addElement(45);
//    array1.addElement(53);
//    array1.addElement(66);
//    array1.addElement(78);
//    array1.addElement(80);
//    array1.addElement(82);
//    array1.addElement(88);
//    array1.addElement(99);
//
//
//    array1.printArray();
//    int numOfOperations{0};
//
//    cout << "Found: " << array1.search(100, numOfOperations) << endl;
//    cout << "Number of operations: " << numOfOperations << endl;

//*************************************************************Exam 2 Practice

    DArray array1;
    array1.addElement(44);
    array1.addElement(78);



    vector<int> array2 = {44,78};
    array1.printArray();

    for (int i : array2)
    {
        cout << i << " ";
    }


    cout << "\n" << array1.function1(array2) << endl;

    map<int, int> myMap;
    list<int> myList = {2,4,9,1,3};
    set<int> mySet;
    int myInt{9};

    function2(myMap, myList, mySet, myInt);

    cout << "Map is: ";
    printMap(myMap);
    cout << "List is: ";
    printList(myList);
    cout << "Set is: ";
    printSet(mySet);



    return 0;
}

void printMap(const map<int, int>& aMap)
{
    for (auto elem : aMap)
        cout << "(" << elem.first << ", " << elem.second << ")";

    cout << endl;
}

void printList(const list<int>& aList)
{
    for (const auto& element : aList)
        cout << element << " ";
    cout << endl;
}

void printSet(const set<int>& aSet)
{
    for (auto elem : aSet)
        cout << elem << " ";

    cout << endl;
}

