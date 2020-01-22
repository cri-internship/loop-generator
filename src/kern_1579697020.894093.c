#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(60, 640, "random");
	double **C = create_two_dim_double(140, 380, "random");
	double *A = create_one_dim_double(540, "random");

	for (int b = 5; b < 375; b++)
	  for (int a = 5; a < 55; a++)
	  {
	    
	     A[a]=A[a-5]*0.937;
	    
	     A[a]=A[a-3]+0.483;
	    
	     B[a][b]=B[a-3][b-5]+0.833;
	    
	     A[a]=A[a+3]+0.076;
	    
	     B[a][b]=B[a+5][b+5]+0.998;
	    
	     A[a]=C[a][b]/A[a]-B[a][b];
	     C[a][b]=C[a+5][b+5]*A[a]/B[a][b];
	    
	     B[a][b]=C[a][b]+B[a][b];
	     C[a][b]=C[a-5][b-4]+A[a]-0.127;
	  }

    return 0;
}