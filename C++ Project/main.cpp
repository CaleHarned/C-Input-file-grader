#include <fstream>
#include <iostream>

using namespace std;

#include "RatType.h"

///////////////////////////////////////////////////////////////
///  Name:Cale Harned                        Course: CS 231, Fall 2018
///  Project 3					    Date:11/30
///  Provide detailed description of your design as an extended comment section below
///  Specify level by level refinement of your algorithm
///////////////////////////////////////////////////////////////
int main()
{   
	ofstream outfile; // for file output
    ifstream infile; // for file input
    // open infile & outfile
    infile.open("P3inp.txt");
    outfile.open("P3out.txt");
 	int x;
 	int count;
	while(x<=11){
		int R1Nume=0;
		int R2Nume=0;
		int R1Deno=0;
		int R2Deno=0;
		int answerNume=0;
		int answerDeno=0;
		char op;
		char null;
		RatType R1, R2, Ans, Tru;
    	// Read in data from file inData
    	infile>>R1Nume>>null>>R1Deno>>op>>R2Nume>>null>>R2Deno>>null>>answerNume>>null>>answerDeno;
    	R1.Initialize(R1Nume,R1Deno);//initalize rattypes
    	R2.Initialize(R2Nume,R2Deno);
    	Ans.Initialize(answerNume,answerDeno);
    	//DO the calculations
    	if(op=='+'){
    		Tru=R1.AddedTo(R2);}
    	if(op=='-'){
    		Tru=R1.SubtractedTo(R2);}
		if(op=='*'){
    		Tru=R1.MultipliedWith(R2);}
		if(op=='/'){
    		Tru=R1.DividedFrom(R2);}
		//reprint the equation
		R1.Print(outfile);outfile<<op;R2.Print(outfile);outfile<<"=";Ans.Print(outfile);
    	//check to see if correct
		if(Tru.NumeIs()==Ans.NumeIs() && Tru.DenoIs()==Ans.DenoIs()){
			outfile<<"...Correct";
			outfile<<endl;
		}
		else{
			outfile<<"...Incorrect. The correct answer is ";
			Tru.Print(outfile);
			outfile<<endl;	
		}	
    	x++;
}
//output grade
	outfile<<"You got "<<x-3<<" out of "<<x;
    
    //close the files
    infile.close();
    outfile.close();
return 0;
}

