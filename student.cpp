
class Student {

private:
    std::string name_;
    std::string family_name_;
    std::string address_;
    size_t id_;
    int pessel_;
    std::string sex_;

public:

    std::string getName(){ return name_; }
    std::string getFamily_name(){ return family_name_; }
    std::string getAdress(){ return address_; }
    size_t getId(){ return id_; }
    int getPesel(){ return pessel_; }
    std::string getSex() {return sex_; }

}