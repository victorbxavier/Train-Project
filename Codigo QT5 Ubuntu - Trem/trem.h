#ifndef TREM_H
#define TREM_H

#include <QThread>

/*
 * Classe Trem herda QThread
 * Classe Trem passa a ser uma thread.
 * A função START inicializa a thread. Após inicializada, a thread irá executar a função RUN.
 * Para parar a execução da função RUN da thread, basta executar a função TERMINATE.
 *
*/
class Trem: public QThread{
 Q_OBJECT
public:
    Trem(int,int,int,int);  //construtor
    void run();         //função a ser executada pela thread
    void setVelocidade(int);
    void setX(int);
    void setY(int);

//Cria um sinal
signals:
    void updateGUI(int,int,int);
    void region0(int);
    void region1(int);
    void region2(int);
    void region3(int);
    void region4(int);
    void region5(int);
    void region6(int);

    void region0Out();
    void region1Out();
    void region2Out();
    void region3Out();
    void region4Out();
    void region5Out();
    void region6Out();

private:
   int x;           //posição X do trem na tela
   int y;           //posição Y do trem na tela
   int ID;          //ID do trem
   int velocidade;  //Velocidade. É o tempo de dormir em milisegundos entre a mudança de posição do trem
};

#endif // TREM_H
