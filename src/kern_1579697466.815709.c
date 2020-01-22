#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(280, "random");
	float **C = create_two_dim_float(350, 340, "random");
	float *A = create_one_dim_float(810, "random");
	float **B = create_two_dim_float(250, 420, "random");

	for (int d = 5; d < 336; d++)
	  for (int c = 4; c < 250; c++)
	    for (int b = 4; b < 250; b++)
	      for (int a = 4; a < 250; a++)
	      {
	        
	       A[a]=D[a]+C[a][b];
	       C[a][b]=A[a]*B[a][b]-D[a];
	        
	       C[a][b]=C[a+2][b+4]+A[a]/D[a];
	        
	       A[a]=A[a+5]*D[a]+B[a][b]/0.002;
	        
	       D[a]=0.773;
	       D[a+1]=0.795;
	        
	       float var_a=A[a]-0.928;
	        
	       float var_c=B[a][b]*0.533;
	       float var_d=B[a-4][b-5]-0.144;
	      }

    return 0;
}