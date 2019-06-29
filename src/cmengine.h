#ifndef CMENGINE_H
#define CMENGINE_H

#include "libCMS/engine.h"

class CMEngine
{
public:
    CMEngine();
    virtual ~CMEngine();

    CMS::Engine *engine = nullptr;
};

#endif // CMENGINE_H
