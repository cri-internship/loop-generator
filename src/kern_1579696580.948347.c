#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(140, "zeros");
	float **A = create_two_dim_float(320, 280, "zeros");
	float **B = create_two_dim_float(690, 810, "zeros");
	float *D = create_one_dim_float(430, "zeros");
	float *C = create_one_dim_float(510, "zeros");

	for (int d = 5; d < 277; d++)
	  for (int c = 1; c < 315; c++)
	    for (int b = 1; b < 315; b++)
	      for (int a = 1; a < 315; a++)
	      {
	        
	       C[a]=C[a+4]+0.312;
	        
	       A[a][b]=A[a+5][b+3]+D[a]-0.046*C[a];
	        
	       D[a]=A[a][b]/B[a][b]*A[a][b];
	       D[a]=E[a]-A[a][b]*C[a]/B[a][b];
	        
	       A[a][b]=E[a];
	      }

    return 0;
}