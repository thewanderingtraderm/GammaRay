/*
  styleinjector.h

  This file is part of GammaRay, the Qt application inspection and manipulation tool.

  SPDX-FileCopyrightText: 2010-2023 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
  Author: Volker Krause <volker.krause@kdab.com>

  SPDX-License-Identifier: GPL-2.0-or-later OR LicenseRef-KDAB-GammaRay

  Licensees holding valid commercial KDAB GammaRay licenses may use this file in
  accordance with GammaRay Commercial License Agreement provided with the Software.

  Contact info@kdab.com if any conditions of this licensing are not clear to you.
*/

#ifndef GAMMARAY_STYLEINJECTOR_H
#define GAMMARAY_STYLEINJECTOR_H

#include "processinjector.h"

namespace GammaRay {
class StyleInjector : public GammaRay::ProcessInjector
{
    Q_OBJECT
public:
    StyleInjector();

    QString name() const override;
    bool launch(const QStringList &programAndArgs, const QString &probeDll,
                const QString &probeFunc, const QProcessEnvironment &_env) override;

    bool selfTest() override;
};
}

#endif // GAMMARAY_STYLEINJECTOR_H
