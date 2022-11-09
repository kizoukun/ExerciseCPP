#include <iostream>
#include <string>
using namespace std;

int main()
{
    string listMenu[] = {"Keterangan Acara", "Daftar Harga Tiket", "Note"};
    string menuItem[] = {"Dasar wibu setiap event selalu jadi wibu", "Rp. 50,000\nRp. 150,000", "Kamu jelek banget wkwkwk\nokeee"};
    int selectMenu;
    for(int i = 0; i < 3; i++) {
        cout << i << ". " << listMenu[i] << endl;
    }
    cout << "Please select a menu items" << endl;
    cin >> selectMenu;
    cout << menuItem[selectMenu] << endl;
    return 0;
}

