#include "hat.h"
#include "ui_hat.h"
#include "beeper.h"
#include <utility>
#include <string>
#include <fstream>
#include <ostream>
#include <iostream>
#include <sstream>
#include <QString>

using namespace std;


HAT::HAT(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HAT)
{
    ui->setupUi(this);
    HAT::ui->Starttest->hide();
    HAT::ui->No->hide();
    HAT::ui->Yes->hide();
    HAT::ui->progressBar->hide();
    HAT::ui->label->hide();
}

HAT::~HAT()
{
    delete ui;
}


int lastfrequency;

vector <vector <int> > tabela;
vector <vector <string> > mylog;

int counter = 0;
int a;





void writeinmylog(string frequency, string situation){
    vector <string> m;
    mylog.push_back(m);
    mylog[counter].push_back(frequency);
    mylog[counter].push_back(situation);
    cout << "prestar atenção" << mylog[counter][0] << mylog[counter][1] << endl; //only a debbug
    counter++;
}

QString getresult(){
    string heardfrequency;
    int age;

   for(int start = 0; true; start++) //search in vector mylog
   {
       if (mylog[start][1] == "No"){ //It will stop when founds the first "No" in Log
           if (start!=0){ //Avoiding bugs
           heardfrequency = mylog[(start-1)][0]; //Save the lastfrequency heard
           age = tabela[(start-1)][1]; //Save the estimated age based in Table
           break;
        }
        else {
               heardfrequency = mylog[start][0];
               age = tabela[start][1];
           }

       }

    }
string temp;
stringstream t2;
t2 << age;

temp = "Your last frequency heard is  ";
temp+= heardfrequency;
temp +="/n";
temp+="So, your estimated age is:";
string t3;
t3 = t2.str();
temp+=t3;
QString results;
results=QString::fromStdString(temp);
cout << temp;

   //cout << "Your last frequency heard is  " << heardfrequency << "  So, your estimated age is:" << age <<" years old" << endl;
   return results;
}

void getmylog(){
     //do it only in the final of test
    ofstream mylogtxt;
    const char* name = "Log";
    mylogtxt.open(name);
    if (mylogtxt.is_open()){

        cout << "log is OK" << endl;
    }
    stringstream st; //converting lastfrequency (int) to string lastfrequencystr (string)
    st << lastfrequency;
    string lastfrequencystr = st.str();
    mylogtxt << "frequency " << "Heard" << endl; //Notes on the top

    for(int b = 0; mylog[b][0] <= lastfrequencystr; b++){ //we only can compare string with string

        mylogtxt << mylog[b][0] << "     " << mylog[b][1] << endl;
        cout << "frequency is" << mylog[b][0] << "hear" << mylog[b][1] << endl; //debbug
        if (mylog[b][0] == lastfrequencystr){ //break ate the end of file
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



void gettable()
{

    int col1;
    int col2;
    vector <int> m;
    ifstream myfile;
    myfile.open("./TableTest.conf");
    if (myfile.is_open())
    {
        for (int i= 0;!myfile.eof();i++)
        {
        tabela.push_back(m);
        myfile >> col1;
        if (myfile.eof()) {
            lastfrequency = col1; //salving the lastfrequency of the table
            break;

        }
        tabela[i].push_back(col1);
        myfile >> col2;
        tabela[i].push_back(col2);
        cout << tabela[i][0]<< " "<< tabela[i][1] << endl;
        }
     }
    //cout << tabela.size();
}




void HAT::on_Yes_clicked()
{
    stringstream ss;
    ss << tabela[a-1][0];
    string myfrequency = ss.str(); //converting int to string
    //cout << "agora" << myfrequency << endl; //only a debbug
    writeinmylog(myfrequency,"Yes"); //writing in vector log

    SDL_Delay(700);
    int duration = 500;
    if((a+1)==tabela.size())
    {
        getmylog();
        HAT::ui->label->setGeometry(80,130,250,35);
        HAT::ui->progressBar->setValue(100);
        HAT::ui->label->setText(getresult());
        HAT::ui->Yes->hide();
        HAT::ui->No->hide();
    }
    else {
        Beeper b;
        b.beep(tabela[a][0], duration);
    b.wait();
    HAT::ui->progressBar->setValue(100*(a+1)/tabela.size());

    count();
    }

    //writing in vector log

//    if(tabela[a][0]==lastfrequency){ //if is the end of program
//        getmylog();
//        cout << "the lastfrequency is" << lastfrequency << endl;
    }




void HAT::on_No_clicked()
{
    stringstream ss;
    ss << tabela[a-1][0];
    string myfrequency = ss.str(); //converting int to string
    writeinmylog(myfrequency,"No"); //writing in vector log

    SDL_Delay(700);
    int duration = 500;
    if((a+1)==tabela.size())
    {
        getmylog();
        HAT::ui->label->setGeometry(80,130,250,35);
        HAT::ui->progressBar->setValue(100);
        HAT::ui->label->setText(getresult());
        HAT::ui->Yes->hide();
        HAT::ui->No->hide();
    }
    else {
        Beeper b;
        b.beep(tabela[a][0], duration);
    b.wait();
    HAT::ui->progressBar->setValue(100*(a+1)/tabela.size());
    count();
    }
    //writing in vector log


//    if(tabela[a][0]==lastfrequency){ //if is the end of program
//        getmylog();
//        cout << "the lastfrequency is" << lastfrequency << endl;
//    }




}

void HAT::on_pegatabel_clicked()
{
    a=0;
    tabela.clear();
    gettable();
    HAT::ui->Starttest->show();
    HAT::ui->pegatabel->hide();

}





void HAT::on_Starttest_clicked()
{
    int duration = 500;
    HAT::ui->Starttest->hide();
    HAT::ui->progressBar->show();
    HAT::ui->label->show();
    HAT::ui->Yes->show();
    HAT::ui->No->show();
    HAT::ui->progressBar->setValue(100*a/tabela.size());
    Beeper b;
    b.beep(tabela[a][0], duration);
    b.wait();
    count();
}
