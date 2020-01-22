#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(330, 670, "random");
	double ***B = create_three_dim_double(780, 530, 710, "random");

	for (int b = 3; b < 527; b++)
	  for (int a = 4; a < 327; a++)
	  {
	    
	     A[a][b]=A[a+3][b+5]*B[a][b][a];
	    
	     B[a][b][a]=A[a][b];
	     B[a+1][b+3][a+4]=0.723;
	    
	     A[a][b]=B[a][b][a]-A[a][b];
	     B[a][b][a]=B[a-4][b-3][a-3]+A[a][b];
	  }

    return 0;
}