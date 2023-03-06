#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<Threshold.h>
#include<Image.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_actionupload_triggered();


    void on_normalizeBtn_clicked();

    void on_equalizeBtn_clicked();

    void on_tabWidget_tabBarClicked(int index);
    void on_horizontalSlider_valueChanged(int value);

    void on_globalRadio_clicked();

    void on_submitThreshold_clicked();

    void on_cSlider_actionTriggered(int action);

    void on_cSlider_valueChanged(int value);

    void on_blockSizeSlider_valueChanged(int value);

    void on_localRadio_clicked();

    void on_submitEdges_clicked();

    void on_filter_1_btn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
