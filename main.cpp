#include "student.hpp"
#include "dataBase.cpp"

int main(){

DataBase data_base;

//dodanie studentow
data_base.addNewStudent("Pawel", "Lubanski", "Tasmowa", 0, 9107, "m");
data_base.addNewStudent("Marek", "Kowalski", "Niepodleglosci", 1, 6636, "m");
data_base.addNewStudent("Ewa", "Lubanska", "Dworcowa", 2, 6634, "w");
data_base.addNewStudent("Julia", "Kubiak", "Wynalazek", 3, 7174, "w");
data_base.addNewStudent("Martyna", "Kuc", "Postepu", 4, 0717, "w");

//wyswietlenie calej bazy
data_base.shawAllBase();
//wyszukanie po nazwisku
data_base.findViaSurname("Lubans");
//wyszukanie po pesselu
data_base.findViaPessel(9107);


return 0;
}