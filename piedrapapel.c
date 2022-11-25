#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int piedrapapeltijera = 0;

    printf("Escoge una opcion para jugar: \n1- Piedra\n2- Papel\n3- Tijera\n");
    printf(":");

    scanf("%d", &piedrapapeltijera);

    time_t now;
    /*Initializes random number generator*/
    srand(time(&now));

    int r = rand() % 3; // 0= Piedra  1= Papel  2= Tijera

    if (piedrapapeltijera == 1)
    {

    
    if (r == 0)
    {
        printf("Enemy eligio piedra, es un empate -_-"); /* code */
    }

    else if (r == 1)
    {
        printf("Enemyy eligio papel, PERDISTE y eso es tiste :c"); /* code */
    }

    else if (r == 2)
    {
        printf("Enemy eligio tijera, GANASTE CRACK!  SIUUUUUUUU! n.n"); /* code */
    }
    }

    if (piedrapapeltijera == 2)
    {

    if (r == 0)
        {
            printf("Enemy eligio piedra, GANASTE CRACK!  SIUUUUUUUU! n.n"); /* code */
        }

        else if (r == 1)
        {
            printf("Enemy eligio papel, es un empate -_-"); /* code */
        }

        else if (r == 2)
        {
            printf("Enemy eligio tijera, PERDISTE y eso es tiste :c"); /* code */
        }
    }

    if (piedrapapeltijera == 3)
    {
    

    if (r == 0)
        {
            printf("Enemy eligio piedra, PERDISTE y eso es tiste :c"); /* code */
        }

        else if (r == 1)
        {
            printf("Enemy eligio papel, GANASTE CRACK!  SIUUUUUUUU! n.n"); /* code */
        }

        else if (r == 2)
        {
            printf("Enemy eligio tijera, es un empate uwu -_-"); /* code */
        }
    }

    return 0;
}