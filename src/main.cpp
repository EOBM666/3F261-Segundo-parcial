#include<iostream>
#include<SerieFoco.hpp>
#include<Foco.hpp>

int main(int argc, char const *argv[])
{
    SerieFocos serie;
    serie.EncenderFocos();
    serie.MostarFocos();
    serie.ApagarFocos();
    serie.MostarFocos();

    return 0;
}