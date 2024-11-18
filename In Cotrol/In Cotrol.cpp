#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Variables globales
string objeto;
bool arma;
string objeto2;
bool arma2;


// Declaración de funciones
void titulo();
void titulo();
void play();
void intro();
void caminoOscuro();
void caminoClaro();
void caminoMisterioso();
void entrarCastillo();
void noEntrarCastillo();
void caminocasa();
void esconderse();
void final_dormir();
void entrarcasa();
void cofretrampa();
void salida();
void batallajefe();
void peleacastillo();
void salescastillo();
void esquivar();
void seguirexplorando();
void superenemigo();
void contra_atacar();

int main() {
    titulo();
    play();
    intro();
    return 0;
}

void titulo() {
    cout << "  ***       *    *" << endl;
    cout << "   *       *  *  *" << endl;
    cout << "   *       *  *  *" << endl;
    cout << "   *       *  *  *" << endl;
    cout << "  ***      *   * " << endl;
    cout << endl;
    cout << "  **      **      *    *    ***    **      **    *" << endl;
    cout << "**      *    *   *  *  *     *    *   *  *    *  *" << endl;
    cout << "*       *    *   *  *  *     *    * *    *    *  *" << endl;
    cout << "**      *    *   *  *  *     *    *  *   *    *  *" << endl;
    cout << "  **      **     *   *       *    *   *    **    ***" << endl;
    cout << endl;
}

void play() {
    int start;
    do {
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
        cout << "1. PLAY" << endl;
        cout << "2. EXIT" << endl;
        cin >> start;
        cout << endl;
        if (start == 1) {
            // Continúa el juego
        }
        else if (start == 2) {
            exit(0); // Uso de exit en lugar de terminate
        }
        else {
            start = 0;
        }
    } while (start == 0);
}

void intro() {
    int elige;
    cout << "Acabas de despertar un poco desorientado, y no recuerdas nada." << endl;
    cout << "Al mirar un poco alrededor te percatas que estas en una cueva y hay dos caminos." << endl;
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
    do {
        cout << "(Elige una de las opciones)" << endl;
        cout << "1. El de la derecha está muy oscuro pero se siente una pequeña brisa." << endl;
        cout << "2. El de la izquierda hay un rayo de luz pero se pueden escuchar unos pasos." << endl;
        cout << "3. Un camino intermedio cubierto de neblina que emite un leve resplandor azul." << endl; // Nuevo camino
        cin >> elige;
        if (elige == 1) {
            caminoOscuro();
        }
        else if (elige == 2) {
            caminoClaro();
        }
        else if (elige == 3) {
            caminoMisterioso(); // Nuevo camino
        }
        else {
            cout << "Opción no válida, elige de nuevo." << endl;
            elige = 0;
        }
    } while (elige == 0);
}

void caminoOscuro() {
    int elige;
    cout << "El camino oscuro... Atento a los enemigos, te encuentras un castillo. ¿Quieres entrar?" << endl;
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
    do {
        cout << "(Elige una de las opciones)" << endl;
        cout << "1. Entrar al castillo." << endl;
        cout << "2. No entrar al castillo." << endl;
        cin >> elige;
        if (elige == 1) {
            entrarCastillo();
        }
        else if (elige == 2) {
            noEntrarCastillo();
        }
        else {
            cout << "Opción no válida, elige de nuevo." << endl;
            elige = 0;
        }
    } while (elige == 0);
}

void caminoClaro() {
    int elige;
    cout << "El camino hacia la cueva... Ten cuidado con los enemigos... ¡¿Un cofre de oro?! ¿Será una trampa? ¿Quieres abrirlo?" << endl;
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
    do {
        cout << "(Elige una de las opciones)" << endl;
        cout << "1. Abrir cofre." << endl;
        cout << "2. No abrir cofre y seguir explorando." << endl;
        cin >> elige;
        if (elige == 1) {
            cout << "El cofre era una trampa... y moriste." << endl;
            titulo();
        }
        else if (elige == 2) {
            cout << "Decides no abrir el cofre y seguir explorando." << endl;
            seguirexplorando();
        }
        else {
            cout << "Opción no válida, elige de nuevo." << endl;
            elige = 0;
        }
    } while (elige == 0);
}



