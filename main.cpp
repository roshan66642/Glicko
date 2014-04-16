#include <iostream>
#include <math.h>

using namespace std;

const double gconvert=173.1718;
const long double pi=3.14159265358979;
class Player
{
public:
    long double mu, phi, rho, v;
    double R, RD;
    string name;
    vector<Player*> won, won2;
    vector<Player*> lost, lost2;
    vector<Player*> draw, draw2;

    void Win(Player* A)
    {won.push_back(A);}

    void Lose(Player* A)
    {lost.push_back(A);}

    void Tie(Player* A)
    {draw.push_back(A);}

    void V()
    {
        won2=won, lost2=lost, draw2=draw; //Making back-up copy for vector so it can be popped.
        while (!won.empty())
        {
            Player* current=won.back();
            v+=(G(current)*G(current)*E(this,current)*(1-E(this,current));
            won.pop_back();
        }
        while (!lost.empty())
        {
            Player* current=lost.back();
            v+=(G(current)*G(current)*E(this,current)*(1-E(this,current));
            lost.pop_back();
        }
        while (!draw.empty())
        {
            Player* current=draw.back();
            v+=(G(current)*G(current)*E(this,current)*(1-E(this,current));
            draw.pop_back();
        }
        v=1/v;
    }

    void ToG2()
    {
        mu=(R-1500)/gconvert;
        phi=RD/gconvert;
    }

    void ToG()
    {
        R=mu*gconvert+1500;
        RD=phi*gconvert;
    }

    Player(string name_in)
    {
        name=input;
        R=1500;
        RD=200;
        ToG2();
        rho=0.06;
        v=0;
    }

    Player(string name_in,double R_in,double RD_in)
    {
        name=name_in;
        R=R_in;
        RD=RD_in;
        ToG2();
        v=0;
    }
};

long double G(Player* A)
{
    return 1/sqrt(1+3*(A->phi)*(A->phi)/pi/pi);
}

long double E(Player* A, Player* B)
{
    return 1/(1+exp(-1*G(B->phi))*(A->mu-B->mu));
}

void variance()

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
