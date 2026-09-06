#pragma once
#include <string>

namespace structures {
template <typename T>
    class Node {
    private:
        T value;
        Node<T>* next;
    public:
        Node(T value) {
            this->value = value;
            this->next = nullptr;
        }

        T getValue() {
            return value;
        }

        void setValue(T value) {
            this->value = value;
        }

        Node<T>* getNext() {
            return next;
        }

        void setNext(Node<T>* next) {
            this->next = next;
        }

        std::string toString() {
            return value + " " + next->toString();
        }
    };
}