void seguirexplorando() {
    int elige;
    cout << "Sigues explorando y te encuentras con dos puertas que son identificadas. Cual quieres elegir?" << endl;

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

    do {
        cout << "(Elige una de las opciones)" << endl;
        cout << "1. Abir puerta 1." << endl;
        cout << "2. Abrir puerta 2." << endl;
        cin >> elige;

        if (elige == 1) {
            cout << "Abres la puerta 1 y te encuentras con un SUPER ENEMIGO!." << endl;
            superenemigo();
        }
        else if (elige == 2) {
            cout << "Abres la puerta 2 y..." << endl;
            caminoMisterioso();
        }
        else {
            cout << "Opción no válida, elige de nuevo." << endl;
            elige = 0;
        }

    } while (elige == 0);
}

void superenemigo() {
    int elige;
    cout << "El SUPER ENEMIGO DECIDE ATACAR! QUE DESEAS HACER ESQUIVAR O ATACAR?" << endl;

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

    do {
        cout << "(Elige una de las opciones)" << endl;
        cout << "1. ESQUIVAR." << endl;
        cout << "2. ATACAR." << endl;
        cin >> elige;

        if (elige == 1) {
            cout << "Decides esquivar y lograstes esquivar el atacaque." << endl;
            esquivar();
        }
        else if (elige == 2) {
            cout << "Decides contra-atacar pero no pudistes, fuistes herido gravemente." << endl;
            contra_atacar();
        }
        else {
            cout << "Opción no válida, elige de nuevo." << endl;
            elige = 0;
        }
    } while (elige == 0);
}


void contra_atacar() {
    int elige;
    cout << "Fuistes gravemente herido pero el SUPER ENEMIGO FUE DESORIENTADO. ES TU MOMENTO DE VOLVER ATACAR!" << endl;

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

    do {
        cout << "(Elige una de las opciones)" << endl;
        cout << "1. ATACAR." << endl;
        cout << "2. NO ATACAR." << endl;
        cin >> elige;

        if (elige == 1) {
            peleacastillo();
        }
        else if (elige == 2) {
            cout << "Decidistes no atacar y sales corriendo hacia un bosque." << endl;
            noEntrarCastillo();
        }
        else {
            cout << "Opción no válida, elige de nuevo." << endl;
            elige = 0;
        }
    } while (elige == 0);
}
void esquivar() {
    int elige;
    cout << "Esquivastes el ataque.. " << endl;

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

    do {
        cout << "(Elige una de las opciones)" << endl;
        cout << "1. ESCONDERTE." << endl;
        cout << "2. ATACAR." << endl;
        cin >> elige;

        if (elige == 1) {
            cout << "Decides esquivar." << endl;
            esconderse();
        }
        else if (elige == 2) {
            cout << "Decides atacar." << endl;
            peleacastillo();
        }
        else {
            cout << "Opción no válida, elige de nuevo." << endl;
            elige = 0;
        }
    } while (elige == 0);
}

void caminoMisterioso() {
    int elige;
    cout << "Te adentras en el camino cubierto de neblina. El aire se siente frío y húmedo, y pronto llegas a un lago resplandeciente." << endl;
    cout << "En el centro del lago, ves una figura extraña que parece observarte desde las sombras." << endl;
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
    do {
        cout << "(Elige una de las opciones)" << endl;
        cout << "1. Acercarte al lago y tratar de interactuar con la figura." << endl;
        cout << "2. Rodear el lago cuidadosamente y buscar otro camino." << endl;
        cin >> elige;
        if (elige == 1) {
            cout << "Te acercas lentamente al lago. La figura resulta ser un espíritu amistoso que te otorga un objeto mágico: un Amuleto de Protección." << endl;
            cout << "Este amuleto te otorgará una segunda oportunidad si pierdes toda tu vida en combate." << endl;
            objeto = "Amuleto de Protección";
            arma = true;
            cout << "Decides continuar tu camino con el amuleto en tu poder." << endl;
            caminoOscuro(); // Conecta con otro camino
        }
        else if (elige == 2) {
            cout << "Decides rodear el lago con cuidado. Mientras lo haces, un grupo de enemigos aparece y te obliga a huir hacia el castillo." << endl;
            caminoClaro(); // Conecta con otro camino
        }
        else {
            cout << "Opción no válida, elige de nuevo." << endl;
            elige = 0;
        }
    } while (elige == 0);
}

