#ifndef MEMBER4_HPP
#define MEMBER4_HPP

#include <iostream>

struct intStack
{
    int buffer[ 100 ];
    int top = -1;
};
 
void push( intStack &stack , int b )
{
    ++stack.top;
    stack.buffer[ stack.top ] = b;
}

struct charStack
{
    char buffer[ 100 ];
    int top = -1;
};
void push( charStack &stack , char entry )
{
    ++stack.top;
    stack.buffer[ stack.top ] = entry;
}
struct intNode
{
    int entry;
    intNode* next = nullptr;
};
struct intstack
{
    intNode *top = nullptr;
};
void push( intstack &stack , int entry )
{
    intNode *newNode = new intNode{ entry , stack.top };
    stack.top = newNode;
}

struct charNode
{
    char entry;
    charNode* next = nullptr;
};
struct characStack
{
    charNode *top = nullptr;
};
void push( characStack &stack , char entry )
{
    charNode *newNode = new charNode{ entry , stack.top };
    stack.top = newNode;
}





struct integerNode
{
    int entry;
    integerNode *next = nullptr;
};
struct intlist
{
    integerNode *front;
    integerNode *rear;
};
int front( intlist &list )
{
    return list.front->entry;
}    
int rear( intlist &list )
{
    return list.rear->entry; 
}


struct doubleNode
{
    double entry;
    doubleNode *next = nullptr;
};
struct doublelist
{
    doubleNode *front;
    doubleNode *rear;
};
int front( doublelist &list )
{
    return list.front->entry;
}
int rear( doublelist &list )
{
    return list.rear->entry; 
}

struct characNode
{
    char entry;
    characNode *next = nullptr;
};
struct charlist
{
    characNode *front;
    characNode *rear;
};

int front( charlist &list )
{
    return list.front->entry;
}
int rear( charlist &list )
{
    return list.rear->entry; 
}



struct doublequeue
{
    double buffer [ 100 ];
    int capacity = 100;
    int front = -1;
    int rear = -1;
};
void enqueue ( doublequeue &queue , double entry)
{
    ++ queue.rear;
    queue.buffer[queue.rear] = entry;
}

struct DoubleNode
{
    double entry;
    DoubleNode *next;
};
struct Doublelist
{
    DoubleNode *front = nullptr;
    DoubleNode *rear = nullptr;
};


void enqueue( Doublelist &queue , double entry )
{
    DoubleNode *newNode = new DoubleNode{ entry , queue.rear };
    queue.rear = newNode;
}

struct Charqueue
{
    char buffer [ 100 ];
    int capacity = 100;
    int front = -1;
    int rear = -1;
};
void enqueue ( Charqueue &queue , char entry)
{
    ++ queue.rear;
    queue.buffer[queue.rear] = entry;
}

struct charecNode
{
    char entry;
    charecNode *next;
};
struct charqueue
{
    charecNode *front = nullptr;
    charecNode *rear = nullptr;
};

void enqueue( charqueue &queue , char entry )
{
    charecNode *newNode = new charecNode{ entry , queue.rear };
    queue.rear = newNode;
}

#endif // MEMBER4_HPP
