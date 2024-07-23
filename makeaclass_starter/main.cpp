#include "class.cpp"
/*
 * Assigment 3: Make a class!
 * Requirements:
 * Must have a custom constructor ‚ù?
 * Must have a default constructor ‚ù?
    - i.e. constructor overloading
 * Must have private members (functions and/or variables) ‚ù?
 * Must have public members (functions) ‚ù?
 * Must have at least one getter function ‚ù?
 * Must have at least one setter function ‚ù?
 */

int main() {
  // initialize class and run this file
   std::string da = "Friday";
  lesson Lesson(da,"math");
  //std::vector<std::string> getlesson = Lesson.getLesson(da);
  Lesson.intput(da,"english");
 // Lesson.getLesson(da);
  Lesson.intput(Lesson.data[1],"Chinese");
  Lesson.intput(Lesson.data[0],"Point");
  Lesson.intput(Lesson.data[2],"Moels");
  Lesson.intput(Lesson.data[3],{"Game","Genshin","Pe"});
  std::cout<<Lesson;
  return 0;
}
