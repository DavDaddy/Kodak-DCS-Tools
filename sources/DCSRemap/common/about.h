/*
    about.h - QT class for About window

    Copyright 2013,2014 Alexey Danilchenko
    Written by Alexey Danilchenko

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3, or (at your option)
    any later version with ADDITION (see below).

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, 51 Franklin Street - Fifth Floor, Boston,
    MA 02110-1301, USA.
*/
#ifndef ABOUT_H
#define ABOUT_H

#include "ui_about.h"

#include <QWidget>
#include <QDialog>
#include <QTranslator>

class About : public QDialog
{
    Q_OBJECT

public:
    About(int language, QWidget *parent = 0);
    ~About();

private:

    Ui::About ui;
    int language;

    void mousePressEvent(QMouseEvent * event);

private slots:

    void donate();
};

#endif // ABOUT_H
