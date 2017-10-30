/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Vilar
 *
 * Created on 30 de Outubro de 2017, 23:41
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv)

{

    int x, y;
     
       for (x = 1; x <= 10; x = x + 1){
          for (y = 1; y <= 10; y = y + 1){
               printf("%2d x %2d = %3d\n", x, y, x * y);
           }
       printf("Tabuadas dos números inteiros de 1 a 10\n");
       }

    return (0);
}

