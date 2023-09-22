#include <iostream>
using namespace std;


class LLData {
    private:
        int data;
        LLData* next;
        LLData() {}
    public:
        LLData(int d, LLData* nxt) {
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

        LLData* head;
        LLData* tail;


    public:
        LinkedList() {
            head = new LLData(0, nullptr);
            tail = new LLData(0, nullptr);
            head->setNext(tail);
        }


        LLData* getFirst() { return head->getNext(); }


        void addItem(int d) {
            head->setNext(new LLData(d, head->getNext()));
        }


        void showList() {
            LLData* curr = getFirst();
            while (curr != tail) {
            cout << curr->getData() << " -> ";
            curr = curr->getNext();
            }
            cout << endl;
        }


        void addItemAtEnd(int d) {
            LLData* curr = head;
            while (curr->getNext() != tail) {
                curr = curr->getNext();
            }
            curr->setNext(new LLData(d, curr->getNext()));
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
