// specification file --- RatType.h
#include <fstream>
#include <iostream>

class RatType 
{
public:

RatType(); //default constructor
RatType(int,int);//constructor that creates & initializes a rational

void Initialize(int newNume, int newDeno);
     // inits self to newNume / newDeno

int  NumeIs() const;
 // returns numerator

int  DenoIs() const;
 //returns denominator

RatType AddedTo(RatType R) const;
 //returns a rational number which is sum of self and R

RatType SubtractedTo(RatType R) const;
 //returns a rational number which is difference of self and R
 
RatType MultipliedWith(RatType R) const;
 //returns a rational number which is product of self and R
 
RatType DividedFrom(RatType R) const;
 //returns a rational number which is self divided from R

void Print();
 //outputs self onto screen as a rational
 
void Print(ofstream& outfile);
 //outputs self onto output file as a rational
 
private:

int  Nume;
int  Deno;

};
