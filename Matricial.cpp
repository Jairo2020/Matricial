#include "Matricial.h"
#include "Arduino.h"
Matricial::Matricial()
{
  
}
 
byte Matricial::tecla(char key)
{
    if (key != '#' && key != '*')
    {
        if (key == '1') 
        {
            valor = 1;
        }
        else if (key == '2')
        {
            valor = 2;
        }
        else if (key == '3')
        {
            valor = 3;
        }
        else if (key == '4')
        {
            valor = 4;
        }
        else if (key == '5')
        {
            valor = 5;
        }
        else if (key == '6')
        {
            valor = 6;
        }
        else if (key == '7')
        {
            valor = 7;
        }
        else if (key == '8')
        {
            valor = 8;
        }
        else if (key == '9')
        {
            valor = 9;
        }
        else if (key == '0')
        {
            valor = 0;
        }
    }
    return valor;
}

void Matricial::camb_Clave(byte ingresada[], byte predeterminada[]) // función para realizar un cambio de contraseña
{
  for (int i = 0; i < 8; i++)
  {
    predeterminada[i] = ingresada[i];
  }
}

bool Matricial::veryClave(byte ClaveIngresar [],byte predefinida[])
{
    for (int i = 0; i < 8; i++)
    {
        if (ClaveIngresar[i] == predefinida[i])
        {
            cont++;
        }
    }
    if (cont == 8)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Matricial::Mostrar(byte ClavePD[])
{
    for (int i = 0; i < 8; i++)
    {
        Serial.print(ClavePD[i]);
    }
}

void Matricial::Reset(byte ClaveIngresar[])
{
    byte a = 0;
    for (int i = 0; i < 8; i++)
    {
        if (ClaveIngresar[i] != 0)
        {
            a++;
        }
    }
    if (a != 0)
    {
        for (int i = 0; i < 8; i++)
        {
            ClaveIngresar[i] = 0;
        }
    }
}

uint32_t Matricial::Teclado(uint32_t tecla)
{
     if (tecla == 19125)
  {
    numero = 1;
  }
  else
    if (tecla == 2805)
    {
      numero = 2;
    }
  else
    if (tecla == 2295)
    {
      numero = 3;
    }
  else
    if (tecla == 27285)
    {
      numero = 4;
    }
  else
    if (tecla == 10965)
    {
      numero = 5;
    }
  else
    if (tecla == 10455)
    {
      numero = 6;
    }
  else
    if (tecla == 29325)
    {
      numero = 7;
    }
  else
    if (tecla == 13005)
    {
      numero = 8;
    }
  else
    if (tecla == 12495)
    {
      numero = 9;
    }
  else
    if (tecla == 61455)
    {
      numero = 0;
    }
  else
  {
    return tecla;
  }
  return numero;
}




