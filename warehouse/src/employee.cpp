#include "..\src\include\employee.hpp"
#include <string>

Employee::Employee(std::string name, bool forkliftCertificate):name(name), forkliftCertificate(forkliftCertificate){};

std::string Employee::getName(){
    return this->name;
};

bool Employee::getBusy(){
    return this->busy;
};

void Employee::setBusy(bool busy){
    this-> busy = busy;
};

bool Employee::getForkliftCertificate(){
    return this->forkliftCertificate;
};

void Employee::setForkliftCertificate(bool ForkliftCertificate){
    this->forkliftCertificate = forkliftCertificate;
};
