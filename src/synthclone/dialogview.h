/*
 * synthclone - Synthesizer-cloning software
 * Copyright (C) 2011 Devin Anderson
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 675 Mass
 * Ave, Cambridge, MA 02139, USA.
 */

#ifndef __DIALOGVIEW_H__
#define __DIALOGVIEW_H__

#include <QDialog>

#include <synthclone/designerview.h>

class DialogView: public synthclone::DesignerView {

    Q_OBJECT

protected:

    explicit
    DialogView(const QString &path, QObject *parent=0);

    virtual
    ~DialogView();

    QDialog *dialog;

};

#endif
