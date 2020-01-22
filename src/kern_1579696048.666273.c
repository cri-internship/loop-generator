#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(570, "random");
	float **A = create_two_dim_float(580, 450, "random");
	float *D = create_one_dim_float(430, "random");
	float ***E = create_three_dim_float(360, 40, 520, "random");
	float **B = create_two_dim_float(770, 840, "random");

	for (int d = 0; d < 517; d++)
	  for (int c = 1; c < 35; c++)
	    for (int b = 3; b < 355; b++)
	      for (int a = 3; a < 355; a++)
	      {
	        
	       B[a][b]=B[a][b-1]-C[a]+E[a][b][c];
	        
	       D[a]=D[a-1]-A[a][b]/B[a][b]+B[a][b];
	        
	       E[a][b][c]=E[a+5][b+1][c+1]-0.039;
	        
	       E[a][b][c]=0.385+C[a]-B[a][b];
	        
	       float var_a=C[a]-0.922;
	       float var_b=C[a-3]-0.641;
	        
	       E[a][b][c]=D[a]/0.005+C[a];
	       D[a]=D[a]*A[a][b]+E[a][b][c];
	        
	       float var_c=E[a][b][c]*0.144;
	       float var_d=E[a][b][c+2]/0.392;
	      }

    return 0;
}