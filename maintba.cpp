#include "Parser.cpp"
//#include "Token.cpp"

using namespace std;

int main() {
    /*string objek;
    cin >> objek;
    cekobjek(objek);
    getch;
    cin >> keterangan;
    cekketerangan(keterangan);
    getch();*/
    cout<<"+==============================================================+\n";
    cout<<"|              TUGAS BESAR TEORI BAHASA DAN AUTOMATA           |\n";
    cout<<"|                     P R O G R A M  S P O K                   |\n";
    cout<<"+==============================================================+\n";
    string kata[4];
    cout << "Input kalimat (S P) :\n";
    cin>>kata[0]; cin>>kata[1];
    cekkalimat(kata[0], kata[1], "", "");
    cout << "\n\n";
    cout << "Input kalimat (S P O || S P K) :\n";
    cin>>kata[0]; cin>>kata[1]; cin>>kata[2];
    cekkalimat(kata[0], kata[1], kata[2], "");
    cout << "\n\n";
    cout << "Input kalimat (S P O K) :\n";
    cin>>kata[0]; cin>>kata[1]; cin>>kata[2]; cin>>kata[3];
    cekkalimat(kata[0], kata[1], kata[2], kata[3]);
    return 0;
}

