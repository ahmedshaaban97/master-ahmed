#ifndef MEMBER2_HPP
#define MEMBER2_HPP
#include "member1.hpp"
#include <iostream>

using namespace std;
{
int stackfront (intstack &stack )
{
    int front = stack.entry[stack.top];
    front = stack.top;
    return stack.top->entry;
}
int stackfront (charstack &stack)
{
    char front =stack.entry[stack.top];
    return stack.top->entry;

}  
    
int front (intStack &stack)        // stack using ll
{
    return stack.top->entry;
}


int front (charStack &stack)           //stack using ll
{
    return stack.top->entry;
}

void removeBack( intlist *pos)            //linked list  integer
{
    intNode *poa =pos->rear;
    intNode *ps;
    for(*ps=pos->front ;ps->next!= rear;ps=ps->next)
    {

    }
    pos->rear=*ps;
    delete poa;
}
void removeFront( intlist *pos )
{
    intNode *poa=pos->front;
    pos->front = pos->front.next;
    delete poa;
}
void removeBack(charlist *pos)      // linked list char 
{
    charNode *poa =pos->rear;
    charNode *ps;
    for(*ps=pos->front ;ps->next!= rear;ps=ps->next)
    {

    }
    pos->rear=*ps;
    delete poa;
}


void removeFront( charlist *pos )
{
    charNode *poa=pos->front;
    pos->front = pos->front.next;
    delete poa;
}


void removeback(doublelist *pos)       // linked list double
{
    doubleNode *poa =pos->rear;
    doubleNode *ps;
    for(*ps=pos->front ;ps->next!= rear;ps=ps->next)
    {

    }
    pos->rear=*ps;
    delete poa;
}


void removeFront( doublelist *pos )
{
    doubleNode *poa=pos->front;
    pos->front = pos->front.next;
    delete poa;
}




  

int Front( doublequeue &q )        //queue double array 
{
     return q.front->entry;
}



int Front( charqueue &q )    //queue char array
{
    return q.front->entry;
}

   
int front( doubleQueue &q )     // double queue ll
{
    return q.front->entry;
}




int front( charQueue &q )        // char queue ll
{
     return q.front->entry;
}
}
#endif // MEMBER2_HPP
