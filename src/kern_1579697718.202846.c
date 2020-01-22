#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(700, "zeros");
	float *C = create_one_dim_float(150, "zeros");
	float *A = create_one_dim_float(220, "zeros");
	float ***B = create_three_dim_float(720, 180, 570, "zeros");

	for (int d = 3; d < 220; d++)
	  for (int c = 3; c < 220; c++)
	    for (int b = 3; b < 220; b++)
	      for (int a = 3; a < 220; a++)
	      {
	        
	       D[a]=0.416;
	       D[a]=0.589;
	        
	       A[a]=0.209;
	       A[a-3]=0.814;
	        
	       C[a]=D[a]-A[a]/B[a][b][c]*C[a];
	       B[a][b][c]=D[a+2]*A[a]+B[a][b][c];
	      }

    return 0;
}