void entrarCastillo() {
    int elige;
    cout << "Entraste a un castillo oscuro... ¡CUIDADO ENEMIGO! (Esconderte o Correr)." << endl;

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

    do {
        cout << "(Elige una de las opciones)" << endl;
        cout << "1. Esconderte." << endl;
        cout << "2. Correr." << endl;
        cin >> elige;

        if (elige == 1) {
            cout << "Te escondes del enemigo." << endl;
            esconderse();
        }
        else if (elige == 2) {
            cout << "Corres hacia la salida pero la salida está BLOQUEADA!." << endl;
            peleacastillo();
        }
        else {
            cout << "Opción no válida, elige de nuevo." << endl;
            elige = 0;
        }
    } while (elige == 0);
}

void esconderse() {
    int elige;
    cout << "Al esconderte, el enemigo no logra verte, y ahora puedes escapar o atacarlo por detrás." << endl;

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

    do {
        cout << "(Elige una de las opciones)" << endl;
        cout << "1. Escapar." << endl;
        cout << "2. Atacar por detrás." << endl;
        cin >> elige;

        if (elige == 1) {
            cout << "Logras escapar y salir de el castillo." << endl;
            noEntrarCastillo();
        }
        else if (elige == 2) {
            cout << "Corres hacia el enemigo dandole un golpe que termina acabandolo." << endl;
            salescastillo();
        }
        else {
            cout << "Opción no válida, elige de nuevo." << endl;
            elige = 0;
        }
    } while (elige == 0);
}

void noEntrarCastillo() {
    int elige;
    cout << "Buena decisión, pero el bosque está bastante oscuro. Avanza con cuidado..." << endl;

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

    do {
        cout << "(Elige una de las opciones)" << endl;
        cout << "1. Vez una casa en la oscuridad!" << endl;
        cout << "2. Tomar una ciesta anntes de avanzar." << endl;
        cin >> elige;

        if (elige == 1) {
            caminocasa();
        }
        else if (elige == 2) {
            cout << "Decides tomarte un descanso cuando de repente...." << endl;
            final_dormir();
        }
        else {
            cout << "Opción no válida, elige de nuevo." << endl;
            elige = 0;
        }
    } while (elige == 0);
}

void final_dormir() {
    cout << "Todo fue un sueño y lograste escapar de la pesadilla!!!" << endl;
    cout << "Seguro que en realidad escapaste?" << endl;
    titulo();
}

void caminocasa() {
    int elige;
    cout << "HMMM... Una casa, ¿quieres entrar?" << endl;

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

    do {
        cout << "(Elige una de las opciones)" << endl;
        cout << "1. Entrar." << endl;
        cout << "2. No entrar." << endl;
        cin >> elige;

        if (elige == 1) {
            cout << "Se ve oscuro la casa , pero hay un sotano con un cofre misterioso que desprende un aura maligna." << endl;
            entrarcasa();
        }
        else if (elige == 2) {
            cout << "Deseas no entrar, pero te percatas de otro camino al que decides seguir." << endl;
            salida();
        }
        else {
            cout << "Opción no válida, elige de nuevo." << endl;
            elige = 0;
        }
    } while (elige == 0);
}

void entrarcasa() {
    int elige;
    cout << "Estas justo frente al cofre, deseas abrirlo?" << endl;

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

    do {
        cout << "(Elige una de las opciones)" << endl;
        cout << "1. Abrir." << endl;
        cout << "2. No abrir." << endl;
        cin >> elige;

        if (elige == 1) {
            cofretrampa();
        }
        else if (elige == 2) {
            cout << "Prefieres no abrir el cobre, por lo que sales a explorar y te topas con un camino..." << endl;
            salida();
        }
        else {
            cout << "Opción no válida, elige de nuevo." << endl;
            elige = 0;
        }
    } while (elige == 0);
}

void cofretrampa() {
    cout << "Al bajar al sotano y abrir el cofre, una trampa se activa acabando con tu vida..." << endl;
    cout << "Moriste pateticamente." << endl;
    titulo();
}

void salida() {
    int elige;
    cout << "Al seguir el camino te das cuenta que hay una salida pero... está siendo protegida por un enemigo muy muy poderoso." << endl;

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

    do {
        cout << "(Elige una de las opciones)" << endl;
        cout << "1. Decides luchar contra el enemigo." << endl;
        cout << "2. Prefieres evitarlo, ya que se ve muy fuerte, así que decides buscar otra ruta." << endl;
        cin >> elige;

        if (elige == 1) {
            batallajefe();
        }
        else if (elige == 2) {
            cout << "Comienzas a caminar encontrando otra salida... pero resultó ser un trampa que termina costandote todo..." << endl;
            cout << "Moriste siendo un cobarde" << endl;
            titulo();
        }
        else {
            cout << "Opción no válida, elige de nuevo." << endl;
            elige = 0;
        }
    } while (elige == 0);
}

