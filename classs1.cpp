#include <iostream>
using namespace std;

class bangundatar{

    //akses modifier
    private:
        float panjang, lebar;
    public:
        float Luas;

        void input() {// methode input persegi panjang
            cout << "Masukan Panjangnya = ";
            cin >>  panjang;
            cout << "Masukan Lebarnya = ";
            cin >> lebar;
        }

        float hitungluas (){
            return panjang * lebar;
        }

}