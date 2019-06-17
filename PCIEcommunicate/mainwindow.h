#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    bool rebuildboard();
    bool connectboard();
    void DMA();
    int m_input;


private slots:
    void on_pushButton_clicked();

    void on_read_clicked();

    void on_write_clicked();
    void DMAwrite();

    void on_DMAread_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
