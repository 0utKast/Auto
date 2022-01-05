/*int main()
{
    auto d{ 7.0 }; // 7.0 es un literal double, así que "d" será del tipo double
    auto i{ 2 + 6 }; // 2 + 6 se evalúa a un int, así que "i" será del tipo int
    auto x{ i }; // "i" es un int, así que "x" será del tipo int también

    return 0;
}*/

/*int sumar(int x, int y)
{
    return x + y;
}

int main()
{
    auto sum{ sumar(5, 6) }; // sumar() devuelve un int, así que el 
                             // tipo de sum se deducirá que es int
    return 0;
}*/

/*int main()
{
    auto x; 
    auto y{ }; 

    return 0;
}*/





/*int main()
{
    const int x{ 5 }; // x tiene un tipo const int
    auto y{ x };      // y será de tipo int (const es eliminado)
}*/

/*int main()
{
    const int x{ 5 };  // x tiene un tipo const int
    const auto y{ x }; // y será de tipo const int

    
}*/


/*int x{5}; // x es un int normal
int& y{ x }; // y es una referencia int& 
auto z{ y }; // z será un "int", no un "int&" 
             //porque la referencia se ha eliminado


auto& z{ y }; // tipo deducido es "int", pero hemos 
              // añadido un &, así que z será una  
              // referencia "int&"
              */

/*#include <iostream>
#include <string>      // para std::string
#include <string_view> // para std::string_view (desde C++ 17)

int main()
{
    using namespace std::literals; // acceso a sufijos s y sv //una de las 
                                   // poquísimas excepciones para "using"  

    auto x{ "foo\n" };   // sin sufijo es un literal string estilo-C
    std::cout << x;
    std::cout << typeid(x).name() << "\n";
    auto y{ "goo\n"s };  // sufijo s  es un literal std::string
    std::cout << y;
    std::cout << typeid(y).name() << "\n";
    auto z{ "moo\n"sv }; // sufijo sv es un literal std::string_view
    std::cout << z;
    std::cout << typeid(z).name() << "\n";

    auto s1{ "goo"s };  // "goo"s es un literal std::string, 
                        //así que s1 se deducirá como un std::string
    auto s2{ "moo"sv }; // "moo"sv es un literal std::string_view 
                        //así que s2 se deducirá como un literal std::string_view
    std::cout << s1;
    std::cout << typeid(s1).name() << "\n";
    std::cout << s2;
    std::cout << typeid(s2).name() << "\n";
    return 0;
};*/


/*#include <iostream>
#include <string>
#include <string_view>

int main()
{
    using namespace std::literals; // acceso a sufijos s y sv, una de las 
                                   // poquísimas excepciones para "using"

    auto s{ "Hola Mundo" }; //literal tipo char const *
    std::cout << typeid(s).name() << "\n";

    auto s1{ "goo"s };  // "goo"s es un literal std::string, 
                        //así que s1 se deducirá como un std::string
    auto s2{ "moo"sv }; // "moo"sv es un literal std::string_view 
                        //así que s2 se deducirá como un literal std::string_view

    std::cout << typeid(s1).name() << "\n";
    std::cout << typeid(s2).name() << "\n";

    return 0;
}*/



// Más difícil de leer
int a{ 5 };
double b{ 6.7 };

// Más sencillo de leer
auto c{ 5 };
auto d{ 6.7 };

int main() 
{
    int x; // olvidamos inicializar x, pero el compilador puede que no se queje
    auto y; // el compilador lanzará error porque no puede deducir un un tipo para y


    double x{ 5 }; // mal: implícitamente convierte 5 de un int a un double
    auto y{ 5 }; // bien: y is un int y no se produce ninguna conversión
}






















