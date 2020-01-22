#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(430, 190, "ones");
	double **B = create_two_dim_double(300, 520, "ones");

	for (int c = 5; c < 189; c++)
	  for (int b = 5; b < 300; b++)
	    for (int a = 5; a < 300; a++)
	    {
	      
	      B[a][b]=B[a][b-4]*0.483;
	      
	      B[a][b]=B[a-5][b]/A[a][b];
	      
	      A[a][b]=A[a-2][b-4]*0.51;
	      
	      A[a][b]=A[a-4][b-5]-0.812;
	      
	      B[a][b]=A[a][b]+B[a][b];
	      A[a][b]=A[a][b-4]/B[a][b];
	    }

    return 0;
}