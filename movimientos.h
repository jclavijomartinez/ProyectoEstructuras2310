#ifndef MOVIMIENTO_H
#define MOVIMIENTO_H



class movimientos {
private:
   char tipoMov;
  float magnitud;
  char uniMed;

public:

   movimientos movimientos::consstructor(char tipoMov,float magnitud, char uniMed);
    
   void agregar_mov ( string ); //AGREGAR MOVIMIENTO

    //Getters y Setters

    char getTipoMov();

    float getMagnitud();

    char getUniMed();
    

};




#endif