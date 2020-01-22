#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(580, 440, 860, "random");
	double **C = create_two_dim_double(920, 310, "random");
	double *A = create_one_dim_double(410, "random");

	for (int b = 1; b < 305; b++)
	  for (int a = 0; a < 577; a++)
	  {
	    
	     B[a][b][a]=0.794;
	     B[a][b][a+3]=0.501;
	    
	     C[a][b]=C[a][b]+B[a][b][a]/0.188;
	     B[a][b][a]=C[a][b-1]*A[a];
	    
	     A[a]=C[a][b]/B[a][b][a]*0.689;
	     B[a][b][a]=C[a+1][b+5]+0.358-B[a][b][a];
	  }

    return 0;
}