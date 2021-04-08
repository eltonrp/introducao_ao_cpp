typedef int TypeItem;

const int max_itens = 100;

class Queue {
    private:
        int first, last;
        TypeItem* structure;
    public:
        Queue();
        ~Queue();
        bool isFull();
        bool isEmpty();
        void enqueue(TypeItem item);
        TypeItem dequeue();
        void print();
};