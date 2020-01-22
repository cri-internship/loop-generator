#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(820, 500, "zeros");
	double *A = create_one_dim_double(320, "zeros");
	double **C = create_two_dim_double(740, 590, "zeros");

	for (int c = 0; c < 585; c++)
	  for (int b = 0; b < 316; b++)
	    for (int a = 0; a < 316; a++)
	    {
	      
	      C[a][b]=0.766;
	      C[a+2][b+2]=0.104;
	      
	      A[a]=B[a][b];
	      A[a+4]=C[a][b]/0.111;
	      
	      C[a][b]=0.392-A[a];
	    }

    return 0;
}