void batallajefe() {

    int elige;
    //Vidas
    int jugador = 1;
    int enemigo = 3;
    if (arma == true) {
        jugador = jugador + 1;
    }

    cout << "El enemigo está apunto de hacer un movimiento, que harás?" << endl;
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

    cout << " Aguantar le gana a Atacar, Atacar le gana a Rodear y Rodear le gana a Aguantar." << endl;

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

    do {
        cout << "Tienes " << jugador << " vidas" << endl;
        srand(time(0));
        int ataqueenemigo = rand() % 3 + 1;

        cout << "1. Aguantar el ataque." << endl;
        cout << "2. Rodear al enemigo." << endl;
        cout << "3. Atacar." << endl;
        cin >> elige;

        if (elige == ataqueenemigo) {
            cout << "Ambos utilizaron la misma tecnica, no pasó nada..." << endl;
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
        }
        else if (elige == 1 and ataqueenemigo == 3) {
            cout << "Has acertado un ataque." << endl;
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
            enemigo--;
        }
        else if (elige == 2 and ataqueenemigo == 1) {
            cout << "Has acertado un ataque." << endl;
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
            enemigo--;
        }
        else if (elige == 3 and ataqueenemigo == 3) {
            cout << "Has acertado un ataque." << endl;
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
            enemigo--;
        }
        else {
            cout << "El enemigo ah acertado un ataque." << endl;
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
            jugador--;
        }
        if (jugador == 0) {

            cout << "No lograste Derrotar al enemigo y escapar de el lugar... Fuistes devorado." << endl;
            cout << "Moriste como un guerrero." << endl;
            titulo();
        }
        else if (enemigo == 0) {
            cout << "Lograste Derrotar al enemigo y escapar de el lugar... " << endl;
            cout << "Escapaste siendo un campeón." << endl;
            titulo();
        }
    } while (jugador > 0 and enemigo >= 0);
    titulo();
}

void peleacastillo() {
    int elige;
    //Vidas
    int jugador = 2;
    int enemigo = 3;
    if (arma == true) {
        jugador = jugador + 1;
    }


    cout << "El enemigo está apunto de hacer un movimiento, que harás?" << endl;
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

    cout << " Aguantar le gana a Atacar, Atacar le gana a Rodear y Rodear le gana a Aguantar." << endl;

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

    do {
        cout << "Tienes " << jugador << " vidas" << endl;
        srand(time(0));
        int ataqueenemigo = rand() % 3 + 1;

        cout << "1. Aguantar el ataque." << endl;
        cout << "2. Rodear al enemigo." << endl;
        cout << "3. Atacar." << endl;
        cin >> elige;

        if (elige == ataqueenemigo) {
            cout << "Ambos utilizaron la misma tecnica, no pasó nada..." << endl;
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
        }
        else if (elige == 1 and ataqueenemigo == 3) {
            cout << "Has acertado un ataque." << endl;
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
            enemigo--;
        }
        else if (elige == 2 and ataqueenemigo == 1) {
            cout << "Has acertado un ataque." << endl;
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
            enemigo--;
        }
        else if (elige == 3 and ataqueenemigo == 3) {
            cout << "Has acertado un ataque." << endl;
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
            enemigo--;
        }
        else {
            cout << "El enemigo ah acertado un ataque." << endl;
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
            jugador--;
        }
        if (jugador < 1) {

            cout << "No lograste derrotar al enemigo y fuistes devorado." << endl << "Mueres trajicamente" << endl;
            titulo();
        }
        else if (enemigo < 1) {
            cout << "Lograste Derrotar al enemigo" << endl;
            salescastillo();
        }

    } while (jugador > 0 and enemigo > 0);
}

void salescastillo() {
    int elige;
    cout << "Luego de salir de el castillo te topas con dos caminos distintos..." << endl;

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

    do {
        cout << "(Elige una de las opciones)" << endl;
        cout << "1. Caminar hacia el bosque oscuro." << endl;
        cout << "2. Seguir un pequeño camino hacia la oscuridad." << endl;
        cin >> elige;

        if (elige == 1) {
            cout << "Eliges caminar hacia el bosque." << endl;
            noEntrarCastillo();
        }
        else if (elige == 2) {
            salida();
        }
        else {
            cout << "Opción no válida, elige de nuevo." << endl;
            elige = 0;

        }
    } while (elige == 0);
}




