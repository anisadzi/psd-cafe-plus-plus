//
// Created by Richard Skarbez on 5/7/23.
//
#include "Room.h"

#include "Passage.h"
#include "PassageDefaultEnterCommand.h"

void PassageDefaultEnterCommand::execute() {
    static_cast<Passage*>(gameObject)->getTo()->enter();
}

