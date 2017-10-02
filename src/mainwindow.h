#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <fstream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void showMat(Mat display);

signals:
void showImage(QPixmap);
void covertimage();

public slots:
    void setImagepath();
    void zoomin();
    void zoomout();
    void convertImage();
    void setMindist(int min_dist);
    void saveCoordinates();


private:
    Ui::MainWindow *ui;
    int min_distance=5;
    Mat image;
    Mat copyofimage;
    Mat resultimage;
    int imagesize=2000;
    vector<Point> coordinates;
    QString coordinatesfilename;

};

#endif // MAINWINDOW_H
