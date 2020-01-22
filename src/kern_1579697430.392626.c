#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(10, 780, "ones");
	double **A = create_two_dim_double(320, 350, "ones");
	double ***D = create_three_dim_double(10, 260, 50, "ones");
	double ***B = create_three_dim_double(280, 50, 970, "ones");

	for (int b = 3; b < 775; b++)
	  for (int a = 4; a < 9; a++)
	  {
	    
	     C[a][b]=C[a+1][b+5]*D[a][b][a]+0.598-A[a][b];
	    
	     C[a][b]=B[a][b][a]+A[a][b];
	  }

    return 0;
}