#include "trem.h"
#include <QtCore>


//Construtor
Trem::Trem(int ID, int x, int y, int velocidade){
    this->ID = ID;
    this->x = x;
    this->y = y;
    this->velocidade = velocidade;
}

void Trem::setVelocidade(int velocidade){
    this->velocidade=velocidade;
}

void Trem::setX(int num){
    this->x=num;
}
void Trem::setY(int num){
    this->y=num;
}

//Função a ser executada após executar trem->START
void Trem::run(){
    while(true){
        if(velocidade>0){
        switch(ID){
        case 1:     //Trem 1

            if(y==10 && x==180)
                emit region0(ID);
            else if(y==110 && x==200){
                emit region0Out();
                x-=10;
            }
            else if(y==90 && x==200){
                emit region2(ID);
            }
            else if(y==110 && x==120){
                emit region2Out();
                x-=10;
            }

            else if (y == 10 && x <200)
                x+=10;
            else if (x == 200 && y < 110)
                y+=10;
            else if (x > 60 && y == 110)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x,y);    //Emite um sinal
            break;
        case 2: //Trem 2

            if(y==110 && x==220){
                emit region0(ID);
            }
            else if(y==10 && x==200){
                emit region0Out();
                x+=10;
            }
            else if(y==10 && x==320){
                emit region1(ID);
            }
            else if(y==110 && x==330){
                emit region1Out();
                x-=10;
            }
            else if(y==110 && x==290){
                emit region3(ID);
            }
            else if(x==200 && y==110){
                emit region3Out();
                y-=10;
            }
            else if(y==80 && x==340){
                emit region4(ID);
            }
            else if(y==110 && x==250){
                emit region4Out();
                x-=10;
            }

            else if (y == 10 && x <340)
                x+=10;
            else if (x == 340 && y < 110)
                y+=10;
            else if (x > 200 && y == 110)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x,y);    //Emite um sinal
            break;
        case 3: //Trem 3

            if(y==110 && x==360){
                emit region1(ID);
            }
            else if(y==10 && x==360){
                emit region1Out();
                x+=10;
            }
            else if(y==110 && x==440){
                emit region5(ID);
            }
            else if(y==110 && x==340){
                emit region5Out();
                y-=10;
            }

            else if (y == 10 && x <480)
                x+=10;
            else if (x == 480 && y < 110)
                y+=10;
            else if (x > 340 && y == 110)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x,y);    //Emite um sinal
            break;
        case 4: //Trem 4

            if(y==130 && x==130){
                emit region2(ID);
            }
            else if(y==110 && x==200){
                emit region2Out();
                x+=10;
            }
            else if(y==110 && x==180){
                emit region3(ID);
            }
            else if(y==110 && x==270){
                emit region3Out();
                y+=10;
            }
            else if(y==110 && x==250){
                emit region6(ID);
            }
            else if(y==230 && x==270){
                emit region6Out();
                x-=10;
            }

            else if (y == 110 && x <270)
                x+=10;
            else if (x == 270 && y < 230)
                y+=10;
            else if (x > 130 && y == 230)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x,y);    //Emite um sinal
            break;
        case 5: //Trem 5

            if(y==230 && x==290){
                emit region6(ID);
            }
            else if(y==110 && x==270){
                emit region6Out();
                x+=10;
            }
            else if(y==130 && x==270){
                emit region4(ID);
            }
            else if(y==110 && x==350){
                emit region4Out();
                x+=10;
            }
            else if(y==110 && x==310){
                emit region5(ID);
            }
            else if(y==120 && x==410){
                emit region5Out();
                y+=10;
            }

            else if (y == 110 && x <410)
                x+=10;
            else if (x == 410 && y < 230)
                y+=10;
            else if (x > 270 && y == 230)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x,y);    //Emite um sinal
            break;
        default:
            break;
        }
        msleep(100-velocidade);
        }
    }
}




