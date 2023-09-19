# CS2_HW3

## Introduction
Given some of the students in the class have not seen Linked Lists we are going to do some more practice with them in this week's homework and lab.  For the homework this week I want you to work out how to add a dummy front and tail node to the list.  You should start with the code shown below, but update it to use a pair of extra nodes in the list, one that is always at the front of the list, and one at the end.  For example, a list of 2, 1, and 3 would look like:

#include <iostream>
using namespace std;

class LLData {
private:
    int data;
    LLData *next;
    LLData() {}
public:
    LLData(int d, LLData *nxt) {
        data = d;
        next = nxt;
    }
    int getData() { return data; }
    LLData* getNext() { return next; }
    void setData(int d) { data = d; }
    void setNext(LLData* nxt) { next = nxt; }
};
class LinkedList {
private:
    LLData* first;
public:
    LinkedList() { first = NULL; }
    LLData *getFirst() { return first; }
    void addItem(int d) {
        first = new LLData(d,first);
    }
    void showList() {
        LLData *curr = getFirst();
        while (curr != NULL) {
            cout << curr->getData() << " -> ";
            curr = curr->getNext();
        }
        cout << endl;
    }
    void addItemAtEnd(int d) {
        if (first == NULL) {
            first = new LLData(d,first);
        }
        else {
            LLData* curr = first;
            while (curr->getNext() != NULL) {
                curr = curr->getNext();
            }
            curr->setNext(new LLData(d,curr->getNext()));
        }
    }
};

int main() {
    LinkedList myList;
    myList.addItem(1);
    myList.addItemAtEnd(2);
    myList.addItem(3);
    myList.addItemAtEnd(4);
    myList.showList();
    myList.addItem(5);
    myList.addItemAtEnd(6);
    myList.showList();
    return 0;
}

## What to Submit
Once you have completed your program submit your code via the canvas interface as a single file. Make sure that you include the names and ID#s of all of the people in your group.

