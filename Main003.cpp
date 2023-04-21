#include <iostream>
#include <cmath>
using namespace std;





double RiskNeutProb(double U, double D, double R)
{
    return (R-D)/(U-D);
}

double S(double S0, double U, double D, int n, int i)
{
return S0*pow(1+U,i)*pow(1+D,n-i);
}


int GetInputData(double& S0, double& U,double& D, double& R) 
{
    cout << "enter s0:  "; cin >> S0;
    cout << "enter U:  "; cin >> U;
    cout << "enter R:  "; cin >> R;
    cout << "enter D:  "; cin >> D;
    cout << endl;

    if (S0 <= 0 || U<= -1.0|| D<= -1.0|| U<=D|| R<= -1.0)
    {

        cout << "Paramterizatino illegal" << endl;
        return 1; // indicates that the program failed
    }


// Check for Arbitrage 

    if (R>=U || R<=D)

        {
            cout<< "There is Arbitrage"<< endl;
            return 1;
        }

// compute risk netural probabilities 
    

    cout << "q = " << (R-D)/(R-U) << endl;
    return 0;

}


int main()
{

    double S0,D,R,U;
    if (GetInputData(S0,D,R,U)==1) return 1;
    cout << "q = " << RiskNeutProb(U,D,R) << endl;
    
    int n =3;
    int i =2;
    cout << S(S0,U,D,n,i) << endl;
    return 0;
}