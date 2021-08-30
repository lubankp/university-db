#pragma once
# include <string>
# include <vector>
# include <memory>
# include "student.hpp"

auto pesselSize = 11u;

class DataBase{

    std::vector<Student> dataBase;

public:

    DataBase();

    std::vector<Student> getDataBase(){ return dataBase;}

    void addNewStudent(std::string, std::string, std::string, size_t, std::string, std::string);
    void shawAllBase();
    void findViaSurname(std::string);
    void findViaPessel(std::string);
    void sortPessel();
    void sortSurname();
    void delateById(size_t);
    bool validatePessel(std::string);
    void exportDataBase(std::string);
    void importDataBase(std::string);

};