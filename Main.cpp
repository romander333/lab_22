#include <iostream>
#include "Ingredient.h"
#include <fstream>
using namespace std;

int main() {
    Ingredient buns, sauce, cutlet, tomatoes, cucumber, onion, cheese;

   
    buns.setName("buns");
    buns.setDosage(2);
    buns.setPricePerUnit(15);

    sauce.setName("sauce");
    sauce.setDosage(0.3);
    sauce.setPricePerUnit(65);

    cutlet.setName("cutlet");
    cutlet.setDosage(2);
    cutlet.setPricePerUnit(30);

    tomatoes.setName("tomatoes");
    tomatoes.setDosage(0.4);
    tomatoes.setPricePerUnit(15);

    cucumber.setName("cucumber");
    cucumber.setDosage(0.2);
    cucumber.setPricePerUnit(15);

    onion.setName("onion");
    onion.setDosage(0.25);
    onion.setPricePerUnit(10);

    cheese.setName("cheese");
    cheese.setDosage(0.25);
    cheese.setPricePerUnit(100);

   
    //buns.displayInfo();
    //sauce.displayInfo();
   // cutlet.displayInfo();
    //tomatoes.displayInfo();
   // cucumber.displayInfo();
   // onion.displayInfo();
   // cheese.displayInfo();
   cout<< buns;
cout<< sauce;
cout << cutlet;
cout << tomatoes;
cout << cucumber;
cout << onion;
cout << cheese;

 
    double total = buns.calculateTotalPrice() + sauce.calculateTotalPrice() +
        cutlet.calculateTotalPrice() + tomatoes.calculateTotalPrice() +
        cucumber.calculateTotalPrice() + onion.calculateTotalPrice() +
        cheese.calculateTotalPrice();

    cout << "\nTotal sum for all ingredients: " << total << " UAH" << endl;

   
    ofstream recipeFile("recipe.txt");
    if (recipeFile.is_open()) {
        buns.saveToFile(recipeFile);
        sauce.saveToFile(recipeFile);
        cutlet.saveToFile(recipeFile);
        tomatoes.saveToFile(recipeFile);
        cucumber.saveToFile(recipeFile);
        onion.saveToFile(recipeFile);
        cheese.saveToFile(recipeFile);

        
        recipeFile << "Total sum for all ingredients: " << total << " UAH" << endl;
        recipeFile.close();
        cout << "Recipe saved to recipe.txt" << endl;
    }
    else {
        cout << "Unable to open file!" << endl;
    }
   
    return 0;
}


