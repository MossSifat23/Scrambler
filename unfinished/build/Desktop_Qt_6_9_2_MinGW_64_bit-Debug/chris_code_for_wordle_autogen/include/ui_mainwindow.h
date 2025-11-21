/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QTextEdit *textEdit_17;
    QTextEdit *textEdit_18;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;
    QWidget *page_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_2;
    QProgressBar *progressBar;
    QTextEdit *textEdit_4;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_12;
    QLabel *label_7;
    QLabel *label_14;
    QLabel *label_4;
    QLabel *label_13;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_15;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_11;
    QTextEdit *textEdit_11;
    QPushButton *pushButton_2;
    QWidget *page_3;
    QTextEdit *textEdit_5;
    QProgressBar *progressBar_2;
    QTextEdit *textEdit_6;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_17;
    QLabel *label_16;
    QLabel *label_19;
    QLabel *label_18;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QTextEdit *textEdit_7;
    QTextEdit *textEdit_12;
    QPushButton *pushButton_3;
    QWidget *page_4;
    QTextEdit *textEdit_9;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_29;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_35;
    QLabel *label_30;
    QTextEdit *textEdit_10;
    QTextEdit *textEdit_13;
    QPushButton *pushButton_4;
    QProgressBar *progressBar_3;
    QTextEdit *textEdit_8;
    QWidget *page_5;
    QTextEdit *textEdit_14;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QTextEdit *textEdit_15;
    QWidget *page_6;
    QFrame *frame;
    QTextEdit *N2;
    QTextEdit *U2;
    QTextEdit *U3;
    QTextEdit *N3;
    QTextEdit *U4;
    QTextEdit *N4;
    QTextEdit *U5;
    QTextEdit *N5;
    QTextEdit *textEdit_16;
    QTextEdit *U1;
    QTextEdit *N1;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1653, 918);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(380, 40, 881, 681));
        stackedWidget->setMinimumSize(QSize(300, 300));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        page = new QWidget();
        page->setObjectName("page");
        textEdit = new QTextEdit(page);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(0, 0, 881, 151));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 241, 120);"));
        textEdit->setReadOnly(true);
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(230, 370, 371, 261));
        pushButton->setMinimumSize(QSize(0, 0));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/button/play_button.png);"));
        textEdit_17 = new QTextEdit(page);
        textEdit_17->setObjectName("textEdit_17");
        textEdit_17->setGeometry(QRect(40, 200, 321, 111));
        textEdit_17->setStyleSheet(QString::fromUtf8("border-color: rgb(214, 214, 214);\n"
"background-color: rgb(245, 245, 245);"));
        textEdit_18 = new QTextEdit(page);
        textEdit_18->setObjectName("textEdit_18");
        textEdit_18->setGeometry(QRect(480, 200, 301, 111));
        textEdit_18->setStyleSheet(QString::fromUtf8("border-color: rgb(214, 214, 214);\n"
"background-color: rgb(245, 245, 245);"));
        label_36 = new QLabel(page);
        label_36->setObjectName("label_36");
        label_36->setGeometry(QRect(690, 240, 81, 51));
        label_36->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        label_36->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_37 = new QLabel(page);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(590, 240, 91, 51));
        label_37->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 170, 0);"));
        label_37->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_38 = new QLabel(page);
        label_38->setObjectName("label_38");
        label_38->setGeometry(QRect(490, 240, 81, 51));
        label_38->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(0, 255, 0);"));
        label_38->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        textEdit_3 = new QTextEdit(page_2);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(10, 560, 171, 111));
        textEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        textEdit_3->setReadOnly(true);
        textEdit_2 = new QTextEdit(page_2);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(110, 100, 641, 81));
        textEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        textEdit_2->setReadOnly(false);
        progressBar = new QProgressBar(page_2);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(110, 60, 671, 23));
        progressBar->setMinimumSize(QSize(0, 0));
        progressBar->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        progressBar->setValue(24);
        textEdit_4 = new QTextEdit(page_2);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setGeometry(QRect(390, 20, 91, 31));
        textEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        textEdit_4->setReadOnly(true);
        gridLayoutWidget = new QWidget(page_2);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(180, 230, 491, 301));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Perpetua Titling MT")});
        font.setPointSize(24);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 1, 7, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_2, 1, 8, 1, 1);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_12, 3, 8, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_7, 2, 8, 1, 1);

        label_14 = new QLabel(gridLayoutWidget);
        label_14->setObjectName("label_14");
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));
        label_14->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_14, 3, 11, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_4, 1, 11, 1, 1);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName("label_13");
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));
        label_13->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_13, 3, 10, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_3, 1, 10, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_6, 2, 7, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_5, 1, 12, 1, 1);

        label_15 = new QLabel(gridLayoutWidget);
        label_15->setObjectName("label_15");
        label_15->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));
        label_15->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_15, 3, 12, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_9, 2, 11, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_8, 2, 10, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_10, 2, 12, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName("label_11");
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_11, 3, 7, 1, 1);

        textEdit_11 = new QTextEdit(page_2);
        textEdit_11->setObjectName("textEdit_11");
        textEdit_11->setGeometry(QRect(370, 590, 141, 71));
        textEdit_11->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContents);
        textEdit_11->setReadOnly(true);
        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(720, 550, 141, 101));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/button/next_button.png);"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        textEdit_5 = new QTextEdit(page_3);
        textEdit_5->setObjectName("textEdit_5");
        textEdit_5->setGeometry(QRect(380, 20, 91, 31));
        textEdit_5->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        textEdit_5->setReadOnly(true);
        progressBar_2 = new QProgressBar(page_3);
        progressBar_2->setObjectName("progressBar_2");
        progressBar_2->setGeometry(QRect(110, 60, 671, 23));
        progressBar_2->setMinimumSize(QSize(0, 0));
        progressBar_2->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        progressBar_2->setValue(24);
        textEdit_6 = new QTextEdit(page_3);
        textEdit_6->setObjectName("textEdit_6");
        textEdit_6->setGeometry(QRect(110, 100, 641, 81));
        textEdit_6->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        textEdit_6->setReadOnly(true);
        gridLayoutWidget_2 = new QWidget(page_3);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(180, 230, 511, 231));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(gridLayoutWidget_2);
        label_17->setObjectName("label_17");
        label_17->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));

        gridLayout_2->addWidget(label_17, 2, 8, 1, 1);

        label_16 = new QLabel(gridLayoutWidget_2);
        label_16->setObjectName("label_16");
        label_16->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));

        gridLayout_2->addWidget(label_16, 2, 7, 1, 1);

        label_19 = new QLabel(gridLayoutWidget_2);
        label_19->setObjectName("label_19");
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));

        gridLayout_2->addWidget(label_19, 2, 11, 1, 1);

        label_18 = new QLabel(gridLayoutWidget_2);
        label_18->setObjectName("label_18");
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));

        gridLayout_2->addWidget(label_18, 2, 10, 1, 1);

        label_20 = new QLabel(gridLayoutWidget_2);
        label_20->setObjectName("label_20");
        label_20->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));

        gridLayout_2->addWidget(label_20, 2, 12, 1, 1);

        label_21 = new QLabel(gridLayoutWidget_2);
        label_21->setObjectName("label_21");
        label_21->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));

        gridLayout_2->addWidget(label_21, 3, 7, 1, 1);

        label_22 = new QLabel(gridLayoutWidget_2);
        label_22->setObjectName("label_22");
        label_22->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));

        gridLayout_2->addWidget(label_22, 3, 8, 1, 1);

        label_23 = new QLabel(gridLayoutWidget_2);
        label_23->setObjectName("label_23");
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));

        gridLayout_2->addWidget(label_23, 3, 10, 1, 1);

        label_24 = new QLabel(gridLayoutWidget_2);
        label_24->setObjectName("label_24");
        label_24->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));

        gridLayout_2->addWidget(label_24, 3, 11, 1, 1);

        label_25 = new QLabel(gridLayoutWidget_2);
        label_25->setObjectName("label_25");
        label_25->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));

        gridLayout_2->addWidget(label_25, 3, 12, 1, 1);

        textEdit_7 = new QTextEdit(page_3);
        textEdit_7->setObjectName("textEdit_7");
        textEdit_7->setGeometry(QRect(10, 560, 171, 111));
        textEdit_7->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        textEdit_7->setReadOnly(true);
        textEdit_12 = new QTextEdit(page_3);
        textEdit_12->setObjectName("textEdit_12");
        textEdit_12->setGeometry(QRect(360, 600, 141, 71));
        textEdit_12->setReadOnly(true);
        pushButton_3 = new QPushButton(page_3);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(720, 550, 141, 101));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/button_images/next_button.png);"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        textEdit_9 = new QTextEdit(page_4);
        textEdit_9->setObjectName("textEdit_9");
        textEdit_9->setGeometry(QRect(110, 100, 641, 81));
        textEdit_9->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        textEdit_9->setReadOnly(true);
        gridLayoutWidget_3 = new QWidget(page_4);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(180, 230, 511, 231));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_31 = new QLabel(gridLayoutWidget_3);
        label_31->setObjectName("label_31");
        label_31->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));

        gridLayout_3->addWidget(label_31, 3, 7, 1, 1);

        label_32 = new QLabel(gridLayoutWidget_3);
        label_32->setObjectName("label_32");
        label_32->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));

        gridLayout_3->addWidget(label_32, 3, 8, 1, 1);

        label_29 = new QLabel(gridLayoutWidget_3);
        label_29->setObjectName("label_29");
        label_29->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));

        gridLayout_3->addWidget(label_29, 2, 11, 1, 1);

        label_33 = new QLabel(gridLayoutWidget_3);
        label_33->setObjectName("label_33");
        label_33->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));

        gridLayout_3->addWidget(label_33, 3, 10, 1, 1);

        label_34 = new QLabel(gridLayoutWidget_3);
        label_34->setObjectName("label_34");
        label_34->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));

        gridLayout_3->addWidget(label_34, 3, 11, 1, 1);

        label_26 = new QLabel(gridLayoutWidget_3);
        label_26->setObjectName("label_26");
        label_26->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));

        gridLayout_3->addWidget(label_26, 2, 7, 1, 1);

        label_27 = new QLabel(gridLayoutWidget_3);
        label_27->setObjectName("label_27");
        label_27->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));

        gridLayout_3->addWidget(label_27, 2, 8, 1, 1);

        label_28 = new QLabel(gridLayoutWidget_3);
        label_28->setObjectName("label_28");
        label_28->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));

        gridLayout_3->addWidget(label_28, 2, 10, 1, 1);

        label_35 = new QLabel(gridLayoutWidget_3);
        label_35->setObjectName("label_35");
        label_35->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));

        gridLayout_3->addWidget(label_35, 3, 12, 1, 1);

        label_30 = new QLabel(gridLayoutWidget_3);
        label_30->setObjectName("label_30");
        label_30->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));

        gridLayout_3->addWidget(label_30, 2, 12, 1, 1);

        textEdit_10 = new QTextEdit(page_4);
        textEdit_10->setObjectName("textEdit_10");
        textEdit_10->setGeometry(QRect(10, 560, 171, 111));
        textEdit_10->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        textEdit_10->setReadOnly(true);
        textEdit_13 = new QTextEdit(page_4);
        textEdit_13->setObjectName("textEdit_13");
        textEdit_13->setGeometry(QRect(360, 600, 141, 71));
        textEdit_13->setReadOnly(true);
        pushButton_4 = new QPushButton(page_4);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(720, 550, 141, 101));
        pushButton_4->setStyleSheet(QString::fromUtf8("border-image: url(:/button_images/next_button.png);"));
        progressBar_3 = new QProgressBar(page_4);
        progressBar_3->setObjectName("progressBar_3");
        progressBar_3->setGeometry(QRect(110, 60, 671, 24));
        progressBar_3->setMinimumSize(QSize(0, 0));
        progressBar_3->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        progressBar_3->setValue(24);
        textEdit_8 = new QTextEdit(page_4);
        textEdit_8->setObjectName("textEdit_8");
        textEdit_8->setGeometry(QRect(380, 20, 81, 31));
        textEdit_8->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        textEdit_8->setReadOnly(true);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        textEdit_14 = new QTextEdit(page_5);
        textEdit_14->setObjectName("textEdit_14");
        textEdit_14->setGeometry(QRect(210, 50, 421, 211));
        textEdit_14->setReadOnly(true);
        pushButton_5 = new QPushButton(page_5);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(230, 500, 181, 101));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/button/yes_button.png);"));
        pushButton_6 = new QPushButton(page_5);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(430, 490, 211, 121));
        pushButton_6->setStyleSheet(QString::fromUtf8("border-image: url(:/button/no_button.png);"));
        pushButton_7 = new QPushButton(page_5);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(360, 380, 141, 81));
        pushButton_8 = new QPushButton(page_5);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(470, 320, 75, 24));
        textEdit_15 = new QTextEdit(page_5);
        textEdit_15->setObjectName("textEdit_15");
        textEdit_15->setGeometry(QRect(290, 300, 121, 51));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        frame = new QFrame(page_6);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(220, 110, 411, 441));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(163, 163, 163);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        N2 = new QTextEdit(frame);
        N2->setObjectName("N2");
        N2->setGeometry(QRect(220, 140, 104, 71));
        N2->setReadOnly(true);
        U2 = new QTextEdit(frame);
        U2->setObjectName("U2");
        U2->setGeometry(QRect(50, 130, 104, 71));
        U2->setReadOnly(true);
        U3 = new QTextEdit(frame);
        U3->setObjectName("U3");
        U3->setGeometry(QRect(50, 250, 104, 71));
        U3->setReadOnly(true);
        N3 = new QTextEdit(frame);
        N3->setObjectName("N3");
        N3->setGeometry(QRect(220, 250, 104, 71));
        N3->setReadOnly(true);
        U4 = new QTextEdit(frame);
        U4->setObjectName("U4");
        U4->setGeometry(QRect(50, 340, 104, 71));
        U4->setReadOnly(true);
        N4 = new QTextEdit(frame);
        N4->setObjectName("N4");
        N4->setGeometry(QRect(220, 340, 104, 71));
        N4->setReadOnly(true);
        U5 = new QTextEdit(frame);
        U5->setObjectName("U5");
        U5->setGeometry(QRect(50, 430, 104, 71));
        U5->setReadOnly(true);
        N5 = new QTextEdit(frame);
        N5->setObjectName("N5");
        N5->setGeometry(QRect(220, 430, 104, 71));
        N5->setReadOnly(true);
        textEdit_16 = new QTextEdit(page_6);
        textEdit_16->setObjectName("textEdit_16");
        textEdit_16->setGeometry(QRect(310, 0, 211, 101));
        U1 = new QTextEdit(page_6);
        U1->setObjectName("U1");
        U1->setGeometry(QRect(640, 160, 104, 71));
        U1->setReadOnly(true);
        N1 = new QTextEdit(page_6);
        N1->setObjectName("N1");
        N1->setGeometry(QRect(760, 160, 104, 71));
        N1->setReadOnly(true);
        stackedWidget->addWidget(page_6);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1653, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:700; color:#000000;\">Welcome to</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-ind"
                        "ent:0; text-indent:0px;\"><span style=\" font-size:22pt; font-weight:700;\">The Scrambler</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">A word puzzle game</span></p></body></html>", nullptr));
        pushButton->setText(QString());
        textEdit_17->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; text-decoration: underline;\">How to play</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">1.</span><span style=\" font-size:12pt;\"> Guess the word within the given tries</span></p>\n"
