#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(350, "random");
	double **B = create_two_dim_double(570, 80, "random");

	for (int b = 3; b < 76; b++)
	  for (int a = 5; a < 350; a++)
	  {
	    
	     A[a]=A[a-5]*0.096;
	    
	     A[a]=A[a-4]*0.094;
	    
	     B[a][b]=B[a-1][b-3]/A[a];
	    
	     A[a]=A[a]/B[a][b];
	    
	     B[a][b]=B[a][b]-A[a];
	     B[a][b]=B[a+5][b+4]/A[a];
	    
	     B[a][b]=B[a][b]/0.599;
	     A[a]=B[a][b+2]+0.701;
	  }

    return 0;
}