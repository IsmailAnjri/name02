#include <iostream>
#include <random>
#include <chrono>

using namespace std;

int main()
{
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    default_random_engine rng(seed);
    uniform_int_distribution<int> dist(1, 6);

    int numt;

    do
    {
        cout << "Enter the number of throws: ";
        cin >> numt;

        if(numt != 0)
        {
            cout << "Results of " << numt << " dice throws:" << endl;
            for (int i = 0; i < numt; ++i)
            {
                int dicer = dist(rng);
                cout << "Throw " << (i + 1) << ": " << dicer << endl;
            }
        }
        else
        {
            cout<<"Thank you for playing!"<<endl;
        }

    }
    while(numt != 0);


    return 0;
}