""
                        "<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">2.</span><span style=\" font-size:12pt;\"> Each guess must be a valid word        </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">3.</span><span style=\" font-size:12pt;\"> Colors shows how close you are         </span></p></body></html>", nullptr));
        textEdit_18->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; text-decoration: underline;\">Color Guide</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p></body></html>", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "wrong", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "wrong spot", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "correct", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">How To Play<br /><br /></span><span style=\" font-size:10pt; font-weight:700;\">If you played Wordle, you already know what to do</span></p></body></html>", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">Question</span>"
                        "</p></body></html>", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:700;\">Timer</span></p></body></html>", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_12->setText(QString());
        label_7->setText(QString());
        label_14->setText(QString());
        label_4->setText(QString());
        label_13->setText(QString());
        label_3->setText(QString());
        label_6->setText(QString());
        label_5->setText(QString());
        label_15->setText(QString());
        label_9->setText(QString());
        label_8->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        textEdit_11->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt; font-weight:700;\">(Lv.1)</span></p></body></html>", nullptr));
        pushButton_2->setText(QString());
        textEdit_5->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:700;\">Timer</span></p></body></html>", nullptr));
        textEdit_6->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">Question</span>"
                        "</p></body></html>", nullptr));
        label_17->setText(QString());
        label_16->setText(QString());
        label_19->setText(QString());
        label_18->setText(QString());
        label_20->setText(QString());
        label_21->setText(QString());
        label_22->setText(QString());
        label_23->setText(QString());
        label_24->setText(QString());
        label_25->setText(QString());
        textEdit_7->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">How To Play<br /><br /></span><span style=\" font-size:10pt; font-weight:700;\">If you played Wordle, you already know what to do</span></p></body></html>", nullptr));
        textEdit_12->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt; font-weight:700;\">(Lv.2)</span></p></body></html>", nullptr));
        pushButton_3->setText(QString());
        textEdit_9->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">Question</span>"
                        "</p></body></html>", nullptr));
        label_31->setText(QString());
        label_32->setText(QString());
        label_29->setText(QString());
        label_33->setText(QString());
        label_34->setText(QString());
        label_26->setText(QString());
        label_27->setText(QString());
        label_28->setText(QString());
        label_35->setText(QString());
        label_30->setText(QString());
        textEdit_10->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">How To Play<br /><br /></span><span style=\" font-size:10pt; font-weight:700;\">If you played Wordle, you already know what to do</span></p></body></html>", nullptr));
        textEdit_13->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt; font-weight:700;\">(Lv.3)</span></p></body></html>", nullptr));
        pushButton_4->setText(QString());
        textEdit_8->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:700;\">Timer</span></p></body></html>", nullptr));
        textEdit_14->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt; font-weight:700;\">Thank You For Playing</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700; text-decoration: underline; color:#1b87ec;\">Credits</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; m"
                        "argin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700; color:#1b87ec;\">Christopher Williams</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700; color:#1b87ec;\">Mostakim Sifat</span></p></body></html>", nullptr));
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Leaderboard", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
