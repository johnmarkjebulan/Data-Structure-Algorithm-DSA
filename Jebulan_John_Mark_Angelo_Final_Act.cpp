#include <iostream>
using namespace std;

string karaoke_queue[100];

int front = 0;
int rear = -1;
int max_queue = 10;

bool isFull(){
    if(rear == max_queue -1){
        return true;
    }
    return false;
}

bool isEmpty(){
    if(rear == -1){
        return true;
    }
    return false;
}
string enqueue(string song){
if(isFull()){
    return "The queue is full. try again later";
}    
karaoke_queue[++rear] = song;
return "A new song has been added in the queue";
}
string dequeue(){
    if(isEmpty()){
        return "There is no song in the queue. try adding first";
    }
    string song = karaoke_queue[front];
    for(int i = 0; i < rear; i++){
karaoke_queue[i-1] = karaoke_queue[i];
    }
    rear--;
    return song;
}
int main() {
cout << enqueue("Give me your forever") <<endl;
cout << enqueue("Hiling") <<endl;
cout << enqueue("Your Man") <<endl;

cout << karaoke_queue[0] << endl;
cout << karaoke_queue[1] << endl;   
cout << karaoke_queue[2] << endl;

cout << dequeue() << endl;
cout << dequeue() << endl;  
cout << dequeue() << endl;
cout << dequeue() << endl;    



    return 0;
}
