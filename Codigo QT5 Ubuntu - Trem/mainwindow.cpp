#include "mainwindow.h"
#include "ui_mainwindow.h"

sem_t regions[7];
int criticalZones[7];

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Cria o trem com seu (ID, posição X, posição Y)
    trem1 = new Trem(1,60,10, ui->horizontalSlider->value());
    trem2 = new Trem(2,220,10, ui->horizontalSlider_2->value());
    trem3 = new Trem(3,360,10, ui->horizontalSlider_3->value());
    trem4 = new Trem(4,130,110, ui->horizontalSlider_4->value());
    trem5 = new Trem(5,410,150, ui->horizontalSlider_5->value());

    /*
     * Conecta o sinal UPDATEGUI à função UPDATEINTERFACE.
     * Ou seja, sempre que o sinal UPDATEGUI foi chamado, será executada a função UPDATEINTERFACE.
     * Os 3 parâmetros INT do sinal serão utilizados na função.
     * Trem1 e Trem2 são os objetos que podem chamar o sinal. Se um outro objeto chamar o
     * sinal UPDATEGUI, não haverá execução da função UPDATEINTERFACE
     */
    connect(trem1,SIGNAL(updateGUI(int,int,int)),SLOT(updateInterface(int,int,int)));
    connect(trem2,SIGNAL(updateGUI(int,int,int)),SLOT(updateInterface(int,int,int)));
    connect(trem3,SIGNAL(updateGUI(int,int,int)),SLOT(updateInterface(int,int,int)));
    connect(trem4,SIGNAL(updateGUI(int,int,int)),SLOT(updateInterface(int,int,int)));
    connect(trem5,SIGNAL(updateGUI(int,int,int)),SLOT(updateInterface(int,int,int)));

    //Regioes trem 1
    connect(trem1,SIGNAL(region0(int)),SLOT(region0(int)));
    connect(trem1,SIGNAL(region2(int)),SLOT(region2(int)));

    //Regioes trem 2
    connect(trem2,SIGNAL(region0(int)),SLOT(region0(int)));
    connect(trem2,SIGNAL(region1(int)),SLOT(region1(int)));
    connect(trem2,SIGNAL(region3(int)),SLOT(region3(int)));
    connect(trem2,SIGNAL(region4(int)),SLOT(region4(int)));

    //Regioes trem 3
    connect(trem3,SIGNAL(region1(int)),SLOT(region1(int)));
    connect(trem3,SIGNAL(region5(int)),SLOT(region5(int)));

    //Regioes trem 4
    connect(trem4,SIGNAL(region2(int)),SLOT(region2(int)));
    connect(trem4,SIGNAL(region3(int)),SLOT(region3(int)));
    connect(trem4,SIGNAL(region6(int)),SLOT(region6(int)));

    //Regioes trem 5
    connect(trem5,SIGNAL(region4(int)),SLOT(region4(int)));
    connect(trem5,SIGNAL(region5(int)),SLOT(region5(int)));
    connect(trem5,SIGNAL(region6(int)),SLOT(region6(int)));

    //Regioes trem 1
    connect(trem1,SIGNAL(region0Out()),SLOT(region0Out()));
    connect(trem1,SIGNAL(region2Out()),SLOT(region2Out()));

    //Regioes trem 2
    connect(trem2,SIGNAL(region0Out()),SLOT(region0Out()));
    connect(trem2,SIGNAL(region1Out()),SLOT(region1Out()));
    connect(trem2,SIGNAL(region3Out()),SLOT(region3Out()));
    connect(trem2,SIGNAL(region4Out()),SLOT(region4Out()));

    //Regioes trem 3
    connect(trem3,SIGNAL(region1Out()),SLOT(region1Out()));
    connect(trem3,SIGNAL(region5Out()),SLOT(region5Out()));

    //Regioes trem 4
    connect(trem4,SIGNAL(region2Out()),SLOT(region2Out()));
    connect(trem4,SIGNAL(region3Out()),SLOT(region3Out()));
    connect(trem4,SIGNAL(region6Out()),SLOT(region6Out()));

    //Regioes trem 5
    connect(trem5,SIGNAL(region4Out()),SLOT(region4Out()));
    connect(trem5,SIGNAL(region5Out()),SLOT(region5Out()));
    connect(trem5,SIGNAL(region6Out()),SLOT(region6Out()));



    for (int var = 0; var < 7; ++var) {
        sem_init(&regions[var],0,1);
        criticalZones[var]=1;
    }


    trem1->start();
    trem2->start();
    trem3->start();
    trem4->start();
    trem5->start();


}

