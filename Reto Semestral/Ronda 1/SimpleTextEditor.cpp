#include <iostream>

using namespace std;

int main() {
    int n, op, k, lleno = 0, ind = -1;
    string app; // string para la operacion de append

    cin >> n;
    string s[n]; // string que se va llenando o borrando

    // Ciclo while para ir pidiendo todas las operaciones 
    while( n > 0 ) {
        cin >> op; // op = operacion a realizar

        switch( op ) {
            case 1: // agrega cha al string s
                cin >> app;
                ind++;

                if( lleno == 0 ) {
                    lleno = 1;
                    s[ind] = app;
                }
                else {
                    s[ind] = s[ind-1] + app;
                }
                break;

            case 2: // borra las ultimas k posiciones del string s
                ind++;
                s[ind] = s[ind-1];
                cin >> k;
                s[ind].erase( s[ind].end()-k, s[ind].end() );
                break;

            case 3: 
                cin >> k;
                cout << s[ind][k-1] << endl;
                break;

            case 4:
                ind--;
                if( ind == -1 ) {
                    lleno = 0;
                }
                break;
        }
        n--;        
    }
    return 0;
}
