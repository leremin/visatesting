#ifndef DIALOGSELECTANSWER_H
#define DIALOGSELECTANSWER_H

#include <QDialog>
#include <QStringList>
#include <QVBoxLayout>
#include <QPushButton>
#include <QSignalMapper>

class DialogSelectAnswer : public QDialog
{
    Q_OBJECT
public:
    explicit DialogSelectAnswer(QWidget *parent = 0, QStringList answers = QStringList());

public slots:
    void selectAnswer(int id);

private:
    QPushButton **button;
    QVBoxLayout *layout;
    QSignalMapper *mapper;
};

#endif // DIALOGSELECTANSWER_H
