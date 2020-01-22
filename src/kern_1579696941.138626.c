#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(690, 180, "zeros");
	double ***A = create_three_dim_double(880, 610, 730, "zeros");

	for (int c = 0; c < 728; c++)
	  for (int b = 5; b < 179; b++)
	    for (int a = 5; a < 688; a++)
	    {
	      
	      A[a][b][c]=A[a+4][b+2][c+2]*B[a][b];
	      
	      B[a][b]=A[a][b][c];
	      B[a-5][b-5]=A[a][b][c];
	      
	      double var_a=B[a][b]/0.25;
	      double var_b=B[a+2][b+1]-0.653;
	    }

    return 0;
}