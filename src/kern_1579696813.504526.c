#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(140, 860, 690, "ones");
	double **A = create_two_dim_double(290, 990, "ones");
	double **C = create_two_dim_double(880, 650, "ones");

	for (int b = 0; b < 650; b++)
	  for (int a = 2; a < 287; a++)
	  {
	    
	     C[a][b]=C[a-2][b]+0.866;
	    
	     A[a][b]=C[a][b]+B[a][b][a];
	     A[a+3][b+5]=B[a][b][a];
	  }

    return 0;
}