#include "recursivo.h"

Recursivo::Recursivo()
{

}

bool Recursivo::Triangular(int numero, int nmr1, int nmr2, int nmr3)
{
    if (numero == nmr1 * nmr2 * nmr3)
    {
        return true;
    }
    if (nmr3 < numero)
    {
        return Triangular(numero, nmr1 + 1, nmr2 + 1, nmr3 + 1);
    }
    return false;
}

bool Recursivo::Primo(int numero, int divisor)
{
    if (divisor < numero && numero / divisor == numero * 1.0 / divisor)
    {
        return false;
    }
    if (divisor < numero)
        return Primo(numero, divisor + 1);
    return true;
}
