#ifndef MEMBER3_HPP
#define MEMBER3_HPP
#include "member1ll.hpp"

#include <iostream>



bool isEmptyStackINT(intstack &stack )   //stack array based int
{
    return ( stack.top == 0 );
}



bool isEmptyStackCHAR( charStack &stack )    //stack array based char
{
    return ( stack.top == 0 );
}





bool isEmptyINT( intStack &list )    //stack LL based int
{
    return ( list.top == nullptr );
}




bool isEmptyCHAR( charStack &list )     //stack ll based char
{
    return ( list.top == nullptr );
}



bool isEmptyQueueDOUBLE( doubleQueue &queue )   // queue ll based double
{
    return ( queue.front == nullptr );
}



bool isEmptyQueueCHAR( charQueue &queue )    // queue ll based char
{
    return queue.front == nullptr;
}



bool isEmptyqueueDouble( doublequeue queue )   // queue array based double
{
    return queue.front == 0;
}



bool isEmptyqueueChar( charqueue queue )    // queue array based char
{
    return queue.front == 0;
}



void printAllInt( intlist &list )   //ll int
{
    intNode *current = list.front;

    while( current != nullptr )
    {
        std::cout << current->entry;
        current = current->next;
    }
}



void printAllChar( charlist &list )   //ll char
{
    charNode *current = list.front;

    while( current != nullptr )
    {
        std::cout << current->entry;
        current = current->next;
    }
}




void printAllDouble( doublelist &list )   //ll double
{
    doubleNode *current = list.front;

    while( current != nullptr )
    {
        std::cout << current->entry;
        current = current->next;
    }
}

#endif // MEMBER3_HPP
