#include <Arduino.h>
#ifndef MATRICIAL_H
#define MATRICIAL_H
class Matricial
{
public:
  Matricial();

  void prueba();
  void Mostrar(byte ClavePD[]);/* FUNCIÓN PARA MOSTRAR LA CLAVE */
  byte tecla(char key); // * FUNCIÓN PARA MOSTRAR TECLA DEL TECLADO MATRICIAL */
  bool veryClave(byte ClaveIngresar[], byte predefinida[]); /* FUNCIÓN PARA COMPARAR LAS CLAVES. UNA INGRESADA Y LA OTRA PREDEFINIDA*/
  void camb_Clave(byte ingresada[], byte predeterminada[]);/* FUNCIÓN PARA CAMBIAR LA CLAVE */
  void Reset(byte ClaveIngresar[]); /* FUNCIÓN PARA RESETEAR LA CLAVE*/
  uint32_t Teclado(uint32_t tecla); // * FUNCIÓN PARA EL CONTROL IR* //*/
private:
    byte valor;
    byte cont = 0;
    byte numero;
};
# endif 