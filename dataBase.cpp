# include <algorithm>
# include "student.hpp"
# include "dataBase.hpp"


DataBase::DataBase(){
       //rezerwacja dla pierwszych 10 studentow
       dataBase.reserve(10);  
}

void DataBase::addNewStudent(std::string name, std::string family_name, std::string address, size_t id, long int pessel, std::string sex){

    Student student(name, family_name, address, id, pessel, sex); 

    dataBase.push_back(student);

}

void DataBase::shawAllBase(){

    for( auto element : dataBase){

        std::cout << element.getName() << ", " << element.getFamily_name() << ", " << element.getId() 
        << ", " << element.getAdress() << ", " << element.getPessel() << ", "<< element.getSex() << '\n';
    }
}

void DataBase::findViaSurname(std::string surname){

    for ( auto i = dataBase.begin(); i < dataBase.end(); i++ ){
        auto element = *i;
        if(element.getFamily_name() == surname){
            std::cout << element.getName() << ", " << element.getFamily_name() << ", " << element.getId() 
             << ", " << element.getAdress() << ", " << element.getPessel() << ", "<< element.getSex() << '\n';
            break;
        }else if(i == dataBase.end()-1){
            std::cout << "Brak w bazie danych nazwiska" << '\n';
        }

    }
}

void DataBase::findViaPessel(int pessel){

    for ( auto i = dataBase.begin(); i < dataBase.end(); i++ ){
        auto element = *i;
        if(element.getPessel() == pessel){
            std::cout << element.getName() << ", " << element.getFamily_name() << ", " << element.getId() 
             << ", " << element.getAdress() << ", " << element.getPessel() << ", "<< element.getSex() << '\n';
            break;
        }else if(i == dataBase.end()-1){
            std::cout << "Brak w bazie danych pesselu" << '\n';
        }

    }
}

void DataBase::sortPessel(){

    std::sort(dataBase.begin(), dataBase.end(), [](Student st1, Student st2 ){ 
       return (st1.getPessel() < st2.getPessel());
    });

}

void DataBase::sortSurname(){

    std::sort(dataBase.begin(), dataBase.end(), [](Student st1, Student st2 ){ 
       return (st1.getFamily_name() < st2.getFamily_name());
    });

}

void DataBase::delateById(size_t id){

   for ( auto i = dataBase.begin(); i < dataBase.end(); i++ ){
       auto element = *i;
       if(element.getId() == id){
           dataBase.erase(i);
       }
   }
}