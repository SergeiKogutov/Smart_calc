#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <graph_window.h>

#include <QMainWindow>

extern "C" {
#include "../calc_func.h"
}

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}

QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 private slots:
  void digits_numbers();
  void calculate();
  void clear();
  void graf();

 private:
  Ui::MainWindow *ui;
  graph_window *graph_window;
};
#endif  // MAINWINDOW_H
