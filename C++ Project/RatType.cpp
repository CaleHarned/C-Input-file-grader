#include <fstream>
#include <iostream>

using namespace std;
#include "RatType.h"

RatType::RatType(){
	Nume=1; Deno=1; //inits to 1/1
	}
	
RatType::RatType(int n, int d){
	Nume=n; Deno=d; //inits to n/d
	}
	
void RatType::Initialize(int newNume, int newDeno)
{
	Nume=newNume; Deno=newDeno;
}

int  RatType::NumeIs() const
{
	return Nume;
}

int  RatType::DenoIs() const
{
	return Deno;
}

RatType RatType::AddedTo(RatType R) const
{
	RatType T;
	T.Nume= Nume*R.Deno + Deno*R.Nume;
	T.Deno= Deno*R.Deno;
	return T;
}

// similarly do the implementations of SubtractedTo, MultipliedWith, DividedFrom functions below!

RatType RatType::SubtractedTo(RatType R) const
{
	RatType T;
	T.Nume= Nume*R.Deno - Deno*R.Nume;
	T.Deno= Deno*R.Deno;
	return T;
}

RatType RatType::MultipliedWith(RatType R) const
{
	RatType T;
	T.Nume= Nume*R.Nume;
	T.Deno= Deno*R.Deno;
	return T;
}

RatType RatType::DividedFrom(RatType R) const
{
	RatType T;
	T.Nume= Nume*R.Deno;
	T.Deno= Deno*R.Nume;
	return T;
}

void RatType::Print()
{
	cout<<Nume<<"/"<<Deno<<" ";
}

void RatType::Print(ofstream& outfile){
	outfile<<Nume<<"/"<<Deno<<" ";
}


// similarly do the implementation of Print to file function
