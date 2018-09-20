#ifndef SUBWINDOW_H
#define SUBWINDOW_H

#include <QMainWindow>
#include <QPushButton>

namespace Uii {
class SubWindow;
}

class Subwindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit Subwindow(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    int jdid;
    void sendid(int id);
    ~Subwindow();

signals:

public slots:
private:
    Uii::SubWindow *ui;
};

#endif // SUBWINDOW_H
