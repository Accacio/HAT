#include "hat.h"
#include "ui_hat.h"
#include "beeper.h"
#include <map>
#include <utility>
#include <string>
#include <fstream>
#include <ostream>
#include <iostream>

using namespace std;


HAT::HAT(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HAT)
{
    ui->setupUi(this);
}

HAT::~HAT()
{
    delete ui;
}

bool lasttime= false;

vector <vector <int> > tabela;
int a;

int count()
{
    a++;
    return 0;
}

void print()
{
    //criar log usando vector
    for (int i=0;i=tabela.size();i++)
    {
        cout << tabela[i][1] << tabela[i][2];
    }
}

void gettable()
{

    int col1;
    int col2;
    vector <int> m;
    ifstream myfile;
    myfile.open("/home/accacio/pegatextoparaint/myf.txt");
    if (myfile.is_open())
    {
        for (int i= 0;!myfile.eof();i++)
        {
        tabela.push_back(m);
        myfile >> col1;
        if (myfile.eof()) break;
        tabela[i].push_back(col1);
        myfile >> col2;
        tabela[i].push_back(col2);
        cout<< tabela[i][0]<< " "<< tabela[i][1] << endl;
        }
     }
    cout << tabela.size();
}


void HAT::on_Yes_clicked()
{
    SDL_Delay(700);
    int duration = 500;
    //tabela[a].push_back(1);
    if(lasttime) print();
    else {
        Beeper b;
        b.beep(tabela[a][0], duration);
    b.wait();
    }
    count();

}

void HAT::on_No_clicked()
{
    SDL_Delay(700);
    int duration = 500;
    tabela[a].push_back(0);
    if(lasttime) print();
    else {
        Beeper b;
        b.beep(tabela[a][0], duration);
    b.wait();
    }
    count();

}

void HAT::on_pegatabela_clicked()
{
    a=0;
    tabela.clear();
    gettable();
    cout << tabela.size() ;
}
