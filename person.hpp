//begin person.hpp
#include <iostream>
#include <vector>

class Person
{
private:
    std::string firstName;
    std::string lastName;
    int cardID;
    bool active;

public:
    Person (int cardNo, bool act, std::string fName, std::string lName);
    std::string getFirstName();
    std::string getLastName();
    int         getId();
    void        setActive(bool act);
    bool        isActive();
    std::string fullName();
};

Person::Person(int cardNo, bool act, std::string fName, std::string lName) {
  cardID = cardNo;
  active = act;
  firstName = fName;
  lastName = lName;
    // complete constructor
}

std::string Person::getFirstName() {
    return firstName; // complete
}

std::string Person::getLastName() {
    return lastName; // complete
}

int Person::getId() {
    return cardID; // complete
}

void Person::setActive(bool act) {
  active = act;
} // complete

bool Person::isActive() {
    return active; // complete
}

std::string Person::fullName() {
    return firstName + " " + lastName; // complete
}
