#include <iostream>
#include <initializer_list>

template<typename T> class Node{
public:
    T value;
    Node<T>* next = nullptr;

    Node(int value):value(value){}

    Node(std::initializer_list<T> args) {
        if(0==args.size()) {
            std::cout << "No items initialized" << std::endl;
            return;
        }

        // Don't allocate a new node for first entry.
        auto it = args.begin();
        value = *it++;
        Node<T>* temp = this;
        for(; it != args.end(); ++it) {
            temp->next = new Node<T>(*it);
            temp = temp->next;
        }
    }

    // Assuming T has an ostream &operator<<.
    void print() {
        std::cout << this->value;
        if(this->next!=nullptr) {
            this->next->print();
        } else {
            std::cout << std::endl;
        }
    }
};

template<typename T> Node<T>* reverselist(Node<T>* node) {
    if(node->next) {
        Node<T>* head = reverselist(node->next);
        node->next->next = node;
        node->next = nullptr;
        return head;
    } else {
        return node;
    }
}

int main() {
    Node<int>* list = new Node<int>{0,1,2,3,4,5,6,7,8,9};
    list->print();
    list = reverselist(list);
    list->print();

    return 0;
}

