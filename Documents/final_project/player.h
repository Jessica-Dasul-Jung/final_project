#ifndef PLAYER_H
#define PLAYER_H
#include "globals.h"

class Player: public QGraphicsRectItem
{
public:
    //Player(){}
    void keyPressEvent(QKeyEvent* event);
    virtual ~Player(){}
};

#endif // PLAYER_H
