#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(520, "random");
	float *C = create_one_dim_float(970, "random");
	float ***B = create_three_dim_float(550, 770, 720, "random");
	float ***D = create_three_dim_float(120, 810, 190, "random");

	for (int c = 0; c < 720; c++)
	  for (int b = 3; b < 770; b++)
	    for (int a = 2; a < 550; a++)
	    {
	      
	      C[a]=C[a-2]*0.975;
	      
	      B[a][b][c]=B[a][b][c]*0.083;
	      C[a]=B[a-2][b-3][c]+A[a]/C[a]*D[a][b][c];
	    }

    return 0;
}