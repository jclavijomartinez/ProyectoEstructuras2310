#ifndef CURIOSITY_H
#define CURIOSITY_H



class curiosity {
private:
  movimientos  tipoMov;
  float magnitud;
  char uniMed;

public:

   curiosity curiosity::consstructor(char tipoMov,float magnitud, char uniMed);
    
   void agregar_mov ( string ); //AGREGAR MOVIMIENTO

    //Getters y Setters

    char getTipoMov();

    float getMagnitud();

    char getUniMed();
    

};




#endif