// Declaração da Classe e Typedef

typedef char ItemType; // Define um apelido para char
const int max_itens = 100;

class Stack {
    private:
        int length;
        int len_destruct;
        ItemType* structure;
        ItemType* destructure;
    public:
        Stack();
        ~Stack();
        bool isFull();
        bool isEmpty();
        void print();
        void push(ItemType item);
        ItemType pop();
        bool isPalindrom();
        void unprint();
};