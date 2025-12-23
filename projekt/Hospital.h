#pragma once
#include "CityObject.h"
#include <string>
#include <iostream>

class Hospital : public CityObject {
    private:
        int number_of_beds;
        int occupied_beds;

    public:
        Hospital(string pName,int pBeds ,int pNumberOfPatients)
            : CityObject(pName)
        {
            number_of_beds = pBeds;
            occupied_beds = pNumberOfPatients;
        }

        void displayInfo() override {
            cout << "ID: " << getId() << endl;
            cout << "Nazwa: " << getName() << endl;
            cout << "Typ: Szpital" << endl;
            cout << "Liczba lozek: " << number_of_beds << endl;
            cout << "Zajete lozka: " << occupied_beds << endl;
            cout << "Liczba pracownikow: " << number_of_employees << endl;
        }

        int maintenanceCost() override {
            int food_cost = occupied_beds * 50;
            return 1;
        }

        void monthlyUpdate() override {
            cout << "Miesieczna aktualizacja szpitala: "
                << getName() << endl;
        }

        void admitPatient() {
            if (occupied_beds < number_of_beds) {
                occupied_beds++;
            }
            else {
                cout << "Brak wolnych lozek w szpitalu!" << endl;
            }
        }
};

