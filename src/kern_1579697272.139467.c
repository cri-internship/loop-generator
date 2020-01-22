#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(900, "zeros");
	double **D = create_two_dim_double(380, 110, "zeros");
	double ***A = create_three_dim_double(990, 250, 70, "zeros");
	double ***E = create_three_dim_double(390, 800, 140, "zeros");
	double *C = create_one_dim_double(400, "zeros");

	for (int c = 0; c < 67; c++)
	  for (int b = 0; b < 250; b++)
	    for (int a = 0; a < 988; a++)
	    {
	      
	      A[a][b][c]=A[a+2][b][c+3]*0.123;
	    }

    return 0;
}