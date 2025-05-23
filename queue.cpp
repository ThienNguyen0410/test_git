#include<iostream>
using namespace std;
#define MAX_SIZE 10
class queue_t{
    private:
    int queue[MAX_SIZE];
    int size ;
    public:
    void enqueue(queue_t *q,int num){
        q->queue[size] = num;
        ++size;
    }
    int dequeue(queue_t*q){
        if (isEmpty(q)) return NULL;
     int dequeue_num = 0;
     dequeue_num = q->queue[0];
     for (int i=0;i<q->size;++i){
        q->queue[i] = q->queue[i+1];
     }
     --q->size;
     return dequeue_num;
    }
    int getsize(queue_t* q){
        return q->size;
    }
    bool isEmpty(queue_t*q){
        return q->size ==0;
    }
    void printqueue(queue_t *q){
        for (int i=0;i<q->size;++i){
            cout<<q->queue[i]<<"\n";
        }
    }
    void increaseSize(queue_t* q){
        ++q->size;
    }

};
int main(){
    queue_t *q = new queue_t;
    q->increaseSize(q);
    q->increaseSize(q);
    q->increaseSize(q);
    cout<<q->getsize(q);

    return 0;
}