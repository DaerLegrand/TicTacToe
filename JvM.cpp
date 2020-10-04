#include <iostream>

using namespace std;

//Cree un mounstruo, no encuentro forma de ganar
void chturn (char& x){// Esta funcion hace el cambio de turno entre jugadores
    if (x == 'X')
        x = 'O';
    else 
        x = 'X';

}

void foo (char& x, char& y){//Esta funcion detecta si el casillero seleccionado esta ocupado
    if (x != 'X' && x != 'O'){
        x = y;
        chturn(y);
    }
    else 
        cout << "Esta casilla ya esta ocupada intentelo otra vez!" << endl;

}

void win (char x, char y){
    
    if (x == y){
        cout << "Felicitaciones, gano el jugador." << endl;
    }
    else{
        cout << "Perdedor! Gano la maquina." << endl;
    }
}

bool check (char x){
    bool temp = (x == 'X' || x == 'O');
    return temp;
}

int main (){

    char a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', i = '9', turn = ' ', user, maq;
    int pos;

    cout << "Con que simbolo desea jugar, X or O? ";
    cin >> user;

    while (turn == ' '){
        if(user == 'x' || user == 'X'){// Diferencia entre mayusculas y minusculas
            user = 'X';
            maq = 'O';
            turn = user;
        }
        else if (user == 'o' || user == 'O'){ // Diferencia entre mayusculas y minusculas
            user = 'O';
            maq = 'X';
            turn = user;
        }
        else{
            cout << "No ingreso un simbolo correcto, intentelo otra vez.";
            cin >> user; 
        }
    }

    cout << "Usted es: " << user << endl;
    cout << "La maquina sera: " << maq << endl << endl;

    cout << "   " << a << "\t|   " << b << "\t|   " << c << endl;
    cout << "-------------------------\n";
    cout << "   " << d << "\t|   " << e << "\t|   " << f << endl;
    cout << "-------------------------\n";
    cout << "   " << g << "\t|   " << h << "\t|   " << i << endl << endl;

    while (pos != -1 ){

        if (turn == user){
            cout << "Turno del usuario: " << endl;
            cout << "Ingrese una posicion (del 1 al 9): ";
            cin >> pos;
            cout << endl;
        }
        else if (turn == maq){
            cout << "Turno de la maquina: "<< endl;
            if (e == '5'){
                pos = 5;
            }

            else if (a == maq && b == maq && c == '3'){
                pos = 3;
            }
            else if (a == maq && c == maq && b == '2'){
                pos = 2;
            }
            else if (b == maq && c == maq && a == '1'){
                pos = 1;
            }
            else if (d == maq && e == maq && f == '6'){
                pos = 6;
            }
            else if (e == maq && f == maq && d == '4'){
                pos = 4;
            }
            else if (g == maq && h == maq && i == '9'){
                pos = 9;
            }
            else if (h == maq && i == maq && g == '7'){
                pos = 7;
            }
            else if (g == maq && i == maq && h == '8'){
                pos = 8;
            }

            else if (a == maq && d == maq && g == '7'){
                pos = 7;
            }
            else if (d == maq && g == maq && a == '1'){
                pos = 1;
            }
            else if (a == maq && g == maq && d == '4'){
                pos = 4;
            }
            else if (e == maq && h == maq && b == '2'){
                pos = 2;
            }
            else if (b == maq && e == maq && h == '8'){
                pos = 8;
            }
            else if (c == maq && f == maq && i == '9'){
                pos = 9;
            }
            else if (f == maq && i == maq && c == '3'){
                pos = 3;
            }
            else if (c == maq && i == maq && f == '6'){
                pos = 6;
            }

            else if (e == maq && a == maq && i == '9'){
                pos = 9;
            }
            else if (e == maq && i == maq && a == '1'){
                pos = 1;
            }

            else if (c == maq && e == maq && g == '7'){
                pos = 7;
            }
            else if (e == maq && g == maq && c == '3'){
                pos = 3;
            }

            else if (a == user && b == user && c == '3'){
                pos = 3;
            }
            else if (a == user && c == user && b == '2'){
                pos = 2;
            }
            else if (b == user && c == user && a == '1'){
                pos = 1;
            }
            else if (d == user && e == user && f == '6'){
                pos = 6;
            }
            else if (e == user && f == user && d == '4'){
                pos = 4;
            }
            else if (g == user && h == user && i == '9'){
                pos = 9;
            }
            else if (h == user && i == user && g == '7'){
                pos = 7;
            }
            else if (g == user && i == user && h == '8'){
                pos = 8;
            }

            else if (a == user && d == user && g == '7'){
                pos = 7;
            }
            else if (d == user && g == user && a == '1'){
                pos = 1;
            }
            else if (a == user && g == user && d == '4'){
                pos = 4;
            }
            else if (e == user && h == user && b == '2'){
                pos = 2;
            }
            else if (b == user && e == user && h == '8'){
                pos = 8;
            }
            else if (c == user && f == user && i == '9'){
                pos = 9;
            }
            else if (f == user && i == user && c == '3'){
                pos = 3;
            }
            else if (c == user && i == user && f == '6'){
                pos = 6;
            }

            else if (e == user && a == user && i == '9'){
                pos = 9;
            }
            else if (e == user && i == user && a == '1'){
                pos = 1;
            }

            else if (c == user && e == user && g == '7'){
                pos = 7;
            }
            else if (e == user && g == user && c == '3'){
                pos = 3;
            }

            else if (((b == user || c == user) && (d == user || g == user)) && a == '1'){
                pos = 1;
            }
            else if (((a == user || d == user) && (h == user || i == user)) && g == '7'){
                pos = 7;
            }
            else if (((g == user || h == user) && (c == user || f == user)) && i == '9'){
                pos = 9;
            }
            else if (((a == user || b == user) && (f == user || i == user)) && c == '3'){
                pos = 3;
            }

            else if (g == '7'){
                pos = 7;
            }
            else if (i == '9'){
                pos = 9;
            }
            else if (a == '1'){
                pos = 1;
            }
            else if (c == '3'){
                pos = 3;
            }
            else if (b == '2'){
                pos = 2;
            }
            else if (f == '6'){
                pos = 6;
            }
            else if (d == '4'){
                pos = 4;
            }
            else if (h == '8'){
                pos = 8;
            }

        }
        

        switch (pos){

            case 1:
                foo(a, turn);
                break;
            case 2:
                foo(b, turn);
                break;
            case 3:
                foo(c, turn);
                break;
            case 4:
                foo(d, turn);
                break;
            case 5:
                foo(e, turn);
                break;
            case 6:
                foo(f, turn);
                break;
            case 7:
                foo(g, turn);
                break;
            case 8:
                foo(h, turn);
                break;
            case 9:
                foo(i, turn);
                break;
            default:
                cout << "DEBE ESCOGER UN VALOR ENTRE 1 y 9." << endl;
                cin >> pos;
        }

        cout << "   " << a << "\t|   " << b << "\t|   " << c << endl;
        cout << "-------------------------\n";
        cout << "   " << d << "\t|   " << e << "\t|   " << f << endl;
        cout << "-------------------------\n";
        cout << "   " << g << "\t|   " << h << "\t|   " << i << endl << endl;

        if (a == b && a == c){
            win(a, user);

            cout << "Si desea volver a jugar digite 0: ";
            cin >> pos;

            if (pos == 0){
                a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', i = '9';
                turn = user;
            }
            else {
                pos = -1;
            }
        }
        else if (d == e && d == f){
            win(d, user);

            cout << "Si desea volver a jugar digite 0: ";
            cin >> pos;

            if (pos == 0){
                a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', i = '9';
                turn = user;
            }
            else {
                pos = -1;
            }
        }
        else if (g == h && h == i){
            win(g, user);

            cout << "Si desea volver a jugar digite 0: ";
            cin >> pos;

            if (pos == 0){
                a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', i = '9';
                turn = user;
            }
            else {
                pos = -1;
            }
        }
        else if (a == d && a == g){
            win(a, user);

            cout << "Si desea volver a jugar digite 0: ";
            cin >> pos;

            if (pos == 0){
                turn = user;
            }
            else {
                pos = -1;
            }
        }
        else if (b == e && b == h){
            win(b, user);

            cout << "Si desea volver a jugar digite 0: ";
            cin >> pos;

            if (pos == 0){
                a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', i = '9';
                turn = user;
            }
            else {
                pos = -1;
            }
        }
        else if (c == f && c == i){
            win(c, user);

            cout << "Si desea volver a jugar digite 0: ";
            cin >> pos;

            if (pos == 0){
                a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', i = '9';
                turn = user;
            }
            else {
                pos = -1;
            }
        }
        else if (a == e && a == i){
            win(a, user);

            cout << "Si desea volver a jugar digite 0: ";
            cin >> pos;

            if (pos == 0){
                a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', i = '9';
                turn = user;
            }
            else {
                pos = -1;
            }
        }
        else if (g == e && g == c){
            win(g, user);

            cout << "Si desea volver a jugar digite 0: ";
            cin >> pos;

            if (pos == 0){
                a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', i = '9';
                turn = user;
            }
            else {
                pos = -1;
            }
        }

        if (check(a) && check(b) && check(c) && check(d) && check(e) && check(f) && check(g) && check(h) && check(i)){
            cout << "EMPATE. Todos los casilleros estan llenos. Si desea volver a comenzar digite 0: ";
            cin >> pos;
            if (pos == 0){
                a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', i = '9';
                turn = user;
            }
            else {
                pos = -1;
            }


        }
    }
    return 0;
}