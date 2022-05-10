#include <iostream>
#include <cassert>
#include <string.h>
using namespace std::literals;

//TP 1 Brusco Sebastian

int main() {


	//Prueba de tipo de dato BOOL
	assert(true);
    assert(false==false);
    assert(true!=false);
    assert(not false);
    assert(not false==true);
    assert(false or true);
    assert(true and true);
    assert(false or true and false==false);
    assert((false or true) and false==false);
    assert(true or true and false);

    //Prueba de tipo de dato DOUBLE
    assert(2.0==1.0+1.0);
    assert(0.1==1.0/10.0);
    assert(1==1.0);
    assert(2.0==1+1.0);
    assert(2==1+1.0);
    //assert(1.0 == 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
    //std::cout << std::setprecision(17) << 1.0/5.0 << '\n';

    //Prueba de tipo de dato STRING
    assert("brusco"s=="bru"s+"sco"s);
    assert("brusco"s.length()==6); //length("brusco")

    //Prueba de tipo de dato INT
    assert(2==1+1);
    assert(3==1+2);
    assert(10==23-13);
    assert(6==2*3);
    assert(20==100/5);
    assert(7!=9);
    assert(10%2==0);
    assert(-34<77);
    assert(2>=1);
    assert(10<=11);
    assert(30>-5);

    //Pruebas de tipo de dato CHAR
    assert('a'!='A');
    assert('a'=='a');
    assert('A'=='A');
    assert('+'== '+');
    assert(1!='1');
    assert('/'!='\'');
    assert('a'+'b'+'c');
    assert('y'+'o'+'d'+'a'-'a');
    assert('t'<'z');
    assert('x'>'c');
    assert('d'/'b');
    assert('s'*'b');
    assert('d'%'b');
   
    //Prueba de tipo UNSIGNED
    assert(2==1+1);
    assert(3==1+2);
    assert(10==23-13);
    assert(6==2*3);
    assert(20==100/5);
    assert(7!=9);
    assert(10%2==0);
    assert(34<77);
    assert(2>=1);
    assert(10<=11);
    assert(30>5);
    
   /* Crédito Extra
   ¿Son esos realmente todos los tipos que vimos en clase?
   Justifique
   */
   //No, tambien se trataron datos como el float, el short, el long double, el void y el signed. Aunque no
   //se vieron detalladamente.
    


}



