#pragma once

template <typename T>
class Node {
    private:
        T value;
        Node<T>* next;
    public:
        Node(){
            value = null;
            next = new Node<T>();
        }

        T getValue() {
            return value;
        }

        void setValue(T value) {
            this.value = value;
        }

        Node<T>* getNext() {
            return next;
        }

        void setNext(Node<T>* next) {
            this.next = next;
        }

        string toString() {
            return value + " " + next.toString();
        }
};