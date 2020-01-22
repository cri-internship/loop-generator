#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(990, "ones");
	double **C = create_two_dim_double(930, 200, "ones");
	double **B = create_two_dim_double(620, 30, "ones");

	for (int c = 0; c < 29; c++)
	  for (int b = 0; b < 618; b++)
	    for (int a = 0; a < 618; a++)
	    {
	      
	      B[a][b]=0.138;
	      B[a+2][b+1]=0.799;
	      
	      A[a]=C[a][b]-A[a];
	      B[a][b]=C[a][b+1]-B[a][b]+A[a];
	    }

    return 0;
}