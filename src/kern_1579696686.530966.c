#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(230, "ones");
	float *D = create_one_dim_float(970, "ones");
	float **A = create_two_dim_float(320, 920, "ones");
	float ***E = create_three_dim_float(520, 90, 450, "ones");
	float ***B = create_three_dim_float(860, 600, 260, "ones");

	for (int c = 1; c < 450; c++)
	  for (int b = 5; b < 90; b++)
	    for (int a = 4; a < 227; a++)
	    {
	      
	      C[a]=C[a-4]/0.055;
	      
	      C[a]=C[a-3]*0.692;
	      
	      C[a]=C[a+3]*0.897;
	      
	      E[a][b][c]=C[a]+B[a][b][c]/A[a][b]-D[a];
	      E[a-3][b-5][c-1]=C[a]+D[a]-0.631;
	      
	      float var_a=D[a]*0.842;
	      float var_b=D[a-2]+0.941;
	    }

    return 0;
}