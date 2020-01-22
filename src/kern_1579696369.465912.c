#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(390, 830, 90, "zeros");
	float **C = create_two_dim_float(340, 760, "zeros");
	float *B = create_one_dim_float(430, "zeros");

	for (int c = 0; c < 755; c++)
	  for (int b = 2; b < 335; b++)
	    for (int a = 2; a < 335; a++)
	    {
	      
	      B[a]=B[a-2]-A[a][b][c];
	      
	      C[a][b]=C[a+5][b+5]+B[a];
	    }

    return 0;
}