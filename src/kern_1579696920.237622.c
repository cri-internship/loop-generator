#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(260, "ones");
	float **B = create_two_dim_float(110, 390, "ones");
	float ***C = create_three_dim_float(190, 180, 1000, "ones");
	float ***A = create_three_dim_float(530, 810, 840, "ones");
	float ***D = create_three_dim_float(440, 710, 920, "ones");

	for (int c = 0; c < 995; c++)
	  for (int b = 0; b < 175; b++)
	    for (int a = 0; a < 189; a++)
	    {
	      
	      E[a]=C[a][b][c]/B[a][b]+0.902*E[a];
	      C[a][b][c]=C[a+1][b+5][c+5]/0.849*B[a][b];
	    }

    return 0;
}