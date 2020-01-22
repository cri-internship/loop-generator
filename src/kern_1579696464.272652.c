#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(120, 640, "ones");
	double *C = create_one_dim_double(70, "ones");
	double ***E = create_three_dim_double(870, 880, 40, "ones");
	double *D = create_one_dim_double(750, "ones");
	double ***A = create_three_dim_double(50, 590, 690, "ones");

	for (int c = 0; c < 638; c++)
	  for (int b = 0; b < 117; b++)
	    for (int a = 0; a < 117; a++)
	    {
	      
	      B[a][b]=B[a+3][b+2]*A[a][b][c];
	    }

    return 0;
}