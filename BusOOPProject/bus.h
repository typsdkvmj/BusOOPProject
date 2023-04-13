#pragma once
#include <iostream>

using namespace std;

class Bus {
public:
	string name;
	string num;
	int price;
	int seat;

	Bus() {
		name = "no name";
		num = "XXXXPM7";
		price = 0;
		seat = 0;
	}


	Bus(string na, string nu, int pr, int st) {
		name = na;
		num = nu;
		price = pr;
		seat = st;
	}

	string convert() {
		string msg = "Bus:";
		msg += " " + name;
		msg += " , " + num;
		msg += " , " + to_string(price);
		msg += " , " + to_string(seat);
		return msg;

	}


};