#ifndef MEMBER6_HPP
#define MEMBER6_HPP
#include "member3ll.hpp"

   /////////////stacck
    //int
   
   
    int popintstackarray(intstack &stack )
    {   
        if(stack.top!=-1)
        {
            int front = stack.entry[stack.top];
            --stack.top; 
            return front;
        }
        else 
        {
            return 1;
        }    
    }
   
    int  popintstackll (intStack &S)
    {   
        if (S.top!=nullptr)
        {   
            int lifo=S.top->entry;
            intNode*oldtop=S.top;
            S.top=S.top->next;
            delete oldtop;
            return lifo;
        }
        else 
        {
            return 1;
        }
    }
    

   

    //char
    
    char popcharstackarray( charstack &stack )
    {   
        if (stack.top!=-1)
        {
            char front = stack.entry[stack.top];
            --stack.top;
            return front ;
        }
        else
        {
            return 1;
        }    
    }
    
    char  popcharstackll (charStack &S)
    {   
        if (S.top!=nullptr)
        {   
            char lifo=S.top->entry;
            charNode*oldfront=S.top;
            S.top=S.top->next;
            delete oldfront;
            return lifo;
        }
        else 
        {
            return 1;
        }
    }
    


/////////////////////////queue
    //double
    
    double  doubledequeuearray  (doublequeue &queue )
    {   
        if (queue.front!=-1)
        {
            ++queue.front;  
        }
        else 
        {  
            return 1 ;
        }
    }
  
    double doubledequeuell (doubleQueue &Q)
    {   
        if (Q.front!=Q.rear)
        {   
            doubleNode*old= new doubleNode;
            old->entry=Q.front->entry;
            old->next=Q.front->next;
            Q.front=Q.front->next;
            delete old ;
        }
        else 
        {
            return 1 ;
        }    
    }
    //char


   
    char  chardequeuearray  (charqueue &queue )
    {   
        if (queue.front!=-1)
        {
            ++queue.front;  
        }
        else 
        {  
            return 1;
        }

    }
   
    char chardequeuell (charQueue &q)
    {   
        if (q.front!=q.rear)
        {   
            charNode*old=q.front;
            q.front=q.front->next;
            delete old ;
        }
        else 
        {
            return 1 ;
        }    
    }


  /////////////////list
    //int
  
    
    int intgetAtlist( intlist &list, int index )
    {   
        int lifo ;
        intNode*get=list.front;
        for (int i=0 ; i < index ; ++i )
        {
            get=get->next;
        }
        lifo =get->entry;
        return lifo;
    }

    bool intisEmptylist(const intlist &list )
    
        {
            return ((list.front==nullptr)&&(list.rear==nullptr)) ;
        }
    
    //char


   
    char chargetAtlist( charlist &ll , char index )
    {   
        char lifo ;
        charNode*getchar=ll.front;
        for (int i=0 ; i < index ; ++i )
        {
            getchar=getchar->next;
        }
        lifo =getchar->entry;
        return lifo;
    }
    bool charisEmptylist(const charlist &ll )
    {
        return ((ll.front==nullptr)&&(ll.rear==nullptr));
    }

    //double
   
    double doublegetAtlist( doublelist &lst, double index )
    {   
        double lifo ;
        doubleNode*get=lst.front;
        for (int i=0 ; i < index ; ++i )
        {
            get=get->next;
        }
        lifo =get->entry;
        return lifo;
    }

    bool doubleisEmptylist(const doublelist & lst )
    {
        return (lst.front==nullptr&&lst.rear==nullptr);
    }


#endif // MEMBER6_HPP
