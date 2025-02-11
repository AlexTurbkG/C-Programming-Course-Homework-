#ifndef SCHOOLROOM_H
#define SCHOOLROOM_H

#include "person.h"

typedef struct {
    int room_nmber;
    Person in_room[50];

} SchoolRoom;
#endif