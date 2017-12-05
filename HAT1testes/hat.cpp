#include "hat.h"
#include "ui_hat.h"
#include "beeper.h"
#include <map>
#include <utility>
#include <string>
#include <fstream>
#include <ostream>
#include <iostream>
#include <sstream>

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
int lastfrequence;

vector <vector <int> > tabela;
vector <vector <string> > mylog;

int counter = 0;
int a;




void writeinmylog(string frequence, string situation){
    vector <string> m;
    mylog.push_back(m);
    mylog[counter].push_back(frequence);
    mylog[counter].push_back(situation);
    //cout << "prestar atenção" << mylog[counter][0] << mylog[counter][1] << endl; //only a debbug
    counter++;
}

void getresult(){
    string heardfrequence;
    int age;

   for(int start = 0; true; start++) //search in vector mylog
   {
       if (mylog[start][1] == "No"){ //It will stop when founds the first "No" in Log
           if (start!=0){ //Avoiding bugs
           heardfrequence = mylog[(start-1)][0]; //Save the lastfrequence heard
           age = tabela[(start-1)][1]; //Save the estimated age based in Table
           break;
        }
        else {
               heardfrequence = mylog[start][0];
               age = tabela[start][1];
           }

       }

    }

   cout << "Your last frequence heard is  " << heardfrequence << "  So, your estimated age is:" << age <<" years old" << endl;
}

void getmylog(){
     //do it only in the final of test
    ofstream mylogtxt;
    const char* name = "Log";
    mylogtxt.open(name);
    if (mylogtxt.is_open()){

        cout << "log is OK" << endl;
    }
    stringstream st; //converting lastfrequence (int) to string lastfrequencestr (string)
    st << lastfrequence;
    string lastfrequencestr = st.str();
    mylogtxt << "Frequence " << "Heard" << endl; //Notes on the top

    for(int b = 0; mylog[b][0] <= lastfrequencestr; b++){ //we only can compare string with string

        mylogtxt << mylog[b][0] << "     " << mylog[b][1] << endl;
        cout << "frequence is" << mylog[b][0] << "hear" << mylog[b][1] << endl; //debbug
        if (mylog[b][0] == lastfrequencestr){ //break ate the end of file
            break;
        }

    };
    getresult(); //by last we get the results


}




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
    myfile.open("/home/jean/Desktop/HAT1testes/TableTest");
    if (myfile.is_open())
    {
        for (int i= 0;!myfile.eof();i++)
        {
        tabela.push_back(m);
        myfile >> col1;
        if (myfile.eof()) {
            lastfrequence = col1; //salving the lastfrequence of the table
            break;

        }
        tabela[i].push_back(col1);
        myfile >> col2;
        tabela[i].push_back(col2);
        cout << tabela[i][0]<< " "<< tabela[i][1] << endl;
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

    //writing in vector log

    stringstream ss;
    ss << tabela[a][0];
    string myfrequence = ss.str(); //converting int to string
    //cout << "agora" << myfrequence << endl; //only a debbug

    writeinmylog(myfrequence,"Yes"); //writing in vector log
    if(tabela[a][0]==lastfrequence){ //if is the end of program
        getmylog();
        cout << "the lastfrequence is" << lastfrequence << endl;
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
    //writing in vector log

    stringstream ss;
    ss << tabela[a][0];
    string myfrequence = ss.str(); //converting int to string

    writeinmylog(myfrequence,"No"); //writing in vector log

    if(tabela[a][0]==lastfrequence){ //if is the end of program
        getmylog();
        cout << "the lastfrequence is" << lastfrequence << endl;
    }


    count();

}
void HAT::on_pegatabela_clicked()
{
    a=0;
    tabela.clear();
    gettable();
    cout << tabela.size();

}


