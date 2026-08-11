#include <iostream>
#include <cstring>
#include <string>
#include <sys/bsdtypes.h>
using namespace std;
int main()
{
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;
    typedef struct legendarypokemon{
        pokemon normal;
        char ability[10];

    }legendarypokemon;

    legendarypokemon poke;
    strcpy(poke.ability,"thunder");
    poke.normal.speed=34;
    cout<<poke.normal.speed;
}
