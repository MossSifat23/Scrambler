#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QLabel>
#include <QTimer>
#include <QMainWindow>
#include <QApplication>
#include <QKeyEvent>
#include <QVector>
#include <QLabel>
#include <QTextEdit>
#include <Qstring>
#include <QRandomGenerator>
#include <QRegularExpression>
#include <QStandardPaths>
#include <QFile>
#include <QTextStream>
#include <QDebug>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    QTimer *timer1;
    int totalSeconds = 2 * 60;
    int check();
    QVector<QString> names;
    QVector<QTextEdit*> Ulabels;
    QVector<QTextEdit*> Nlabels;
    QVector<QVector<QLabel*>> labels ;
    QVector<QString> question;
    QVector<QString> question_answer;
    QVector<int> used;
    QVector<int> top5;
    int currentIndex=0;
    int currentRow=0;
    int win=0;
    int chosen;
    int current_lvl=1;
    int remaining;
    void ontimeout();
    void writeFile();
    void readFile();

protected:
        void keyPressEvent(QKeyEvent *event) override ;
private slots:
        void on_pushButton_clicked();

        void on_pushButton_2_clicked();

        void on_pushButton_5_clicked();

        void on_pushButton_6_clicked();

        void on_pushButton_7_clicked();

        void on_pushButton_8_clicked();
};
#endif // MAINWINDOW_H
