#pragma once
# include <vector>
# include <memory>
# include "student.hpp"

class DataBase{

    std::vector<Student> dataBase;

public:

    DataBase(Student);
    void addNewStudent(std::string, std::string, std::string, size_t, long int, std::string);
    void shawAllBase();
   // void findViaSurname();
    //void findViaPessel();
   // void sortPessel();
    //void sortSurname();
   // void delateViaId();

};