#include <iostream>
#include "user.cpp"
// TODO: Implement the non-member function + operator overload here!
User& operator+(User& fir, User& sec) {
      fir.friends.insert(sec);
      sec.friends.insert(fir);
      return (fir);
}
void printFriends(const User& user) {
    std::cout << user.getName() << " is friends with: " << std::endl;
    for(auto& use : user.getFriends()) {
        std::cout << "  " << use.getName() << std::endl;
    }
}

int main() {
    // create a bunch of users
    User alice("Alice");
    User bob("Bob");
    User charlie("Charlie");
    User dave("Dave");
   
    // make them friends
    alice + bob;
    alice + charlie;

    dave + bob;
    charlie + dave;


    // print out their friends
    printFriends(alice);
    printFriends(bob);
    printFriends(charlie);
    printFriends(dave); 



    return 0;

}
