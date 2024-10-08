#include "Ingredient.h"


double Ingredient::totalSum = 0.0;


Ingredient::Ingredient() : name(""), dosage(0.0), pricePerUnit(0.0) {}


Ingredient::Ingredient(const string& n, double d, double p) : name(n), dosage(d), pricePerUnit(p) {
    totalSum += calculateTotalPrice();
}


void Ingredient::setName(string n) {
    name = n;
}

void Ingredient::setDosage(double d) {
    dosage = d;
}

void Ingredient::setPricePerUnit(double p) {
    pricePerUnit = p;
}


string Ingredient::getName() const {
    return name;
}

double Ingredient::getDosage() const {
    return dosage;
}

double Ingredient::getPricePerUnit() const {
    return pricePerUnit;
}


double Ingredient::calculateTotalPrice() const {
    return dosage * pricePerUnit;
}


double Ingredient::getTotalSum() {
    return totalSum;
}


void Ingredient::displayInfo() const {
    cout << *this; 
}


void Ingredient::saveToFile(ofstream& out) const {
    out << *this; // ¬икористанн€ перевантаженого оператора <<
}


std::ostream& operator<<(std::ostream& out, const Ingredient& ingredient) {
    out << "Name: " << ingredient.getName() << endl;
    out << "Dosage: " << ingredient.getDosage() << " Units" << endl;
    out << "Unit price: " << fixed << setprecision(2) << ingredient.getPricePerUnit() << " UAH" << endl;
    out << "Total price: " << fixed << setprecision(2) << ingredient.calculateTotalPrice() << " UAH" << endl;
    out << "-----------------------------" << endl;
    return out;
}










