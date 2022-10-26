#pragma once

#include <QColorDialog>
#include <PzaWidget.hpp>
#include <QLabel>

#include <QDialog>
#include <QPushButton>
class PzaColorBox : public PzaWidget
{
    Q_OBJECT

    public:
        PzaColorBox(QWidget *parent = nullptr);
        ~PzaColorBox() = default;
        const QColor &color(void) const {return _color;}
        void setColor(const QColor &color);

        void mousePressEvent(QMouseEvent *event) override;

    private:
        QColor _color;

    signals:
        void colorChanged(const QColor &color);
};