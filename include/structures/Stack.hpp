#pragma once
#include "structures/Node.hpp"

namespace structures {
    template <typename T>
    class Stack {
        private:
            Node<T>* top;
        public:
            Stack(){
                top = nullptr;
            }

            bool push(T value){
                Node<T>* tempNode = top;
                if(top == nullptr){
                    top = new Node<T>(value);
                } else{
                    top = new Node<T>(value);
                    top->setNext(tempNode);
                }
                return true;
            }

            T pop(){
                T result{};
                Node<T>* tempNode = top;
                if(top != nullptr){
                    result = top->getValue();
                    if(top->getNext() != nullptr){
                        top = top->getNext();
                    } else{
                        top = nullptr;
                    }
                    delete tempNode;
                }
                return result;
            }

            T peek(){
                return top->getValue();
            }

            bool isEmpty(){
                return top == nullptr;
            }
    };
}
