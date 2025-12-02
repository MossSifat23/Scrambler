#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QLabel>
#include <QApplication>
#include <Qstring>
#include <QKeyEvent>
#include <QRandomGenerator>
// need to fix the play again and then also add the images other than that i think its good
//might need to check the all the boxes are full to
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    qDebug() << QCoreApplication::applicationDirPath();
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    setFocusPolicy(Qt::StrongFocus);

        labels = {
        {ui->label,ui->label_2,ui->label_3,ui->label_4, ui->label_5},//level 1
         {ui->label_6,ui->label_7,ui->label_8,ui->label_9, ui->label_10},
         {ui->label_11, ui->label_12,ui->label_13, ui->label_14,ui->label_15},
         {ui->label_16,ui->label_17,ui->label_18, ui->label_19, ui->label_20},//level 2
         {ui->label_21, ui->label_22,ui->label_23,  ui->label_24,  ui->label_25},
        {ui->label_26, ui->label_27,ui->label_28,  ui->label_29,  ui->label_30},//level 3
         {ui->label_31, ui->label_32,ui->label_33, ui->label_34, ui->label_35}
        };
    //ui->label->text() to get the actual text back nah not needed

        totalSeconds=totalSeconds+60;
        if(totalSeconds>2*60)
        {
            totalSeconds= 2*60;
        }
        remaining  = totalSeconds;
        ui->progressBar->setRange(0, totalSeconds);
        ui->progressBar->setValue(totalSeconds); // change back to totalSeconds

        timer1 = new QTimer(this);
        connect(timer1, &QTimer::timeout, this, &MainWindow::ontimeout) ;

        top5 = {0,0,0,0,0};
        names= {"","","","",""};


        question= {
            // 🌍 Countries
            "Which South American country has Santiago as its capital?",           // Chile
            "Which island nation is famous for anime and sushi?",                  // Japan
            "Which African country is home to the pyramids of Giza?",              // Egypt
            "Which Asian country contains Mount Everest?",                         // Nepal
            "Which African country is known for safaris and the Maasai people?",   // Kenya
            "Which Middle Eastern country hosts the city of Doha?",                // Qatar
            "Which West African country was once called the Gold Coast?",          // Ghana
            "Which country lies south of Egypt?",                                  // Sudan
            "Which European country is known for paella and bullfighting?",        // Spain
            "Which Middle Eastern country has Sana’a as its capital?",             // Yemen

            // 🏙 Capitals / Cities
            "What is the capital of France?",                                      // Paris
            "What is the capital of Japan?",                                       // Tokyo
            "What is the capital of Egypt?",                                       // Cairo
            "Which city is the most populated in the UAE?",                        // Dubai
            "What is the capital of Qatar?",                                       // Doha
            "Which city is the most populous in Nigeria?",                         // Lagos
            "Which Italian city is known for fashion and design?",                 // Milan
            "What is the capital of Bulgaria?",                                    // Sofia
            "What is the capital of South Korea?",                                 // Seoul
            "Which U.S. city in Florida is famous for beaches and nightlife?",     // Miami

            "What is the capital of Ecuador?",                                     // Quito
            "What is the capital of Ghana?",                                       // Accra
            "What is the capital of Morocco?",                                     // Rabat
            "What is the constitutional capital of Bolivia?",                      // Sucre
            "What is the capital of Tunisia?",                                     // Tunis
            "What is the capital of Switzerland?",                                 // Bern
            "Which Croatian city is known for its coastal views?",                 // Split
            "Which Australian city is the capital of Western Australia?",          // Perth
            "Which Japanese city is famous for ancient temples and geisha?",       // Kyoto
            "Which Florida city is near St. Petersburg and Clearwater?",           // Tampa

            // 🌋 Elements / Science
            "Which noble gas has atomic number 10?",                               // Neon
            "Which noble gas is used in welding and light bulbs?",                 // Argon
            "Which radioactive noble gas occurs naturally from uranium decay?",    // Radon
            "Which noble gas is used in flash lamps and ion engines?",             // Xenon
            "Which chemical element has the symbol B?",                            // Boron
            "Which planet is second from the Sun and named after a goddess?",      // Venus

            // 🧠 Famous People / Historical
            "Who invented the alternating current motor?",                         // Tesla
            "Who is known as the father of psychoanalysis?",                       // Freud
            "Who was the philosopher who taught Aristotle?",                       // Plato
            "Who established the Nobel Prizes?",                                   // Nobel
            "Which romantic poet wrote 'Don Juan'?",                               // Byron
            "Which musician was known as the King of Rock and Roll?",              // Elvis
            "Which U.S. president appears on the fifty-dollar bill?",              // Grant
            "Which martial artist starred in 'Enter the Dragon'?",                 // Bruce
            "Which English king had six wives?",                                   // Henry
            "Who defeated Goliath in the Bible?",                                  // David

            // 📜 Other factual terms
            "What gas layer protects Earth from UV rays?",                         // Ozone
            "What are the smallest units of matter?",                              // Atoms
            "What device emits a concentrated beam of light?",                     // Laser
            "What is the opposite of dark?",                                       // Light
            "What is the vapor phase of water?",                                   // Steam
            "What influence that changes motion is measured in newtons?",          // Force
            "What large body of salt water covers most of Earth?",                 // Ocean
            "What planet do humans live on?",                                      // Earth
            "What is the medium of exchange in an economy?",                       // Money
            "What baked food is made from flour and yeast?",                        // Bread
            "What hard natural material forms mountains and rocks?",               // Stone
            "What clear liquid is essential for life?",                            // Water
            "What living organism produces oxygen and chlorophyll?",               // Plant
            "What species are humans?",                                            // Human
            "What organized sound is often called an art form?",                   // Music
            "What device measures time?",                                          // Clock
            "What detection system uses radio waves to locate objects?",           // Radar
            "What rail vehicle moves along a track?",                              // Train
            "What animal is known as mankind’s earliest mode of transport?",       // Horse
            "What flying vehicle moves through air with wings?",                   // Plane

            // 💡 General knowledge, concepts, and things
            "What medium of exchange is used to buy goods?",                       // Money
            "What large body of salt water surrounds continents?",                 // Ocean
            "What art form uses rhythm and melody?",                               // Music
            "What movement art involves rhythm and steps?",                        // Dance
            "What visual art involves recorded moving images?",                    // Movie
            "What activity involves competition for physical skill?",              // Sport
            "What vehicle runs on rails to transport passengers?",                 // Train
            "What vehicle with wings flies through the air?",                      // Plane
            "What animal is known as a riding or farm animal?",                    // Horse
            "What device tells time?",                                             // Clock
            "What baked food is made from dough?",                                 // Bread
            "What natural flowing water body moves toward an ocean?",              // River
            "What small, hard seed is used for food?",                             // Grain
            "What device transmits sound using electromagnetic waves?",            // Radio
            "What is the ability to do work?",                                     // Power
            "What tall structure supports or transmits signals?",                  // Tower
            "What handheld source of light uses fire or battery power?",           // Torch
            "What region lies beyond Earth’s atmosphere?",                         // Space
            "What organ pumps blood through the body?",                            // Heart
            "What organ controls thoughts and memory?",                            // Brain,
        };
        question_answer = {
            // 🌍 Countries
            "chile", "japan", "egypt", "nepal", "kenya", "qatar", "ghana", "sudan", "spain", "yemen",
            "paris", "tokyo", "cairo", "dubai", "doha", "lagos", "milan", "sofia", "seoul", "miami",
            "quito", "accra", "rabat", "sucre", "tunis", "bern", "split", "perth", "kyoto", "tampa",

            // 🌋 Elements / Science
            "neons", "argon", "radon", "xenon", "boron", "venus",

            // 🧠 Famous People / Historical
            "tesla", "freud", "plato", "nobel", "byron", "elvis", "grant", "bruce", "henry", "david",

            // 📜 Other factual terms
            "ozone", "atoms", "laser", "light", "steam", "force", "ocean", "earth", "money", "bread",
            "stone", "water", "plant", "human", "music", "clock", "radar", "train", "horse", "plane",

            // 💡 General knowledge, concepts, and things
            "money", "ocean", "music", "dance", "movie", "sport", "train", "plane", "horse", "clock",
            "bread", "river", "grain", "radio", "power", "tower", "torch", "space", "heart", "brain"

        };
        Ulabels={
            ui->U1,ui->U2,ui->U3,ui->U4, ui->U5
        };
        Nlabels={
            ui->N1,ui->N2,ui->N3,ui->N4, ui->N5
        };


}

