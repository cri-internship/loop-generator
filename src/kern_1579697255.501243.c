#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(400, "random");
	float *C = create_one_dim_float(530, "random");
	float **D = create_two_dim_float(140, 190, "random");
	float *E = create_one_dim_float(780, "random");
	float ***A = create_three_dim_float(330, 460, 90, "random");

	for (int d = 1; d < 90; d++)
	  for (int c = 2; c < 460; c++)
	    for (int b = 4; b < 330; b++)
	      for (int a = 4; a < 330; a++)
	      {
	        
	       E[a]=0.343;
	       E[a+2]=0.981;
	        
	       C[a]=0.252;
	       C[a]=0.771;
	        
	       A[a][b][c]=0.3;
	       A[a-4][b-2][c-1]=0.854;
	        
	       B[a]=0.029;
	       B[a-1]=0.909;
	      }

    return 0;
}