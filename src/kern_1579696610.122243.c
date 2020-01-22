#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(880, 420, 600, "ones");
	double *B = create_one_dim_double(890, "ones");

	for (int c = 5; c < 598; c++)
	  for (int b = 2; b < 415; b++)
	    for (int a = 3; a < 875; a++)
	    {
	      
	      A[a][b][c]=A[a-3][b-2][c-5]*B[a];
	      
	      B[a]=B[a+2]-A[a][b][c];
	      
	      A[a][b][c]=A[a+5][b+5][c+1]/0.403;
	      
	      A[a][b][c]=A[a+1][b+5][c]/0.999;
	      
	      B[a]=A[a][b][c];
	      
	      double var_a=A[a][b][c]+0.124;
	      double var_b=A[a+4][b+2][c+2]*0.843;
	    }

    return 0;
}