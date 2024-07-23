// Blank cpp file
#include<iostream>
#include "class.h"

lesson::lesson() {
      for(int i = 0; i < 5; i++){
           std::vector<std::string> temp{this->data[i]};
           this->lessons.push_back(temp);
      }
      point = &lessons;
}
lesson::lesson(std::string date, std::string s){
     for(int i = 0; i < 5; i++){
           std::vector<std::string> temp{this->data[i]};
           this->lessons.push_back(temp);
      }
      for(auto& x : this->lessons) {
            if(x[0] == date) {
                x.push_back(s);
               // std::cout<<x.size();
               // for(std::string ss : x) std::cout<<ss<<" ";
                break;
            }
      }
      
      point = &lessons;
}
std::vector<std::string> lesson::getLesson(const std::string& date){
       for(auto x : this->lessons) {
            if(x[0] == date) {
                 for(std:: string pos : x) {
                   std::cout<<pos<<std::endl;
                  }  
                 return x;
            }
       }
}
const std::vector<std::vector<std::string>>& lesson::intput(const std::string& date, std::string&& x){
       for(auto& vec : this->lessons) {
            if(vec[0] == date) {
                  vec.push_back(x);
                  return this->lessons;
            }
       }
}
const std::vector<std::vector<std::string>>& lesson::intput(const std::string& date, std::vector<std::string>&& s){
       for(auto& vec : this->lessons) {
            if(vec[0] == date) {
                  vec.insert(vec.end(),move(s.begin()),move(s.end()));
                  return this->lessons;
            }
       }
}
lesson::~lesson(){
     delete point;
}
std::ostream &operator<<(std::ostream& out,const lesson week){
      for(auto x : week.lessons) {
            for(std::string s : x){
                 out<<s<<" ";
            }
            out<<"\n";
      }
}