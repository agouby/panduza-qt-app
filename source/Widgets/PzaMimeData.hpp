#pragma once

#include <QMimeData>
#include <PzaWidget.hpp>

class PzaMimeData : public QMimeData
{
    public:
        PzaMimeData() = default;
        ~PzaMimeData() = default;

        void *dataPtr(void) const {return _dataPtr;}
        void setDataPtr(void *ptr) {_dataPtr = ptr;}

    private:
        void *_dataPtr;
};