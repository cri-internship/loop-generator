#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(390, "zeros");
	float *A = create_one_dim_float(720, "zeros");
	float **B = create_two_dim_float(410, 210, "zeros");
	float **C = create_two_dim_float(810, 350, "zeros");

	for (int b = 0; b < 206; b++)
	  for (int a = 1; a < 410; a++)
	  {
	    
	     float var_a=B[a][b]/0.773;
	     B[a][b]=0.145;
	    
	     A[a]=A[a+4]+B[a][b];
	    
	     B[a][b]=B[a][b+4]+A[a];
	    
	     C[a][b]=D[a]/0.442+A[a];
	     C[a][b+5]=B[a][b]*A[a]-D[a];
	    
	     B[a][b]=A[a]*C[a][b]+B[a][b];
	     C[a][b]=A[a-1]*D[a];
	  }

    return 0;
}