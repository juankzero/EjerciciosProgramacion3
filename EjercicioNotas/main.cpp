
#include <iostream>

using namespace std;

class Nota
{
private:
    int valor;

public:
    static int notaAprobacion;

    Nota(void): valor(0)
    {
        //valor = 0;
    }

    Nota(int _valor)
    {
        setNota(_valor);
    }

    void setNota(int _valor)
    {
        this->valor = _valor;
    }

    int getNota(void) 
    {
        return this->valor;
    }

    bool esAprobado() 
    {
       /* if (this->valor >= notaAprobacion)
            return true;
        else
            return false;*/

        return this->valor >= notaAprobacion;

        //return (this->valor >= notaAprobacion ? true : false);

    }

};

int Nota::notaAprobacion = 70;

int main() 
{
    Nota n1;
    Nota n2(85);

    n1.setNota(65);

    cout << "Nota 1: " << n1.getNota() << endl;
    cout << "Nota 2: " << n2.getNota() << endl;

    cout << (n1.esAprobado() ? "¡Esta Aprobado!" : "¡Esta Reprobado!") << endl;
    cout << (n2.esAprobado() ? "¡Esta Aprobado!" : "¡Esta Reprobado!") << endl;

    Nota::notaAprobacion = 60;

    cout << (n1.esAprobado() ? "¡Esta Aprobado!" : "¡Esta Reprobado!") << endl;
    cout << (n2.esAprobado() ? "¡Esta Aprobado!" : "¡Esta Reprobado!") << endl;

}
