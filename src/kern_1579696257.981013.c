#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(120, "random");
	float *A = create_one_dim_float(780, "random");
	float ***B = create_three_dim_float(560, 920, 130, "random");
	float **C = create_two_dim_float(680, 170, "random");

	for (int d = 0; d < 128; d++)
	  for (int c = 5; c < 165; c++)
	    for (int b = 2; b < 555; b++)
	      for (int a = 2; a < 555; a++)
	      {
	        
	       A[a]=D[a];
	       A[a]=A[a]*B[a][b][c]-C[a][b];
	        
	       C[a][b]=C[a-2][b-5]*0.189;
	        
	       C[a][b]=C[a+2][b+4]*B[a][b][c];
	        
	       C[a][b]=C[a+1][b+5]+A[a]/D[a];
	        
	       float var_a=B[a][b][c]-0.971;
	       float var_b=B[a+5][b+1][c+2]-0.156;
	      }

    return 0;
}