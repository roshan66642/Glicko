#include <iostream>
#include <math.h>

using namespace std;

const double gconvert=173.1718;

class Player
{
public:
    long double mu, phi, rho;
    double R, RD;
    string name;

    void ToG2()

    Player(string name_in)
    {
        name=input;
        R=1500;
        RD=200;
        mu=(R-1500)/gconvert;
        phi=RD/gconvert;
        rho=0.06;
    }

    Player(string name_in,double R_in,double RD_in)
    {
        name=name_in;
        R=R_in;
        RD=RD_in;

    }
};

void Glicko2 (float phi, float rou)
{

}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
