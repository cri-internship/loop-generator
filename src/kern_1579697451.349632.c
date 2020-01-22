#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(390, 990, 300, "zeros");
	float *A = create_one_dim_float(190, "zeros");

	for (int c = 0; c < 185; c++)
	  for (int b = 0; b < 185; b++)
	    for (int a = 0; a < 185; a++)
	    {
	      
	      A[a]=A[a+5]+B[a][b][c];
	      
	      A[a]=B[a][b][c];
	    }

    return 0;
}