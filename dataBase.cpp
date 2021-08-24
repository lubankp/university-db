# include <vector>
# include <memory>
# include "student.hpp"
# include "dataBase.hpp"


void DataBase::addNewStudent(std::string name, std::string family_name, std::string address, size_t id, long int pessel, std::string sex){

    Student student(name, family_name, address, id, pessel, sex); 

    dataBase.push_back(student);

}

void DataBase::shawAllBase(){

    for( auto element : dataBase){

        std::cout << element.getName() << ", " << element.getFamily_name() << ", " << element.getId() 
        << ", " << element.getAdress() << ", " << element.getPessel() << element.getSex() << '\n';
    }
}
