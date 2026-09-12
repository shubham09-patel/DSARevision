//node structure in c++ struct or class have three key to make node for tree 
//1. data -> value 
//2. left -> left pointer
//3. right -> right pointer

#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int value) {
            data = value;
            left = nullptr;
            right = nullptr;
        }
};
