# include <algorithm>
# include "student.hpp"
# include "dataBase.hpp"


DataBase::DataBase(){
       //rezerwacja dla pierwszych 10 studentow
       dataBase.reserve(10);  
}

void DataBase::addNewStudent(std::string name, std::string family_name, std::string address, size_t id, std::string pessel, std::string sex){

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

void DataBase::findViaPessel(std::string pessel){

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

bool DataBase::validatePessel(std::string pessel){

    if (pessel.size() != pesselSize){
        return false;
    }
    
    const std::array<int, 10> weights = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3 };
    int checkSum = 0;

    
    for(auto i = 0; i < weights.size(); i++){
        
        auto number = (pessel[i]-'0') * weights[i];
        checkSum += number;
        
    }
    checkSum = checkSum % 10;
    
    if (checkSum != 0){
        checkSum = 10 - checkSum;
    }
    return pessel.back() - '0' == checkSum; 
}