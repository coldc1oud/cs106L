#include "user.h"
#include <iostream>

User::User() {
      this->name = "";
}
User::User(std::string&& name) {
// TODO: Implement the additional constructor here!
       this->name = name;
}
/* User::User(User& ele) {
       this->name = ele.name;
}
User::User(User&& ele) {
     this->name = move(ele.name);
}
User& User::operator=(const User&& ele) {
     this->name = ele.name;
} */
bool User::operator<(const User& ele)const  {
    return this->name<ele.name;
}
std::string User::getName() const {
    return name;
}

std::set<User>& User::getFriends() {
    return friends;
}

// A const version is needed to allow read-only access to the friends set!
const std::set<User>& User::getFriends() const {
    return friends;
}

void User::setName(std::string name) {
    this->name = name;
}

// TODO: Implement the < operator overload here!