#include <iostream>
using namespace std;

template <typename T>
struct Node {
  T data;
  Node<T>* next = nullptr;
  Node<T>* prev = nullptr;
};

template <typename T>
class List {
  Node<T>* head = nullptr;
  Node<T>* tail = nullptr;
  int size = 0;

public:
  void show() {
    Node<T>* iterator = head;
    for (int i = 0; i < size; i++) {
      cout << iterator->data;
      iterator = iterator->next;
    }
  }

  void push_front(T data) {
    Node<T>* newNode =  new Node<T>{ data, head };
    if (head != nullptr) {
      head->prev = newNode;
    }
    head = newNode;
    if (tail == nullptr)
      tail = newNode;
    size++;
  }

  void push_back(T data) {
    Node<T>* newNode = new Node<T>{ data, nullptr, tail };
    if (tail != nullptr) {
      tail->next = newNode;
    }
    tail = newNode;
    if (head == nullptr)
      head = newNode;
    size++;

  }

  void insert(T data, int index) {
    if (index<0 || index>size) return;
    if (index == 0) {
      push_front(data);
      return;
    }
    if (index == size) {
      push_back(data);
      return;
    }
    if (size / 2 > index) {
      Node<T>* iterator = head;
      for (int i = 0; i < index - 1; i++) {
        iterator = iterator->next;
      }

      Node<T>* newNode = new Node<T>{ data, iterator->next, iterator };
      if (iterator->next != nullptr) {
        iterator->next->prev = newNode;
      }
      iterator->next = newNode;
    }
    else {
      Node<T>* iterator = tail;
      for (int i = size; i > index+1; i--) {
        iterator = iterator->prev;
      }

      Node<T>* newNode = new Node<T>{ data, iterator, iterator->prev };
      if (iterator->prev != nullptr) {
        iterator->prev->next = newNode;
      }
      iterator->prev = newNode;

    }
    

    

    size++;

  }


};

int main()
{
  List<int> list;
  list.push_front(4);
  list.push_front(7);
  list.push_front(9);
  list.push_front(1);
  list.push_back(6);
  list.insert(5, 4);
  list.show();
}
