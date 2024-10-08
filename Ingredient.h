#ifndef INGREDIENT_H 
#define INGREDIENT_H

#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class Ingredient {
private:
    string name;
    double dosage;
    double pricePerUnit;
    static double totalSum;  

public:
    
    Ingredient();
    
    Ingredient(const string& n, double d, double p);

    
    void setName(string n);
    void setDosage(double d);
    void setPricePerUnit(double p);

   
    string getName() const;
    double getDosage() const;
    double getPricePerUnit() const;

    
    double calculateTotalPrice() const;

    
    static double getTotalSum();

   
    void displayInfo() const;

   
    void saveToFile(ofstream& out) const;

   
    friend std::ostream& operator<<(std::ostream& out, const Ingredient& ingredient);
};

#endif 
