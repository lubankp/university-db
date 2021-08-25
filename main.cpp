#include "student.hpp"
#include "dataBase.cpp"

int main(){

DataBase data_base;

//dodanie studentow
data_base.addNewStudent("Pawel", "Lubanski", "Tasmowa", 0, "91070207150", "m");
data_base.addNewStudent("Marek", "Kowalski", "Niepodleglosci", 1, "91070207174", "m");
data_base.addNewStudent("Ewa", "Lubanska", "Dworcowa", 2, "91070207504", "w");
data_base.addNewStudent("Julia", "Kubiak", "Wynalazek", 3, "91070207174", "w");
data_base.addNewStudent("Martyna", "Kuc", "Postepu", 4, "91070233174", "w");

//wyswietlenie calej bazy
data_base.shawAllBase();
std::cout << '\n';
//wyszukanie po nazwisku
data_base.findViaSurname("Lubanski");
std::cout << '\n';
//wyszukanie po pesselu
data_base.findViaPessel("91070207174");
std::cout << '\n';
//sortowanie po peselu
data_base.sortPessel();
std::cout << '\n';
//wyswietlenie calej bazy
data_base.shawAllBase();
std::cout << '\n';
//sortowanie po nazwisku
data_base.sortSurname();
std::cout << '\n';
//wyswietlenie calej bazy
data_base.shawAllBase();
std::cout << '\n';
//usuniecie po id
data_base.delateById(3);
//wyswietlenie calej bazy
data_base.shawAllBase();
std::cout << '\n';
//walidacja pesselu
std::cout << data_base.validatePessel(data_base.getDataBase()[0].getPessel());
//std::cout << data_base.getDataBase()[0].getPessel() <<'\n';

return 0;
}