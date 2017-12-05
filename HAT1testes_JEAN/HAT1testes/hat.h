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

    void on_pegatabela_clicked();

private:
    Ui::HAT *ui;
};

#endif // HAT_H
