#include "Location.h"
#include "NullCommand.h"
#include <memory>

Location::Location(const std::string& name, const std::string& description)
    : GameObject(name, description), enterCommand(std::make_shared<NullCommand>()) {}

Location::Location(const std::string& name, const std::string& description, std::shared_ptr<Command> c)
    : GameObject(name, description), enterCommand(std::move(c)) {}

void Location::enter() {
    enterCommand->execute();
}

void Location::setEnterCommand(std::shared_ptr<Command> c) {
    enterCommand = std::move(c);
}


