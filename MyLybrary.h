#include <iostream>
using namespace std;

struct Fly1 {					
	virtual void Flyy() = 0;
};

struct Animal1 {				
	virtual void Sound() = 0;
	virtual void Eat() = 0;
	virtual void Continent()const = 0;
};

struct Swim {				
	virtual void Swimm() = 0;
};

class Animall : public Animal1
{
protected:
	string name;
	int weight;
	string continent;
public:
	Animall() {
	};
	Animall(string n, int w, string con) : name(n), weight(w), continent(con) { }
	void Print() {
		cout << "Name: " << name << "\tWeight: " << weight << "Continent: " << endl;
	}
};

class Pinguin : public Animall, public Swim {
public:
	Pinguin() {
	};
	Pinguin(string n, int w, string cont) : Animall(n, w, cont) {
		continent = cont;
	}
	virtual void Continent()const {
		cout << "live in " << continent << endl;
	}
	virtual void Swim() {
		cout << "swim" << endl;
	}
	virtual void Sound() {
		cout << "sound" << endl;
	}
	virtual void Eat() {
		cout << "eat fish" << endl;
	}
};

class Parrot : public Animall, public Fly1 {
public:
	Parrot() {
	};
	Parrot(string n, int w, string cont) : Animall(n, w, cont) {
		continent = cont;
	}
	virtual void Continent()const {
		cout << "live" << endl;
	}
	virtual void Fly() {
		cout << "can fly" << endl;
	}
	virtual void Sound() {
		cout << "sound" << endl;
	}
	virtual void Eat() {
		cout << "eat" << endl;
	}
};