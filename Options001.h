#ifndef Options001_h
#define Options001_h

//inpuitting and displaying option data

int GetInputData(int& N, double& K);

//pricing eurpean option

double PriceByCRR(double S0, double U, double D, double R, int N, double K);


double CallPayoff(double z, double K);

#endif