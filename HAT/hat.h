#ifndef HAT_H
#define HAT_H

#include <QMainWindow>

namespace Ui {
class HAT;
}

class HAT : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit HAT(QWidget *parent = 0);
    ~HAT();
    
private slots:
    void on_Yes_clicked();

    void on_No_clicked();

    void on_pegatabel_clicked();

    void on_progressBar_valueChanged(int value);

    void on_Starttest_clicked(bool checked);

    void on_pegatabela_clicked(bool checked);

    void on_Starttest_clicked();

private:
    Ui::HAT *ui;
    int lastfrequency;

    std::vector <std::vector <int> > tabela;
    std::vector <std::vector <std::string> > mylog;

    int counter = 0;
    int a;


    void writeinmylog(std::string frequency, std::string situation);
    QString getresult();
    void getmylog();
    int count();
    void gettable();
};

#endif // HAT_H
