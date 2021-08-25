#include "student.hpp"
#include "dataBase.cpp"

int main(){

DataBase data_base;

data_base.addNewStudent("Pawel", "Lubanski", "Tasmowa", 0, 91070207174, "m");
data_base.shawAllBase();

return 0;
}