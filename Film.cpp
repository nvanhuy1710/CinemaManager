#include "Film.h"

Film::Film() {
}

Film::Film(string& id, string& name, string& director, string& actor, string& country, string& type, int length) {
	this->id = id;
	this->name = name;
	this->director = director;
	this->actor = actor;
	this->country = country;
	this->type = type;
	this->length = length;
}
string Film::getId() const{
	return this->id;
}

string Film::getName() const{
	return this->name;
}

string Film::getDirector() const{
	return this->director;
}

string Film::getCountry() const {
	return this->country;
}

string Film::getType() const {
	return this->type;
}

string Film::getActor() const {
	return this->actor;
}

int Film::getLength() const {
	return this->length;
}

void Film::setId(const string& id) {
	this->id = id;
}

void Film::setName(const string& name) {
	this->name = name;
}

void Film::setDirector(const string& director) {
	this->director = director;
}

void Film::setActor(const string& actor) {
	this->actor = actor;
}

void Film::setCountry(const string& country) {
	this->country = country;
}

void Film::setType(const string& kind) {
	this->type = type;
}

void Film::setLength(int length) {
	this->length = length;
}

