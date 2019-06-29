#ifndef SQLUSERSTORE_H
#define SQLUSERSTORE_H

#include <QObject>
#include <Cutelyst/Plugins/Authentication/authenticationstore.h>

class SqlUserStore : public Cutelyst::AuthenticationStore
{
    Q_OBJECT
public:
    explicit SqlUserStore(QObject *parent = nullptr);

    virtual Cutelyst::AuthenticationUser findUser(Cutelyst::Context *c, const Cutelyst::ParamsMultiMap &userinfo);

    QString addUser(const Cutelyst::ParamsMultiMap &user, bool replace);
};

#endif // SQLUSERSTORE_H
