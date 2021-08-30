#pragma once
#include <iostream>
#include <string>

class Student {
private:
    std::string name_;
    std::string family_name_;
    std::string address_;
    size_t id_;
    std::string pessel_;
    std::string sex_;

public:

    std::string getName(){ return name_; }
    std::string getFamily_name(){ return family_name_; }
    std::string getAdress(){ return address_; }
    size_t getId(){ return id_; }
    std::string getPessel(){ return pessel_; }
    std::string getSex() {return sex_; }

    Student(std::string name, std::string family_name, std::string address, size_t id, std::string pessel, std::string sex)
        : name_(name), family_name_(family_name), address_(address), id_(id), pessel_(pessel), sex_(sex)
    {}
};