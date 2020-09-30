/*	This file generate instance for the BiQuadratic Assigment Problem
	following the algorithm 5.1 proposed in Burkard et al (1993) - On 
	the	Biquadratic Assignment Problem
	by: Allyson Silva
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>
#include "bibrand2.h"

using namespace std;

bool compare (int i, int j) { return (i<j); }

int main(int argc, char *argv[]){
	Bibrand bib(2);
	int n = atoi(argv[1]); //Instance size

	ofstream fcout;
	cout << "Opening file..." << endl;

	//Open file
	stringstream ss;
	ss << "symm_bqap_" << n << ".dat";
	string filename = ss.str();
	fcout.open( filename.c_str() , ios::out );

	//If error, exit program
	if (!fcout.is_open())
		return (0);

	fcout << n << " " << 100 << " " << -1 << " " << 1000 << endl;

	int**** value = new int***[n];
	for(int i = 0; i < n; i++){
		value[i] = new int**[n];
	for(int j = 0; j < n; j++){
		value[i][j] = new int*[n];
	for(int k = 0; k < n; k++){
		value[i][j][k] = new int[n];
	for(int l = 0; l < n; l++){
		value[i][j][k][l] = 0;
	}}}}

	for(int a = 0; a < 2; a++){
		//For symmetric instances
		for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
		for(int k = j; k < n; k++){
		for(int l = k; l < n; l++){
			if(i == j && i == k && i == l) value[i][j][k][l] = 0;
			else{
				int v = bib.get_rand_ij(1,9);
				value[i][j][k][l] = v;
				value[i][j][l][k] = v;
				value[i][k][j][l] = v;
				value[i][k][l][j] = v;
				value[i][l][j][k] = v;
				value[i][l][k][j] = v;
				value[j][i][k][l] = v;
				value[j][i][l][k] = v;
				value[j][k][i][l] = v;
				value[j][k][l][i] = v;
				value[j][l][i][k] = v;
				value[j][l][k][i] = v;
				value[k][j][i][l] = v;
				value[k][j][l][i] = v;
				value[k][i][j][l] = v;
				value[k][i][l][j] = v;
				value[k][l][j][i] = v;
				value[k][l][i][j] = v;
				value[l][j][k][i] = v;
				value[l][j][i][k] = v;
				value[l][k][j][i] = v;
				value[l][k][i][j] = v;
				value[l][i][j][k] = v;
				value[l][i][k][j] = v;
			}
		}}}}

		for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
		for(int k = 0; k < n; k++){
		for(int l = 0; l < n; l++){
			//fcout << bib.get_rand_ij(1,9) << " "; //For random instances
			fcout << value[i][j][k][l] << " ";
			value[i][j][k][l] = 0;
		}fcout << endl;}}}
		fcout << endl;
	}

	if(fcout.fail()) {
			cout << "Fatal error!" << endl;
			exit(1);		// Aborta programa
		}

	cout << "Closing file..." << endl;
		fcout.close();

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			for(int k = 0; k < n; k++){
				delete[] value[i][j][k];
			}
			delete[] value[i][j];
		}
		delete[] value[i];
	}
	delete[] value;

	return 0;
}