//Função que será executada quando o sinal UPDATEGUI for emitido
void MainWindow::updateInterface(int id, int x, int y){
    switch(id){
    case 1: //Atualiza a posição do objeto da tela (quadrado) que representa o trem1
        ui->label_trem1->setGeometry(x,y,21,17);
        break;
    case 2: //Atualiza a posição do objeto da tela (quadrado) que representa o trem2
        ui->label_trem2->setGeometry(x,y,21,17);
        break;
    case 3: //Atualiza a posição do objeto da tela (quadrado) que representa o trem2
        ui->label_trem3->setGeometry(x,y,21,17);
        break;
    case 4: //Atualiza a posição do objeto da tela (quadrado) que representa o trem2
        ui->label_trem4->setGeometry(x,y,21,17);
        break;
    case 5: //Atualiza a posição do objeto da tela (quadrado) que representa o trem2
        ui->label_trem5->setGeometry(x,y,21,17);
        break;
    default:
        break;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    trem1->setVelocidade(value);
}

void MainWindow::on_horizontalSlider_2_valueChanged(int value)
{
    trem2->setVelocidade(value);
}

void MainWindow::on_horizontalSlider_3_valueChanged(int value)
{
    trem3->setVelocidade(value);
}

void MainWindow::on_horizontalSlider_4_valueChanged(int value)
{
    trem4->setVelocidade(value);
}

void MainWindow::on_horizontalSlider_5_valueChanged(int value)
{
    trem5->setVelocidade(value);
}

void MainWindow::region0(int id){
    sem_wait(&regions[0]);
    if(id==1){
        if((criticalZones[0]==1) && !(criticalZones[5] == 0 && criticalZones[1] == 0
                                      && criticalZones[2] == 0 && criticalZones[6] == 0)
                && !(criticalZones[2] == 0 && criticalZones[4] == 0 && criticalZones[6] == 0)
                && (criticalZones[2] == 1 || criticalZones[3] == 1)){
            criticalZones[0]=0;
            trem1->setX(ui->label_trem1->x()+10);
        }
    }
    if(id==2){
        if(criticalZones[0]==1){
            criticalZones[0]=0;
            trem2->setX(ui->label_trem2->x()-10);
        }
    }
    sem_post(&regions[0]);
}

void MainWindow::region1(int id){
    sem_wait(&regions[1]);
    if(id==2){
        if(criticalZones[1]==1  && !(criticalZones[0] == 0 && criticalZones[5] == 0
                                     && criticalZones[2] == 0 && criticalZones[6] == 0)
                && !(criticalZones[3] == 0 && criticalZones[5] == 0 && criticalZones[6] == 0)
                && (criticalZones[4] == 1 || criticalZones[5] == 1)){
            criticalZones[1]=0;
            trem2->setX(ui->label_trem2->x()+10);
        }
    }
    if(id==3){
        if(criticalZones[1]==1){
            criticalZones[1]=0;
            trem3->setX(ui->label_trem3->x()-10);
        }
    }
    sem_post(&regions[1]);

}
void MainWindow::region2(int id){
    sem_wait(&regions[2]);
    if(id==1){
        if(criticalZones[2]==1){
            criticalZones[2]=0;
            trem1->setY(ui->label_trem1->y()+10);
        }
    }
    if(id==4){
        if(criticalZones[2]==1 && !(criticalZones[0] == 0 && criticalZones[1] == 0
                                    && criticalZones[5] == 0 && criticalZones[6] == 0)
                && !(criticalZones[0] == 0 && criticalZones[4] == 0
                     && criticalZones[6] == 0)
                && (criticalZones[0] == 1 || criticalZones[3] == 1)){

            criticalZones[2]=0;
            trem4->setY(ui->label_trem4->y()-10);
        }
    }
    sem_post(&regions[2]);

}
void MainWindow::region3(int id){
    sem_wait(&regions[3]);
    if(id==2){
        if(criticalZones[3]==1 && (criticalZones[0] == 1 || criticalZones[2] == 1)){
            criticalZones[3]=0;
            trem2->setX(ui->label_trem2->x()-10);
        }
    }
    if(id==4){
        if(criticalZones[3]==1 && !(criticalZones[1] == 0
                                    && criticalZones[5] == 0 && criticalZones[6] == 0)
                && (criticalZones[4] == 1 || criticalZones[6] == 1)){
            criticalZones[3]=0;
            trem4->setX(ui->label_trem4->x()+10);
        }
    }
    sem_post(&regions[3]);

}
void MainWindow::region4(int id){
    sem_wait(&regions[4]);
    if(id==2){
        if(criticalZones[4]==1 && !(criticalZones[0] == 0
                                    && criticalZones[2] == 0 && criticalZones[6] == 0)
                && (criticalZones[3] == 1 || criticalZones[6] == 1)){
            criticalZones[4]=0;
            trem2->setY(ui->label_trem2->y()+10);
        }
    }
    if(id==5){
        if(criticalZones[4]==1 && (criticalZones[1] == 1 || criticalZones[5] == 1)){
            criticalZones[4]=0;
            trem5->setY(ui->label_trem5->y()-10);
        }
    }
    sem_post(&regions[4]);

}
void MainWindow::region5(int id){
    sem_wait(&regions[5]);
    if(id==3){
        if(criticalZones[5]==1 && !(criticalZones[0] == 0
                                    && criticalZones[1] == 0
                                    && criticalZones[2] == 0 && criticalZones[6] == 0)
                && !(criticalZones[1] == 0 && criticalZones[3] == 0 && criticalZones[6] == 0)
                && (criticalZones[1] == 1|| criticalZones[4] == 1)){

            criticalZones[5]=0;
            trem3->setX(ui->label_trem3->x()-10);
        }
    }
    if(id==5){
        if(criticalZones[5]==1){
            criticalZones[5]=0;
            trem5->setX(ui->label_trem5->x()+10);
        }
    }
    sem_post(&regions[5]);

}
void MainWindow::region6(int id){
    sem_wait(&regions[6]);
    if(id==4){
        if(criticalZones[6]==1){
            criticalZones[6]=0;
            trem4->setX(ui->label_trem4->x()+10);
        }
    }
    if(id==5){
        if(criticalZones[6]==1 && !(criticalZones[0] == 0 && criticalZones[1] == 0
                                    && criticalZones[2] == 0 && criticalZones[5] == 0)
                && !(criticalZones[1] == 0 && criticalZones[3] == 0 && criticalZones[5] == 0)
                && !(criticalZones[0] == 0 && criticalZones[2] == 0 && criticalZones[4] == 0)
                && (criticalZones[3] == 1 || criticalZones[4] == 1)){

            criticalZones[6]=0;
            trem5->setX(ui->label_trem5->x()-10);
        }
    }
    sem_post(&regions[6]);

}

void MainWindow::region0Out(){
    sem_wait(&regions[0]);
    criticalZones[0]=1;
    sem_post(&regions[0]);
}

void MainWindow::region1Out(){
    sem_wait(&regions[1]);
    criticalZones[1]=1;
    sem_post(&regions[1]);
}

void MainWindow::region2Out(){
    sem_wait(&regions[2]);
    criticalZones[2]=1;
    sem_post(&regions[2]);
}

void MainWindow::region3Out(){
    sem_wait(&regions[3]);
    criticalZones[3]=1;
    sem_post(&regions[3]);
}

void MainWindow::region4Out(){
    sem_wait(&regions[4]);
    criticalZones[4]=1;
    sem_post(&regions[4]);
}

void MainWindow::region5Out(){
    sem_wait(&regions[5]);
    criticalZones[5]=1;
    sem_post(&regions[5]);
}

void MainWindow::region6Out(){
    sem_wait(&regions[6]);
    criticalZones[6]=1;
    sem_post(&regions[6]);
}




