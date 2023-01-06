/*
  propertycoloreditor.h

  This file is part of GammaRay, the Qt application inspection and manipulation tool.

  SPDX-FileCopyrightText: 2011-2023 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
  Author: Volker Krause <volker.krause@kdab.com>

  SPDX-License-Identifier: GPL-2.0-or-later OR LicenseRef-KDAB-GammaRay

  Licensees holding valid commercial KDAB GammaRay licenses may use this file in
  accordance with GammaRay Commercial License Agreement provided with the Software.

  Contact info@kdab.com if any conditions of this licensing are not clear to you.
*/

#ifndef GAMMARAY_PROPERTYCOLOREDITOR_H
#define GAMMARAY_PROPERTYCOLOREDITOR_H

#include "propertyextendededitor.h"

namespace GammaRay {
/** Property editor for QColor. */
class PropertyColorEditor : public PropertyExtendedEditor
{
    Q_OBJECT
public:
    explicit PropertyColorEditor(QWidget *parent = nullptr);
    void showEditor(QWidget *parent) override;
};
}

#endif // GAMMARAY_PROPERTYCOLOREDITOR_H
