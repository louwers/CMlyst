/***************************************************************************
 *   Copyright (C) 2014 Daniel Nicoletti <dantti12@gmail.com>              *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; see the file COPYING. If not, write to       *
 *   the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,  *
 *   Boston, MA 02110-1301, USA.                                           *
 ***************************************************************************/

#ifndef ADMINSETTINGS_H
#define ADMINSETTINGS_H

#include <Cutelyst/Controller>

#include "cmengine.h"

using namespace Cutelyst;

class AdminSettings : public Controller, public CMEngine
{
    Q_OBJECT
    C_NAMESPACE(".admin/settings")
public:
    explicit AdminSettings(Application *app = nullptr);

    C_ATTR(general, :Local :AutoArgs)
    void general(Context *c);

    C_ATTR(code_injection, :Path('code-injection') :AutoArgs)
    void code_injection(Context *c);

    C_ATTR(users, :Local :AutoArgs)
    void users(Context *c);

    C_ATTR(user, :Path('users') :AutoArgs)
    void user(Context *c, const QString &id);

    void updateUserData(Context *c, const QString &id, const ParamsMultiMap params);
    void changePassword(Context *c, const QString &id, const ParamsMultiMap params);

    C_ATTR(users_new, :Local :AutoArgs)
    void users_new(Context *c);

    C_ATTR(users_delete, :Local :AutoArgs)
    void users_delete(Context *c, const QString &id);

    C_ATTR(database, :Local :AutoArgs)
    void database(Context *c);

    C_ATTR(json_data, :Local :AutoArgs)
    void json_data(Context *c);

    void json_import(Context *c);
    void json_export(Context *c);

    C_ATTR(db_clean, :Local :AutoArgs)
    void db_clean(Context *c);
};

#endif // ADMINSETTINGS_H