void MainWindow:: readFile()
{
    QString path = QCoreApplication::applicationDirPath() + "/leaderboard.txt";
    qDebug() << "Trying to open:" << path;
    QFile file(path);
    int temp = 0;

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "FAILED TO OPEN FILE";
        return;
    }

    QTextStream in(&file);

    while (!in.atEnd() && temp < 5)
    {
        QString line = in.readLine();
        line = line.trimmed();   // Remove spaces, tabs, \r, etc.

        //qDebug() << "RAW LINE:[" << line << "]";

        if (line.isEmpty()) continue;     // skip completely blank or whitespace-only lines

        QStringList parts = line.split(QRegularExpression("\\s+"));
        if (parts.size() < 2) {
            qDebug() << "Format error:" << line;
            continue;
        }

        names[temp] = parts[0];
        top5[temp] = parts[1].toInt();

        //qDebug() << "Name:" << names[temp] << "Score:" << top5[temp];

        temp++;
    }

    file.close();
}
void MainWindow:: writeFile()
{
    QString path = QCoreApplication::applicationDirPath() + "/leaderboard.txt";
    QFile file(path);

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);

    for (int i = 0; i < 5; i++)
    {
        out << names[i] << " " << top5[i];

        if (i < 4)
            out << "\n";      // prevents a blank extra line
    }
    qDebug() << "SAVING LEADERBOARD:";
    for (int i = 0; i < 5; i++) {
        qDebug() << i << ":" << names[i] << top5[i];
    }
    file.close();

}
void MainWindow::ontimeout()
{
    //remaining--;
    ui->progressBar->setValue(ui->progressBar->value()-1);

    if(ui->progressBar->value() <= 0) { //When Timer hits 0
        timer1->stop();
        ui->stackedWidget->setCurrentIndex(4); //Game Over
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked() //Start Page
{
    readFile();
    ui->stackedWidget->setCurrentIndex(1); //To Lv.1
    chosen = QRandomGenerator::global()->bounded(0,86);
    used.push_back(chosen);
    QString temp = question[chosen];
    ui->textEdit_2->setText(temp);
    QFont q("Pixel Operator", 15);
    q.setBold(true);
    ui->textEdit_2->setFont(q);
    ui->textEdit_2->setAlignment(Qt::AlignCenter);
    for(auto list : labels)
    {
        for(QLabel* lab : list)
        {

            lab->setText("");
            lab->setStyleSheet(
                "QLabel {"
                "   color: White ;"             // Text color
                "   background-color: rgb(204, 204, 204);"   // Background color
                "   border: 2px solid black;"  // Border style
                "   padding: 10px;"            // Padding inside the label
                "   font-size: 18px;"          // Font size
                "}");
        }

    }

    timer1->start(1000); //1 second interval
}

void MainWindow::on_pushButton_4_clicked() //Start Page
{

}

void MainWindow::on_pushButton_2_clicked() //Lv.1 Next Button
{
    QTimer *timer2 = new QTimer(this);
    if(check()==1)
    {
        currentRow=0;
        chosen = QRandomGenerator::global()->bounded(0,86);

        for(int answered:used)
        {
            if(chosen == answered )
            {
                 chosen = QRandomGenerator::global()->bounded(0,86);
            }
        }
        used.push_back(chosen);
        ui->textEdit_2->setText(question[chosen]);
        QFont q("Pixel Operator", 15);
        q.setBold(true);
        ui->textEdit_2->setFont(q);
        ui->textEdit_2->setAlignment(Qt::AlignCenter);
        ui->progressBar->setValue(ui->progressBar->value()+5);
        /*ui->stackedWidget->setCurrentIndex(2); //To Lv.2

        const int totalSeconds = 3 * 60;
        int remaining = totalSeconds;
        ui->progressBar_2->setRange(0, totalSeconds);
        ui->progressBar_2->setValue(totalSeconds);

        //QTimer *timer2 = new QTimer(this);
        connect(timer2, &QTimer::timeout, this, [=]() mutable
        {
            remaining--;
            ui->progressBar_2->setValue(remaining);

            if(remaining <= 0)
            {
                timer2->stop();
                ui->stackedWidget->setCurrentIndex(5); //Game Over
            }
        });*/
        for(auto list : labels)
        {
            for(QLabel* lab : list)
            {

                lab->setText("");
                lab->setStyleSheet(
                    "QLabel {"
                    "   color: White ;"             // Text color
                    "   background-color: rgb(204, 204, 204);"   // Background color
                    "   border: 2px solid black;"  // Border style
                    "   padding: 10px;"            // Padding inside the label
                    "   font-size: 18px;"          // Font size
                    "}");
            }

        }
        win++;
        current_lvl++;
        ui->textEdit_11->setText("(Lv."+QString::number(current_lvl)+")");
        ui->textEdit_11->setAlignment(Qt::AlignCenter);
        QFont f("Pixel Operator", 24);
        f.setBold(true);
        ui->textEdit_11->setFont(f);



    }
    else
    {
        if(currentRow==3)
        {
            timer2->stop();
            ui->stackedWidget->setCurrentIndex(4); //Game Over
        }
    }
    timer2->start(1000); //1 second interval


}

void MainWindow::on_pushButton_3_clicked() //Lv.2 Next Button
{
    QTimer *timer3 = new QTimer(this);
    if(check()==1)
    {
    currentRow=5;
    ui->stackedWidget->setCurrentIndex(3); //To Lv.3

    const int totalSeconds = 1 * 60; //1 minute
    int remaining = totalSeconds;
    ui->progressBar_3->setRange(0, totalSeconds);
    ui->progressBar_3->setValue(totalSeconds);

    //QTimer *timer3 = new QTimer(this);
    connect(timer3, &QTimer::timeout, this, [=]() mutable{
        remaining--;
        ui->progressBar_3->setValue(remaining);

        if(remaining <= 0) {
            timer3->stop();
            ui->stackedWidget->setCurrentIndex(5); //Game Over
        }
    });

    timer3->start(1000); //1 second interval
    }
    else
    {
        if(currentRow==5 && win==1)
        {
            timer3->stop();
            ui->stackedWidget->setCurrentIndex(5); //Game Over
        }
    }
}




void MainWindow::on_pushButton_5_clicked() //leaderboard
{
    ui->stackedWidget->setCurrentIndex(1); //(Yes) To Game Start Page



    for(auto list : labels)
    {
        for(QLabel* lab : list)
        {

            lab->setText("");
            lab->setStyleSheet(
                "QLabel {"
                "   color: White ;"             // Text color
                "   background-color: rgb(204, 204, 204);"   // Background color
                "   border: 2px solid black;"  // Border style
                "   padding: 10px;"            // Padding inside the label
                "   font-size: 18px;"          // Font size
                "}");
        }

    }
    timer1->start(1000); //1 second interval



}

void MainWindow::on_pushButton_6_clicked() //Credits & Options
{
    delete ui; //(No) Closes Game Window
}


void MainWindow::on_pushButton_7_clicked() //leaderboard
{
    //ui->stackedWidget->setCurrentIndex(6);
    readFile();
    for(int i=0;i<5;i++)
    {
    Ulabels[i]->setText(names[i]);
    Nlabels[i]->setText(QString::number(top5[i]));
    //QFont q("Pixel Operator", 15);
    //q.setBold(true);
    //Ulabels[i]->setFont(q);
   // Ulabels[i]->setAlignment(Qt::AlignCenter);
    }


    ui->stackedWidget->setCurrentIndex(5); // leaderboard
}


void MainWindow:: keyPressEvent(QKeyEvent *event)  //how the text pops up
{

    // continue to go through qkeyevent to make the text pop up as you type it and then return the sumbission then call the check(
    QString guess;
    QString keyText = event->text();

    if(event->key() == Qt::Key_Backspace)
    {
        if(currentIndex>0)
        {
            currentIndex--;
            labels[currentRow][currentIndex]->clear();
        }
        else
        {
            labels[currentRow][currentIndex]->clear();
        }

    }

    if(keyText.isEmpty())
    {
        return;
    }

    QChar charachter = keyText[0];

    if(!charachter.isLetter())
    {
        return;
    }

    if(currentIndex < 5)
    {
        QFont f("Pixel Operator", 16);
        labels[currentRow][currentIndex]->setStyleSheet(
            "QLabel {"
            "   color: Black ;"            // Text color
            "   background-color: rgb(204, 204, 204);"   // Background color
            "   border: 2px solid black;"  // Border style
            "   padding: 10px;"            // Padding inside the label
            "   font-size: 18px;"            // Font size
            "}");
        labels[currentRow][currentIndex]->setText(charachter.toLower());
        labels[currentRow][currentIndex]->setFont(f);
        currentIndex++;
    }



}


int MainWindow::check() // checks and changes the color of the labels
{
    int count=0;

    QString attempt;
    QString correct = question_answer[chosen]; //make a global variable to choose a random question as an int
        //the question and answers int value is synced so make it like question_answer[chosen]
    currentIndex=0;

        for(QLabel* labeler: labels[currentRow])
        {
            attempt = labeler-> text();



            for(int i=0;i<5;i++)
            {
                bool color= false;
                if(attempt==correct[currentIndex])
                {
                    labels[currentRow][currentIndex]->setStyleSheet(
                        "QLabel {"
                        "   color: White ;"             // Text color
                        "   background-color: green;"   // Background color
                        "   border: 2px solid black;"  // Border style
                        "   padding: 10px;"            // Padding inside the label
                        "   font-size: 18px;"          // Font size
                        "}"


                        );

                    count++;
                    break;
                }
                else
                {
                    for(QChar charachter: correct)
                    {
                        if(charachter== attempt)
                        {
                            labels[currentRow][currentIndex]->setStyleSheet(
                                "QLabel {"
                                "   color: White ;"             // Text color
                                "   background-color: orange;"   // Background color
                                "   border: 2px solid black;"  // Border style
                                "   padding: 10px;"            // Padding inside the label
                                "   font-size: 18px;"          // Font size
                                "}"
                                );
                            color = true;

                            break;
                        }

                    }


                }
                if(color==false)
                {
                    labels[currentRow][currentIndex]->setStyleSheet(
                        "QLabel {"
                        "   color: White ;"             // Text color
                        "   background-color: gray;"   // Background color
                        "   border: 2px solid black;"  // Border style
                        "   padding: 10px;"            // Padding inside the label
                        "   font-size: 18px;"          // Font size
                        "}"
                        );

                    break;
                }
            }
            currentIndex++;
        }

        currentIndex=0;
        if(count == 5) //|| the person is out of tries for the current stacked widget )
        {
            //QTimer::singleShot(2000, this); add a delay somehow
            win++;
            return 1;

        }
        else
        {

            currentRow++;
            return 0;
        }


}













void MainWindow::on_pushButton_8_clicked() //save
{
    QString name = ui->textEdit_15->toPlainText().trimmed();
    if (name.isEmpty())
        return;       // don't save an empty name

    ui->textEdit_15->setReadOnly(true);

    for(int i=0;i<5;i++)
    {
        if (current_lvl >= top5[i])      // find where the new score fits
        {
            // shift scores and names down
            for (int j = 4; j > i; j--)
            {
                top5[j] = top5[j - 1];
                names[j] = names[j - 1];
            }

            // insert new score and name
            top5[i] = current_lvl;
            names[i] = name;

            break;
        }
    }

    writeFile();
    ui-> textEdit_15->setText("Saved!");
}

