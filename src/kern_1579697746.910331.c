#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(930, 700, "zeros");
	double **B = create_two_dim_double(450, 570, "zeros");

	for (int b = 5; b < 566; b++)
	  for (int a = 3; a < 446; a++)
	  {
	    
	     A[a][b]=A[a-2][b-2]-B[a][b];
	    
	     B[a][b]=B[a-3][b-5]*0.705;
	    
	     B[a][b]=B[a-3][b-3]/A[a][b];
	    
	     B[a][b]=B[a][b+4]-A[a][b];
	    
	     B[a][b]=B[a+4][b+3]/0.385;
	    
	     A[a][b]=0.5;
	    
	     A[a][b]=B[a][b]+A[a][b];
	     B[a][b]=B[a+4][b+1]-0.351;
	  }

    return 0;
}