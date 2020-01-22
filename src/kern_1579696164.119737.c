#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(450, "ones");
	double ***C = create_three_dim_double(740, 980, 210, "ones");
	double **A = create_two_dim_double(520, 830, "ones");
	double **B = create_two_dim_double(60, 980, "ones");

	for (int b = 0; b < 826; b++)
	  for (int a = 0; a < 517; a++)
	  {
	    
	     A[a][b]=A[a+1][b]+C[a][b][a]-D[a];
	    
	     A[a][b]=A[a+3][b+4]*B[a][b]+D[a];
	  }

    return 0;
}