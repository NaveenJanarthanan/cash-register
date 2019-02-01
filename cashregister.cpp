#include <iostream>
#include <string>
#include <math.h>
using namespace std;



int main() {
	string line;
	while (getline(cin, line)) {

		int quarter = 25;
		int penny = 1;
		int nickel = 5;
		int dime = 10;
		int halfdollar = 50;
		int one = 100;
		int two = 200;
		int five = 500;
		int ten = 1000;
		int twenty = 2000;
		int fifty = 5000;
		int hundred = 10000;

		double change1 = 0.00;

		unsigned int pos = line.find_first_of(';');
		string snum1 = line.substr(0, pos), snum2 = line.substr(pos + 1);

		double num1 = stod(snum1);
		double num2 = stod(snum2);

		change1 = num2 - num1;

		
		if (num1 < num2) {
			int change2 = 0.5 + change1 * 100;


			string dimes, twos, twentys, tens, quarters, pennys, hundreds, ones, nickels, halfs, fives, fiftys, result;
			unsigned int numhundredDollars = change2 / hundred;
			change2 -= (numhundredDollars* hundred);
			if (numhundredDollars != 0) {
				for (int i = 0; i < numhundredDollars; i++) {
					
					hundreds += "ONE HUNDRED,";
				}
			}

			unsigned int numfiftyDollars = change2 / fifty;
			change2 -= (numfiftyDollars* fifty);
			if (numfiftyDollars != 0) {
				for (int i = 0; i < numfiftyDollars; i++) {
					
					fiftys += "FIFTY,";
				}
			}

			unsigned int numtwentyDollars = change2 / twenty;
			change2 -= (numtwentyDollars* twenty);
			if (numtwentyDollars != 0) {
				for (int i = 0; i < numtwentyDollars; i++) {
					
					twentys += "TWENTY,";
				}
			}

			unsigned int numtenDollars = change2 / ten;
			change2 -= (numtenDollars* ten);
			if (numtenDollars != 0) {
				for (int i = 0; i < numtenDollars; i++) {
					
					tens += "TEN,";
				}
			}

			unsigned int numfiveDollars = change2 / five;
			change2 -= (numfiveDollars* five);
			if (numfiveDollars != 0) {
				for (int i = 0; i < numfiveDollars; i++) {
					
					fives += "FIVE,";
				}
			}
			unsigned int numtwoDollars = change2 / two;
			change2 -= (numtwoDollars* two);
			if (numtwoDollars != 0) {
				for (int i = 0; i < numtwoDollars; i++) {
					
					twos += "TWO,";
				}
			}

			unsigned int numDollars = change2 / one;
			change2 -= (numDollars* one);
			if (numDollars != 0) {
				for (int i = 0; i < numDollars; i++) {
					
					ones += "ONE,";
				}
			}
			unsigned int numHalfDollars = change2 / halfdollar;
			change2 -= (numHalfDollars* halfdollar);
			if (numHalfDollars != 0) {
				for (int i = 0; i < numHalfDollars; i++) {
					
					halfs += "HALF DOLLAR,";
				}
			}
			unsigned int numQuarters = change2 / quarter;  
			change2 -= (numQuarters * quarter);  
			if (numQuarters != 0) {
				for (int i = 0; i < numQuarters; i++) {
					
					quarters += "QUARTER,";
				}
			}

			unsigned int numDimes = change2 / dime;
			change2 -= (numDimes * dime);
			if (numDimes != 0) {
				for (int i = 0; i < numDimes; i++) {
					
					dimes += "DIME,";
				}
			}

			unsigned int numNickels = change2 / nickel;
			change2 -= (numNickels * nickel);
			if (numNickels != 0) {
				for (int i = 0; i < numNickels; i++) {
				
					nickels += "NICKEL,";
				}
				
			}
			unsigned int numPennies = change2;
			if (numPennies != 0) {
				for (int i = 0; i < numPennies; i++) {
				
					pennys += "PENNY,";
				}
				
			}

			result = dimes + fiftys + fives + halfs + nickels + ones + hundreds + pennys + quarters + tens+ twentys + twos;
			result.pop_back();
			cout << result; 

		}else if (num1 > num2) {
			cout << "ERROR"; 
			}
		else {
			cout << "ZERO";
			}
		
	}
	return 0;
}
