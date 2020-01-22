#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(10, 100, "random");
	double **A = create_two_dim_double(990, 120, "random");
	double **C = create_two_dim_double(260, 860, "random");

	for (int b = 0; b < 95; b++)
	  for (int a = 0; a < 5; a++)
	  {
	    
	     A[a][b]=A[a+4][b+4]-0.088;
	    
	     A[a][b]=A[a+1][b+4]*0.221;
	    
	     B[a][b]=B[a+2][b+5]-0.758;
	    
	     B[a][b]=B[a+5][b+3]*A[a][b];
	    
	     B[a][b]=B[a+2][b+1]/A[a][b]-C[a][b];
	    
	     A[a][b]=B[a][b]+A[a][b];
	     B[a][b]=B[a+5][b+1]-A[a][b]*C[a][b];
	  }

    return 0;
}