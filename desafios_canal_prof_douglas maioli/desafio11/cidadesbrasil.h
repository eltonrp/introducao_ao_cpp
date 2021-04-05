// Declaração da Classe

class cidadesbrasil{
    private:
        int ano, populacao;
    public:
        cidadesbrasil(int a, int p);
        void set_ano(int a);
        int get_ano();
        void set_populacao(int p);
        int get_populacao();
        void pop_increment(int p);
};