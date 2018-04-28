#ifndef MEMBER5_HPP
#define MEMBER5_HPP
namespace mostafa
{
 //size of integer stacks using arrays.   
    int sizeofintstackarray( Stack &stack );
    {
        return (stack.top +1 );
    } 
//size of charcter stacks using arrays        
    char sizeofcharstackarray( Stack &stack );
    {
        return (stack.top +1 );
    }       
//size of double queue using arrays .
    double sizeofdoublequeuearrays( DoublesQueue &queue );
    {
        // we supose the max size of array= 10
        return((queue.rear-queue.front+ 10 )% 10 )
    }
//size of charcter queue using arrays .
    char sizeofcharqueuearrays( DoublesQueue &queue );
    {
        // we supose the max size of array= 10
        return((queue.rear-queue.front+ 10 )% 10 )
    }
//size of integer stack using linked list .
    int sizeofintstacklist( IntegersLL &stack );
    {   
        int accum =0;
        Node *pos ;
        pos = stack.top ;
        while ((pos -> next)!= nullptr)
        {
            accum ++ ;
            pos = pos-> next;
        }
        return (accum+1);
    }
//size of charcter stack using linked list .
    char sizeofcharstacklist( IntegersLL &stack );
    {   
        int accum =0;
        Node *pos ;
        pos = stack.top ;
        while ((pos -> next)!= nullptr)
        {
            accum ++ ;
            pos = pos-> next;
        }
        return (accum+1);
    }
//size of double queue using linked list.
    double sizeofdoublequeuelist( DoublesQueue &queue );
{   
        int accum =0;
        Node *poq  ;
        poq = queue.front ;
        while ((pos -> next)!= queue.rear)
        {
            accum ++ ;
            poq = poq-> next;
        }
        return (accum+1);
    }
//size ofcharcter queue using linked list .
    char sizeofcharqueuelist( DoublesQueue &queue );
{   
        int accum =0;
        Node *poq  ;
        poq = queue.front ;
        while ((pos -> next)!= queue.rear)
        {
            accum ++ ;
            poq = poq-> next;
        }
        return (accum+1);
    }
//size of ineger list.
    int sizeofintlist( IntegersLL &list );
    {   
        int accum =0;
        Node *pol = new Node ;
        pol = list.front ;
        while ((pol -> next)!= rear)
        {
            accum ++ ;
            pol = pol-> next;
        }
        return (accum+1);
    }
//size of doubles list.
    double sizeofdoublelist( IntegersLL &list );
    {   
        int accum =0;
        Node *pol = new Node ;
        pol = list.front ;
        while ((pol -> next)!= rear)
        {
            accum ++ ;
            pol = pol-> next;
        }
        return (accum+1);
    }
//size of charcter list.    
    char sizeofcharlist( IntegersLL &list );
    {   
        int accum =0;
        Node *pol = new Node ;
        pol = list.front ;
        while ((pol -> next)!= rear)
        {
            accum ++ ;
            pol = pol-> next;
        }
        return (accum+1);
    }


}




#endif // MEMBER5_HPP
