#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(40, 960, "random");
	double **B = create_two_dim_double(730, 400, "random");
	double **C = create_two_dim_double(780, 790, "random");

	for (int c = 2; c < 398; c++)
	  for (int b = 4; b < 40; b++)
	    for (int a = 4; a < 40; a++)
	    {
	      
	      A[a][b]=A[a-3][b]+B[a][b]-C[a][b];
	      
	      C[a][b]=C[a-4][b-2]/0.633;
	      
	      A[a][b]=0.843;
	      
	      C[a][b]=C[a+2][b+4]-A[a][b]*B[a][b];
	      
	      B[a][b]=0.025;
	      B[a+1][b+2]=0.788;
	    }

    return 0;
}