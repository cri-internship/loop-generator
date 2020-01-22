#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(720, 100, 920, "zeros");
	double **B = create_two_dim_double(160, 770, "zeros");
	double **A = create_two_dim_double(210, 260, "zeros");

	for (int c = 3; c < 258; c++)
	  for (int b = 0; b < 160; b++)
	    for (int a = 0; a < 160; a++)
	    {
	      
	      B[a][b]=B[a][b-3]+0.657;
	      
	      A[a][b]=A[a+3][b+2]/0.218;
	      
	      B[a][b]=B[a][b+5]/C[a][b][c]-0.85;
	    }

    return 0;
}