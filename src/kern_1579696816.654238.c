#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(810, 500, "zeros");
	double **A = create_two_dim_double(760, 270, "zeros");
	double ***B = create_three_dim_double(40, 230, 60, "zeros");

	for (int c = 0; c < 56; c++)
	  for (int b = 0; b < 225; b++)
	    for (int a = 0; a < 37; a++)
	    {
	      
	      B[a][b][c]=B[a+3][b+5][c+4]/0.081;
	    }

    return 0;
}