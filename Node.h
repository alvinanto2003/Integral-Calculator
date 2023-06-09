#ifndef Node_h
#define Node_h

//importing required libraries
#include <string>
#include <iostream>
#include "Term.h"


//template class Node
template <typename T>
class Node
{
private:
    //instance variables declaration
    T data;
    Node<T>* left; //declaration of Node pointer left to point to the left child node in the Binary Search Tree
    Node<T>* right; //declaration of Node pointer right to point to the right child node in the Binary Search Tree
public:
    //empty constructor that sets data to NULL and left and right to nullptr
    Node(){data = NULL; left = nullptr; right = nullptr;}
    //overloaded constructor with T parameter that saves data to the argument and left and right pointers to nullptr
    Node(T item){data = item;   left = nullptr; right = nullptr;}
    
    ~Node(){}
    //accessor methods to access the data and pointers to left and right childs
    T* getData(){return &data;}
    Node<T>* getLeft(){return left;}
    Node<T>* getRight(){return right;}
    
    //mutators that sets the data and left and right pointer to the arguments
    void setData(T p){data = p;}
    void setLeft(Node<T>* n){left = n;}
    void setRight(Node<T>* n){right = n;}
    
    //overloaded > operator that compares the data at the 2 operand Nodes
    bool operator>(Node &obj){return (data > obj.data);}
    
    //overloaded < operator that compares the data at the 2 operand Nodes
    bool operator<(Node &obj){return (data < obj.data);}
    
    //overloaded == operator that compares the data at the 2 operand Nodes
    bool operator==(Node &obj){return (data == obj.data);}
    
    //overloaded << operator that uses the overloaded << operator inside the object class of the content in the node
    friend std::ostream& operator<<(std::ostream &o, Node &n){o << n->getData();   return o;}
};

#endif /* Node_h */
