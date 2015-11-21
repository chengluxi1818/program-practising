/*
 * ParkingLot.h
 *
 *  Created on: Aug 5, 2015
 *      Author: Luxi
 */

#include <iostream>
#include <vector>

using namespace std;

#ifndef PARKINGLOT_H_
#define PARKINGLOT_H_


enum Size {
	SMALL, MIDDLE, LARGE
};

class Parking {
public:
	Parking();
	virtual ~Parking();
};


class Space {
private:
	Size s_size;
	int s_number;
	bool s_avail;
public:
	Space() {
		s_avail = true;
	}

	Space(int number, Size size) {
		s_size = size;
		s_number = number;
		s_avail = true;
	}

	Size getSize() {
		return s_size;
	}

	int getNumber() {
		return s_number;
	}

	bool getAvail() {
		return s_avail;
	}

	void setAvail() {
		s_avail = true;
	}

	void clearAvail() {
		s_avail = false;
	}
};

class Car {
private:
	Size c_size;
	int c_tag;
public:
	Car() {}
	Car(int tag, Size size) {
		c_tag = tag;
		c_size = size;
	}

	int getTag() {
		return c_tag;
	}

	Size getSize() {
		return c_size;
	}
};

class Ticket {
private:
	int t_number;
	Space t_Space;
	Car t_Car;
public:
	Ticket() {}
	Ticket(Car car, Space space) {
		t_Car = car;
		t_Space = space;
	}

	Car getCar() {
		return t_Car;
	}

	Space getSpace() {
		return t_Space;
	}
};

class ParkingLot {
private:
	vector<Space> All;
	int numOfAll;
	int numOfAvail;
public:
	ParkingLot(int num) {
		for(int i = 0; i < num; i++) {
			Space temp(i+1, SMALL);
		}

		numOfAll = num;
	}

	bool request(Car car) {
		for(int i = 0; i < numOfAll; i++) {
			if(All[i].getAvail() && All[i].getSize() >= car.getSize()) {
				All[i].setAvail();
			}
		}

		getSpace(car);
		getTicket
	}
};

#endif /* PARKINGLOT_H_ */
