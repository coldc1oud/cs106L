#include <vector>
#include <string>
#include <fstream>
#ifndef CLASS_H
#define CLASS_H
class lesson{
public :
     lesson();
     lesson( std::string data,std::string x);
     ~lesson();
     std::vector<std::string> getLesson(const std::string& date);
  const  std::vector<std::vector<std::string>>& intput(const std::string& date, std::string&& x);
   const  std::vector<std::vector<std::string>>& intput(const std::string& date, std::vector<std::string>&& s);
     friend std::ostream &operator<<(std::ostream& out,const lesson week);
     std::string data[5] = {"Monday", "Tuesday", "Wednesday", "Thirsday", "Friday"};
     
private:
     std::vector<std::vector<std::string>>* point;
     std::vector<std::vector<std::string>> lessons;
     
};
#endif