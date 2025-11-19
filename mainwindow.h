#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QLabel>
#include <QTimer>
#include <QMainWindow>
#include <QApplication>
#include <QKeyEvent>
#include <QVector>
#include <QLabel>
#include <Qstring>
#include <QRandomGenerator>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>

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
    int totalSeconds = 2 * 60;
    int check();

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
    QTimer *timer1;
    void writeToFirestore();
    void readFromFirestore();
    void show_leader(const QByteArray& data);
    QVector<QString> firestoreUrls;

protected:
        void keyPressEvent(QKeyEvent *event) override ;
private slots:
        void on_pushButton_clicked();

        void on_pushButton_2_clicked();

        void on_pushButton_3_clicked();

        void on_pushButton_4_clicked();

        void on_pushButton_5_clicked();

        void on_pushButton_6_clicked();

        void on_pushButton_7_clicked();
    void on_check_clicked();
};
#endif // MAINWINDOW_H
