#ifndef STUDIO_H
#define STUDIO_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Studio;
}
QT_END_NAMESPACE

class Studio : public QMainWindow
{
    Q_OBJECT

public:
    Studio(QWidget *parent = nullptr);
    ~Studio();

private:
    Ui::Studio *ui;
};
#endif // STUDIO_H
