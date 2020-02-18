#! /bin/bash
gcc CHECK.c chebyshev_polynomials.c
./a.out > out.dat
./prof.plt
ps2pdf14 output.ps
