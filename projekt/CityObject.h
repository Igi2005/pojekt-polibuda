#pragma once
#include <iostream>
#include <string>
using namespace std;


class CityObject {
	private:
		int id;
		string name;
	public:
		
		int number_of_employees;
		static int global_id;

		CityObject(string pName) {
			id = global_id + 1;
			name = pName;
		}

		int getId() const {
			return id;
		}

		string getName() const {
			return name;
		}
		virtual int maintenanceCost() = 0;
		virtual void displayInfo() = 0;
		virtual void monthlyUpdate() = 0;
};

