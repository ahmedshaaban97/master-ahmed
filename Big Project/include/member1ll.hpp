#include<iostream>
using namespace std;

struct doubleNode{
double entry;
struct doubleNode *next;
};

struct charNode{
char entry;
struct charNode *next;
};


struct intNode{
int entry;
struct intNode *next;
};


struct intStack{
intNode *top;
};


struct charStack{
charNode *top;
};



struct intstack{
int top=0;
int entry[10];
};



struct charstack{
int top=0;
char entry[10];
};


struct doubleQueue{
doubleNode *front;
doubleNode *rear;
};


struct charQueue{
charNode *front;
charNode *rear;
};



struct doublequeue{
int front;
int rear;
double entry[10];
};

struct charqueue{
int front;
int rear;
char entry[10];
};



struct doublelist{
doubleNode *front;
doubleNode *rear;
};


struct intlist{
intNode *front;
intNode *rear;
};

struct charlist{
charNode *front;
charNode *rear;
};





void clearintStack(intstack *pos){
pos->top=-1;
}

void clearcharStack(charstack *pos){
pos->top=-1;
}



void clearintllstack(intStack *pos){
intNode *pn=pos->top;
while(pn){
pn=pn->next;
delete pos->top;
pos->top=pn;
}
}


void clearcharllstack(charStack *pos){
charNode *pn=pos->top;
while(pn){
pn=pn->next;
delete pos->top;
pos->top=pn;
}
}


void cleardoubleQueue(doublequeue *poq){
poq->front=0;
poq->rear=-1;
}


void clearcharQueue(charqueue *poq){
poq->front=0;
poq->rear=-1;
}


void cleardoublellQueue(doubleQueue *poq){
 while (poq->front!=NULL){
    poq->rear=poq->front->next;
    delete poq->front;
    poq->front=poq->rear;
 }
 }


void clearcharllQueue(charQueue *poq){
 while (poq->front!=NULL){
    poq->rear=poq->front->next;
    delete poq->front;
    poq->front=poq->rear;
 }
 }



void insertFrontdoublelist(double e,doublelist *pos)
{
    doubleNode *pon=new doubleNode;
    if(pos->front==NULL){
    pos->front=pon;
    pon->entry=e;
    pon->next=NULL;
      }else{
    pon->next=pos->front;
    pon->entry=e;
    pos->front=pon;
      }
}


void insertFrontcharlist(double e,charlist *pos)
{
    charNode *pon=new charNode;
    if(pos->front==NULL){
    pos->front=pon;
    pon->entry=e;
    pon->next=NULL;
      }else{
    pon->next=pos->front;
    pon->entry=e;
    pos->front=pon;
      }
}


void insertFrontintlist(double e,intlist *pos)
{
    intNode *pon=new intNode;
    if(pos->front==NULL){
    pos->front=pon;
    pon->entry=e;
    pon->next=NULL;
      }else{
    pon->next=pos->front;
    pon->entry=e;
    pos->front=pon;
      }
}

void insertBackdoublelist(double e, doublelist *pos){
doubleNode *pon=new doubleNode;
if(pos->front==NULL){
    pos->front=pon;
    pon->entry=e;
    pon->next=NULL;
    }else{
doubleNode *p=pos->front;
while(p->next!=NULL)
    p=p->next;
    pon->next=NULL;
    pon->entry=e;
    p->next=pon;
    }
}


void insertBackintlist(double e, intlist *pos){
intNode *pon=new intNode;
if(pos->front==NULL){
    pos->front=pon;
    pon->entry=e;
    pon->next=NULL;
    }else{
intNode *p=pos->front;
while(p->next!=NULL)
    p=p->next;
    pon->next=NULL;
    pon->entry=e;
    p->next=pon;
    }
}


void insertBackcharlist(double e, charlist *pos){
charNode *pon=new charNode;
if(pos->front==NULL){
    pos->front=pon;
    pon->entry=e;
    pon->next=NULL;
    }else{
charNode *p=pos->front;
while(p->next!=NULL)
    p=p->next;
    pon->next=NULL;
    pon->entry=e;
    p->next=pon;
    }
}



