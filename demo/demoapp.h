/*
    Copyright © 2015 by The QTMyPaint Project

    This file is part of QTMyPaint, a Qt-based interface for MyPaint C++ library.

    QTMyPaint is libre software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QTMyPaint is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with QTMyPaint. If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef DEMOAPP_H
#define DEMOAPP_H

#include <QApplication>
#include <QTabletEvent>
#include "mainwindow.h"

class DemoApp : public QApplication
{
public:
    DemoApp(int &argc, char **argv) : QApplication(argc, argv) {}

    bool event(QEvent* event) Q_DECL_OVERRIDE;

    void setMainWindow(MainWindow *m_window);

private:
    MainWindow* m_window;
};

#endif // DEMOAPP_H
