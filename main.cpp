#include <iostream>
#include "student.hpp"
#include "dataBase.hpp"

int main(){

Student student1("Pawel", "Lubanski", "Tasmowa", 0, 91070207174, "m");

DataBase data_base(student1);

data_base.addNewStudent("Pawel", "Lubanski", "Tasmowa", 0, 91070207174, "m");
//data_base.shawAllBase();

/*Student student1("Pawel", "Lubanski", "Tasmowa", 0, 91070207174, "m");

std::cout << student1.getName() << '\n';
std::cout << student1.getFamily_name() << '\n';
*/

return 0;
}