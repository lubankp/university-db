
class Student {

private:
    std::string name_ = "";
    std::string family_name_ = "";
    std::string address_ = "";
    size_t id_ = 0;
    int pessel_ = 0;
    std::string sex_ = "";

public:

    std::string getName(){ return name_; }
    std::string getFamily_name(){ return family_name_; }
    std::string getAdress(){ return address_; }
    size_t getId(){ return id_; }
    int getPesel(){ return pessel_; }
    std::string getSex() {return sex_; }

    Student(std::string name, std::string family_name, std::string address, size_t id, int pessel, std::string sex)
        : name_(name), family_name_(family_name), address_(address), id_(id), pessel_(pessel), sex_(sex)
    {}
}
