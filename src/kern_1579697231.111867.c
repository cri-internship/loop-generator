#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(270, "random");
	float ***D = create_three_dim_float(900, 40, 370, "random");
	float **C = create_two_dim_float(600, 930, "random");
	float **A = create_two_dim_float(200, 170, "random");
	float *B = create_one_dim_float(200, "random");

	for (int d = 4; d < 370; d++)
	  for (int c = 1; c < 40; c++)
	    for (int b = 4; b < 195; b++)
	      for (int a = 4; a < 195; a++)
	      {
	        
	       E[a]=E[a-4]+C[a][b]-D[a][b][c]/A[a][b]*B[a];
	        
	       B[a]=E[a]*A[a][b]/D[a][b][c]+C[a][b];
	       B[a+5]=A[a][b];
	        
	       float var_a=B[a]-0.453;
	       float var_b=B[a+2]-0.055;
	        
	       float var_c=A[a][b]/0.922;
	       float var_d=A[a][b+1]/0.269;
	        
	       D[a][b][c]=D[a][b][c]*C[a][b];
	       C[a][b]=D[a][b-1][c-4]-E[a]*B[a]/C[a][b]+A[a][b];
	        
	       float var_e=E[a]*0.258;
	       float var_f=E[a+4]*0.639;
	      }

    return 0;
}