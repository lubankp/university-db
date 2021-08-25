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
std::cout << "//wyswietlenie calej bazy:" << '\n';
data_base.shawAllBase();
std::cout << '\n';

//wyszukanie po nazwisku
std::cout << "//wyszukanie po nazwisku" << '\n';
data_base.findViaSurname("Lubanski");
std::cout << '\n';

//wyszukanie po pesselu
std::cout << "//wyszukanie po pesselu" << '\n';
data_base.findViaPessel("91070207174");
std::cout << '\n';

//sortowanie po peselu
std::cout << "//sortowanie po peselu" << '\n';
data_base.sortPessel();
//wyswietlenie calej bazy
data_base.shawAllBase();
std::cout << '\n';

//sortowanie po nazwisku
std::cout << "//sortowanie po nazwisku" << '\n';
data_base.sortSurname();
//wyswietlenie calej bazy
data_base.shawAllBase();
std::cout << '\n';

//usuniecie po id
std::cout << "//usuniecie po id" << '\n';
data_base.delateById(3);
//wyswietlenie calej bazy
data_base.shawAllBase();
std::cout << '\n';

//walidacja pesselu
std::cout << "//walidacja pesselu" << '\n';
std::cout << data_base.validatePessel(data_base.getDataBase()[0].getPessel());
std::cout << '\n' << '\n';

//wypisz baze do pliku
data_base.exportDataBase("plik.csv");

//wypisz baze z pliku
std::cout << "//wypisz baze z pliku" << '\n';
data_base.importDataBase("plik.csv");

return 0;
}