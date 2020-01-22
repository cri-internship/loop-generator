#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(200, "ones");
	float *D = create_one_dim_float(900, "ones");
	float **C = create_two_dim_float(980, 510, "ones");
	float ***B = create_three_dim_float(660, 530, 640, "ones");

	for (int d = 0; d < 640; d++)
	  for (int c = 3; c < 530; c++)
	    for (int b = 4; b < 660; b++)
	      for (int a = 4; a < 660; a++)
	      {
	        
	       D[a]=D[a-4]-C[a][b];
	        
	       D[a]=B[a][b][c]*A[a]/D[a]-C[a][b];
	       B[a][b][c]=B[a-2][b-3][c]/A[a]+0.286;
	      }

    return 0;
}