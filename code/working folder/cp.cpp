#include <iostream>
using namespace std;



// template <class T>
// class SinglyLinkedList{
// private:
//     Node<T> * head;
//     Node<T> * tail;
//     int size;
// public:
//     SinglyLinkedList() : head(nullptr), tail(nullptr), size(0) {}

//     void push_front(T data){
//         Node<T> * newNode = new Node<T>(data, head);
//         head = newNode;
//         if (!tail) tail = newNode;
//         size++;
//     }
    
//     void push_back(T data){
//         Node<T> * newNode = new Node<T>(data, nullptr);
//         if (!head){
//             head = tail = newNode;
//         }
//         else{
//             tail->next = newNode;
//             tail = tail->next;
//         }
//         size++;
//     }

//     void pop_front(){
//         if (!head) return;
//         Node<T> * tmp = head;
//         head = head->next;
//         delete tmp;
//         tmp = nullptr;
//         if (!head) tail = nullptr;
//         size--;
//     }

//     void pop_back(){
//         if (!head) return;
//         if (head == tail){
//             delete head;
//             head = tail = nullptr;
//         }
//         else{
//             Node<T> * currentNode = head;
//             while (currentNode->next != tail){
//                 currentNode = currentNode->next;
//             }
//             delete tail;
//             tail = currentNode;
//             tail->next = nullptr;
//         }
//         size--;
//     }

//     void print(){
//         Node<T> * currentNode = head;
//         while (currentNode){
//             cout << currentNode->data << " ";
//             currentNode = currentNode->next;
//         }
//     }

//     int getSize(){
//         return size;
//     }
// };

int main(){
    DoublyLinkedList<float> dll;
    for (int i=0;i<10;i++){
        dll.push_back(i);
        dll.push_front(i);
    }
    dll.print();
    cout << endl << dll.getSize() << endl;

    dll.pop_back();
    dll.pop_front();
    dll.pop_front();
    dll.print();
    cout << endl << dll.getSize() << endl;
    return 0;
}