#include <fstream>
#include <iostream>

int main()
{
    std::string nombre,contrasena,fnacimiento,ntlf,direccion;
    
    std::cout<<"\n*********************************\n";
    std::cout<<"           CREAR PERFIL             ";
    std::cout<<"\n*********************************\n\n";

    std::cout<<"Introduce tu nombre y apellidos: ";
    std::getline(std::cin,nombre);
    while (nombre.empty())
    {
        std::cout<<"Introduce tu nombre y apellidos: ";
        std::getline(std::cin,nombre);
    }
    std::cout<<"Introduce tu contraseña: ";
    std::getline(std::cin,contrasena);
    while (contrasena.empty())
    {
        std::cout<<"Introduce tu contraseña: ";
        std::getline(std::cin,contrasena);
    }
    std::cout<<"Introduce tu fecha de nacimiento (formato=dd/mm/yyyy): ";
    std::getline(std::cin,fnacimiento);
    while (fnacimiento.empty())
    {
        std::cout<<"Introduce tu fecha de nacimiento (formato=dd/mm/yyyy): ";
        std::getline(std::cin,fnacimiento);
    }
    std::cout<<"Introduce tu número de teléfono: ";
    std::getline(std::cin,ntlf);
    while (ntlf.empty())
    {
        std::cout<<"Introduce tu número de teléfono: ";
        std::getline(std::cin,ntlf);
    }
    
    std::cout<<"Introduce tu dirección: ";
    std::getline(std::cin,direccion);
    while (direccion.empty())
    {
        std::cout<<"Introduce tu dirección: ";
        std::getline(std::cin,direccion);
    }

    std::ofstream perfil;
    perfil.open("perfiles/perfil.txt");

    perfil<<nombre<<"\n";
    perfil<<contrasena<<"\n";
    perfil<<fnacimiento<<"\n";
    perfil<<ntlf<<"\n";
    perfil<<direccion<<"\n";

    perfil.close();

    return 0;
}