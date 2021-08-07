
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'ProbablitySum' function below.
 * 
 * The function is expected to return an DOUBLE.
 * The function accepts following parameters:
 * 1. INTEGER stepnumber
 * 2. INTEGER probablity
 */

double ProbablitySum(int stepnumber, int probablity) {
	// Write your code here
	
	
	
}


int main() {

	string stepnumber_temp;
	getline(cin, stepnumber_temp);

	int stepnumber = stoi(ltrim(rtrim(stepnumber_temp)));

	string probablity_temp;
	getline(cin, probablity_temp);

	int probablity = stoi(ltrim(rtrim(probablity_temp)));

	double result = ProbablitySum(stepnumber, probablity);

	cout << result;

	return 0;
}

string ltrim(const string &str) {
	string s(str);

	s.erase(
		s.begin(),
		find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
	);

	return s;
}

string rtrim(const string &str) {
	string s(str);

	s.erase(
		find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
		s.end()
	);

	return s;
}