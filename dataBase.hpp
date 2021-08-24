# include <vector>
# include <memory>
# include "student.hpp"

class DataBase{

    std::vector<Student> dataBase;

public:

    void addNewStudent();
    void shawAllBase();
    void findViaSurname();
    void findViaPessel();
    void sortPessel();
    void sortSurname();
    void delateViaId();

};