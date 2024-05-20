////
//// Created by Richard Skarbez on 5/7/23.
////
//
//#ifndef ZOORK_NULLPASSAGE_H
//#define ZOORK_NULLPASSAGE_H
//
//#include "Passage.h"
//
//class NullPassage : public Passage {
//public:
//    explicit NullPassage(Room*);
//};
//
//
//#endif //ZOORK_NULLPASSAGE_H
//#ifndef ZOORK_NULLPASSAGE_H
//#define ZOORK_NULLPASSAGE_H
//
//class Room;
//
//class NullPassage : public Passage {
//public:
//    explicit NullPassage(Room*);
//};
//
//#endif //ZOORK_NULLPASSAGE_H

#ifndef ZOORK_NULLPASSAGE_H
#define ZOORK_NULLPASSAGE_H

#include "Passage.h" // Include the necessary headers here
#include "Room.h"

class NullPassage : public Passage {
public:
    explicit NullPassage(Room*);
};

#endif //ZOORK_NULLPASSAGE_H



