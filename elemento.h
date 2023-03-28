#ifndef ELEMENTO_H
#define ELEMENTO_H



class elemento {
private:
   
                char tipo_componente;
                double tamano;
                char unidad_medida;
                int coord_x, coord_y;

public:
   elemento cosntructor(char tipo, double tamano, char unidad, int x, int y);
    
    void cargar_elemento( string input );



    //Getters y Setters

    
   
};





#endif