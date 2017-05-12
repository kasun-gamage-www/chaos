/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: kasun
 *
 * Created on 12 May 2017, 15:13
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int i;
    for (i = 0;; i++) {
        int r = rand() % 2;
        printf("%c", r == 1 ? '*' : ' ');
    }
}
