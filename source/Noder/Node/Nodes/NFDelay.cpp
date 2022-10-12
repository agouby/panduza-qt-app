
#include <NFDelay.hpp>
#include <QThread>

Delay::Delay()
    : GNodeExec("Delay")
{
    _delay = addInput<PinDecl::Float>("Delay");
}

void Delay::exec(void)
{
    QThread::sleep(_delay->value());
}