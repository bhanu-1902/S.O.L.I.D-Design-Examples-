#include<bits/stdc++.h>
#include "SortString.cpp"
#include "Input.cpp"
#include "Output.cpp"
#include "RemoveSpaces.cpp"
#include "RemovePunctuations.cpp"
#include "LowerCase.cpp"
using namespace std;

int main(){
	
	string message;

	Input in;								//Get multiline user input and combine them into one single string
	in.userInput(message);

	RemovePunctuations rp;					//Remove punctuations
	rp.removePunctuations(message);

	LowerCase lc;							//Convert entire string to lowercase
	lc.convertToLowerCase(message);
	
	RemoveSpaces rs;						//Remove whitespaces
	rs.removeWhiteSpaces(message);			

	SortString ss;							//Sort the cleaned string
	ss.sortString(message);

	Output out;								//Output
	out.show(message);
}
