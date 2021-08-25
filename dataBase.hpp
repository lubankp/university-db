#pragma once
# include <string>
# include <vector>
# include <memory>
# include "student.hpp"

class DataBase{

    std::vector<Student> dataBase;

public:

    DataBase();
    void addNewStudent(std::string, std::string, std::string, size_t, long int, std::string);
    void shawAllBase();
    void findViaSurname(std::string);
    void findViaPessel(int);
    void sortPessel();
    void sortSurname();
    void delateById(size_t);

};