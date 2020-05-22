#include <iostream>   // para imprimir.
 // bibliotecas con objetos de mi proyecto.
#include "jugadores.h"
#include "equipos.h"

using namespace std;

int main(int argc, char* argv[]){
  cout << endl << "New York Yankees Line-Up" << endl << endl ;
  Equipos equipos;
  equipos.crea_alineacionLocal();
  equipos.muestra_alineacionLocal();
  cout << endl;
  cout << " Washington Nationals Line-Up" << endl << endl ;

  equipos.crea_alineacionVisitante();
  equipos.muestra_alineacionVisitante();
  
   cout << endl << "Previo del juego:" << endl << endl ;
    cout << endl << "El dia de hoy tendremos duelo de pitcheo por parte de los dos equipos, en el cual han demostrado la calidad de pitchers que son, contando con muy pocas carreras en lo que va de la temporada regular." << endl << endl <<"Por parte de los Yankees, subira al monticulo Gerrit Cole, proveniente de los Astros de Houston. Cole ha tenido una magnifica temporada regular con una efectividad de 1.55, un Whip de 0.97 y un OBA de 0.199avg esto quiere decir que no concede muchos hits por entrada" << endl
    << endl << "Por parte de los Nationals, subira al diamante el veterano Max Scherzer el cual tiene una temporada regular muy buena como en casi todas las temporadas con una marca de 2.3 de efectividad, 1.3 Whip y un OBA de 0.230avg" << endl << endl ;


/* Este programa es una simulación de una alineacion de dos equipos de Beisbol de la MLB, que en este caso tome en cuenta los equipos Yankees y Nationals para recrear una alineacion como normalmente se veria en una pagina de estadisticas, se hace el uso de polimorfismo para la creacion de los objetos con un arreglo para que los imprima cada uno.
*/
}

