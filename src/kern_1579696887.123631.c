#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(140, 80, 190, "zeros");
	double **A = create_two_dim_double(880, 410, "zeros");
	double **C = create_two_dim_double(880, 40, "zeros");
	double *D = create_one_dim_double(670, "zeros");

	for (int c = 0; c < 187; c++)
	  for (int b = 0; b < 79; b++)
	    for (int a = 0; a < 138; a++)
	    {
	      
	      B[a][b][c]=B[a+2][b+1][c+3]-0.715;
	    }

    return 0;
}