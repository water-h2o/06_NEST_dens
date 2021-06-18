#include <iostream>

#include <float.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	
	double T_K = 175.8;
	
	double rp0 = 8.2598864714323525E-02 * T_K;
	
	double rp1 = pow((T_K-4.0820251276172212E+02)/2.7863170223154846E+01,2.);
	
	double rp2 = pow((T_K-6.3688597345042672E+02)/1.1225818853661815E+02,2.);
	
	double rp3 = pow((T_K+4.8840568924597342E+01)/7.3804147172071107E+03,2.);
	
	double fac0 = 2.9970938084691329E+02*exp(-rp0);
	double fac1 = 1.8801286589442915E+06*exp(-rp1);
	double fac2 = 5.4964506351743057E+03*exp(-rp2);
	double fac3 = 8.3450538370682614E+02*exp(-rp3);
	double fac4 = 8.3086310405942265E+02;
	
	double result =  fac0 - fac1 - fac2 + fac3 - fac4;
	
	cout << std::fixed;
	cout << std::setprecision(9);
	cout << "result = " << result << endl;
	
	return 0;
}
