#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(860, 1000, 740, "zeros");
	float ***A = create_three_dim_float(720, 580, 380, "zeros");
	float *C = create_one_dim_float(180, "zeros");

	for (int c = 1; c < 740; c++)
	  for (int b = 0; b < 1000; b++)
	    for (int a = 3; a < 180; a++)
	    {
	      
	      C[a]=C[a-3]/A[a][b][c]-B[a][b][c];
	      
	      B[a][b][c]=0.107;
	      B[a-2][b][c-1]=0.75;
	    }

    return 0;
}