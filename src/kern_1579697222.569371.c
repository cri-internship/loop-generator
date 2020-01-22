#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(490, "random");
	double **B = create_two_dim_double(60, 440, "random");
	double **A = create_two_dim_double(580, 410, "random");

	for (int b = 5; b < 408; b++)
	  for (int a = 4; a < 57; a++)
	  {
	    
	     B[a][b]=B[a-4][b-1]*0.709;
	    
	     B[a][b]=B[a+3][b+4]/C[a];
	    
	     A[a][b]=A[a+3][b+2]-0.243;
	    
	     B[a][b]=B[a+2][b+2]-0.289;
	    
	     C[a]=0.511;
	     C[a+3]=0.372;
	    
	     A[a][b]=0.161-B[a][b];
	  }

    return 0;
}