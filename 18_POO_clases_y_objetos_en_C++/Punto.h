//
// Created by maxpo on 4/11/2020.
//

#ifndef INC_18_POO_CLASES_Y_OBJETOS_EN_C___PUNTO_H
#define INC_18_POO_CLASES_Y_OBJETOS_EN_C___PUNTO_H

using namespace std;

class Punto {
    //Atributos
private:
    int x, y;
    //Métodos
public:
    Punto(int _x, int _y){//Constructor1
        x = _x;
        y = _y;
    }
    Punto(){//Constructor2
        x = y = 0;
    }
    void setX(int valorX);//Establecemos el valor de X
    void setY(int valorY);//Establecemos el valor de Y
    int getX(); //Obtener el valor de X
    int getY(); //Obtener el valor de Y

};


#endif //INC_18_POO_CLASES_Y_OBJETOS_EN_C___PUNTO_H
