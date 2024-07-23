#include <set>
#include <string>

class User {
public:
    // TODO: write special member functions, including default constructor!

    User();
    User(std::string&& name);
   /*  User(User& ele);
    User(User&& ele);
    User& operator=(const User&& ele); */
    
    // getter functions
    std::string getName() const;
    std::set<User>& getFriends();
    const std::set<User>& getFriends() const;

    // setter functions
    void setName(std::string name);
    friend User& operator+(User& fir,User& sec);
    // TODO: add the < operator overload here!
    bool operator<(const User& ele)const ;
private:
    std::string name;
    std::set<User> friends;

};

