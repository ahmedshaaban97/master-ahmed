#include <iostream>
using namespace std;
#define MAXQUEUE 2
struct floatQueue{
int front;
int rear;
int size;
float entry[MAXQUEUE];
};

struct stringQueue{
int front;
int rear;
int size;
string entry[MAXQUEUE];
};


void createfloatQueue(floatQueue *poq){
poq->front=0;
poq->rear=-1;
poq->size=0;
}

void createstringQueue(stringQueue *poq){
poq->front=0;
poq->rear=-1;
poq->size=0;
}


void floatpush(float e, floatQueue *poq){
poq->rear=(poq->rear+1)% MAXQUEUE;
poq->entry[poq->rear]=e;
poq->size++;
}

void stringpush(string e, stringQueue *poq){
poq->rear=(poq->rear+1)% MAXQUEUE;
poq->entry[poq->rear]=e;
poq->size++;
}



void floatpop(float *e,floatQueue *poq){
*e=poq->entry[poq->front];
poq->front=(poq->front+1)% MAXQUEUE;
poq->size--;
}

void stringpop(string *e,stringQueue *poq){
*e=poq->entry[poq->front];
poq->front=(poq->front+1)% MAXQUEUE;
poq->size--;
}




int floatqueueEmpty(floatQueue *poq){
return (poq->size==0);
}

int stringqueueEmpty(stringQueue *poq){
return (poq->size==0);
}


int stringqueueFull(stringQueue *poq){
 return (poq->size==MAXQUEUE);
}

int floatqueueFull(floatQueue *poq){
 return (poq->size==MAXQUEUE);
}


int stringqueueSize(stringQueue *poq){
return poq->size;
}

int floatqueueSize(floatQueue *poq){
return poq->size;
}


void stringclearQueue(stringQueue *poq){
poq->front=0;
poq->rear=-1;
poq->size=0;
}

void floatclearQueue(floatQueue *poq){
poq->front=0;
poq->rear=-1;
poq->size=0;
}




float floatfront(floatQueue *poq){
float e=poq->entry[poq->front];
return e;
}

string stringfront(stringQueue *poq){
string e=poq->entry[poq->front];
return e;
}


int main()
{

    floatQueue flightNum;
    stringQueue comingFrom;
    stringQueue goingTo;
    floatQueue begining;
    floatQueue end;

    createfloatQueue(&flightNum);
    createstringQueue(&comingFrom);
    createstringQueue(&goingTo);
    createfloatQueue(&begining);
    createfloatQueue(&end);

    float num;
    string coming;
    string going;
    float begin;
    float ending;
    cout<<"please enter the flight table"<<endl;
    for(int i=0;i<MAXQUEUE;i++){
    cout<<"please enter the plane number"<<endl;
    cin>>num;
    floatpush(num,&flightNum);
    cout<<"please enter where plane "<<num<<" coming from"<<endl;
    cin>>coming;
    stringpush(coming,&comingFrom);
    cout<<"please enter where plane"<<num<<" going to"<<endl;
    cin>>going;
    stringpush(going,&goingTo);
    cout<<"please enter when plane "<<num<<" take off"<<endl;
    cin>>begin;
    floatpush(begin,&begining);
    cout<<"please enter when plane "<<num<<" arrive"<<endl;
    cin>>ending;
    floatpush(ending,&end);
}
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"         ******************          "<<endl;
cout<<"             CAIRO AIRPORT             "<<endl;
cout<<"         ******************          "<<endl;
cout<<endl;
cout<<"the plane table is: "<<endl;
cout<<"***************************************************************************"<<endl;
cout<<"  Plane Number  |  coming from  |  going to  |  take off at  |  arrive at  "<<endl;
cout<<"***************************************************************************"<<endl;
for(int i=0;i<MAXQUEUE;i++){

    cout<<"    "<<flightNum.entry[i]<<"           |      "<<comingFrom.entry[i]<<"       |    "<<goingTo.entry[0]<<"      | "<<begining.entry[i]<<"             |   "<<end.entry[i]<<endl;
    cout<<"***************************************************************************"<<endl;
}
string distination;
string ans;
cout<<"what is your distination"<<endl;
cin>>distination;
for(int i=0;i<MAXQUEUE;i++){
    if(distination==goingTo.entry[i]){
            cout<<"***************************************************************************"<<endl;
cout<<"  Plane Number  |  coming from  |  going to  |  take off at  |  arrive at  "<<endl;
cout<<"***************************************************************************"<<endl;
cout<<"    "<<flightNum.entry[i]<<"                 "<<comingFrom.entry[i]<<"           "<<goingTo.entry[i]<<"       "<<begining.entry[i]<<"                "<<end.entry[i]<<endl;    cout<<"***************************************************************************"<<endl;
    cout<<"would you like to book a ticket (yes or no)"<<endl;
cin>>ans;

if (ans=="yes"){
    cout<<"your flight has been booked"<<endl;
}else if(ans=="no"){
cout<<"thank you for your visit"<<endl;
}
     break;
    }else{
    cout<<"sorry no fligt to this location yet"<<endl;
    break;
    }
}

}
