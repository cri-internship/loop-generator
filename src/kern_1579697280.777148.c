#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(480, "random");
	float *B = create_one_dim_float(10, "random");
	float ***C = create_three_dim_float(90, 620, 780, "random");
	float *D = create_one_dim_float(490, "random");

	for (int d = 5; d < 780; d++)
	  for (int c = 3; c < 620; c++)
	    for (int b = 4; b < 90; b++)
	      for (int a = 4; a < 90; a++)
	      {
	        
	       C[a][b][c]=C[a-4][b-3][c-5]*B[a]/D[a]-A[a];
	        
	       A[a]=0.525;
	       A[a+5]=0.386;
	      }

    return 0;
}