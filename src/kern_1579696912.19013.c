#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(910, 90, "zeros");
	double **A = create_two_dim_double(480, 880, "zeros");
	double ***D = create_three_dim_double(410, 940, 750, "zeros");
	double ***C = create_three_dim_double(710, 260, 630, "zeros");

	for (int c = 3; c < 750; c++)
	  for (int b = 4; b < 90; b++)
	    for (int a = 5; a < 410; a++)
	    {
	      
	      D[a][b][c]=D[a-3][b][c-3]-B[a][b]+0.017;
	      
	      A[a][b]=A[a-3][b-2]*0.992;
	      
	      B[a][b]=B[a-5][b-4]/0.172;
	    }

    return 0;
}