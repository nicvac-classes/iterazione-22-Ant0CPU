#include <iostream>
using namespace std;

int main() {
   int  f, n, m;

   for (f=1; f<=10; f++)
   {
        cout<<"In output la tabellina del " <<f<<endl;

        for (n=1; n<=10; n++)
        {
            m=f*n;
            cout<<m<<endl;
        }
   }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
