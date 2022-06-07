#include <iostream>
#include <iomanip>

using namespace std;


int main(){
	cout << setw(14) << "C" << setw(25) << "C++" << "\n" << endl;

	cout << setw(25) << "printf(\"Im C\") " << "\t" << "std::cout << Im CPP << endl" << "\n" <<endl;

	cout << setw(25) << "printf(\"%i\", 26) " << "\t" << "cout << 26" << "\n"  << endl;

	cout << setw(25) << "scanf(%type, %var) " << "\t" << "std::cin >> var" << "\n"   << endl;

	cout << setw(25) << "#include <stdio.h>" << "\t" << "#include <iostream>" << "\n" << endl;

	cout << setw(10) << "-" << "\t" << setw(35) <<"using namespace NAME" << "\n"  << endl;

}
