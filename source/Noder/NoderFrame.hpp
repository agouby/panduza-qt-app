#pragma once

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QTabWidget>
#include <QDockWidget>
#include <QSplitter>

#include "NoderView.hpp"
#include "NoderSidePanel.hpp"
#include <PanduzaEngine.hpp>
#include <PzaMenuBar.hpp>
#include <PzaMenu.hpp>

class NoderFrame : public PzaWidget
{
    public:
        NoderFrame(PanduzaEngine *engine);
        ~NoderFrame();

        PzaMenuBar *mainMenuBar(void);

    private:
        QVBoxLayout *_mainLayout;
        PanduzaEngine *_engine;
        QVBoxLayout *_sidePanelLayout;

        PzaWidget *sidePanel(QWidget *parent);
};