#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCoreApplication>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>

#include <QSqlRelationalTableModel>
#include <QItemSelectionModel>
#include <QDataWidgetMapper>

#include <QSqlTableModel>
#include <QSqlRelationalDelegate>
#include <QSqlRecord>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButtonConnexion_clicked();
    void on_pushButtonAfficherRayon_clicked();
    void on_pushButtonInsertBDD_clicked();
    void clicTableChangementRayon(const QModelIndex &index);
    void clicTableModificationArticle(const QModelIndex &index);


    void on_pushButtonEnregistrer_clicked();

private:
        Ui::MainWindow *ui;
    QSqlRelationalTableModel *model;
    QDataWidgetMapper *mapper;
    QSqlTableModel *modelRayon;
    QSqlRelationalTableModel * modelProduitRel;

};

#endif // MAINWINDOW_H
