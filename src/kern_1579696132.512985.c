#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(220, 950, 390, "zeros");
	double **A = create_two_dim_double(780, 460, "zeros");
	double *C = create_one_dim_double(830, "zeros");

	for (int b = 5; b < 460; b++)
	  for (int a = 3; a < 220; a++)
	  {
	    
	     B[a][b][a]=B[a-3][b][a-1]/0.708;
	    
	     A[a][b]=A[a][b-5]-C[a];
	    
	     C[a]=0.817;
	     C[a+1]=0.525;
	    
	     C[a]=C[a]*A[a][b]+B[a][b][a];
	     B[a][b][a]=C[a]+A[a][b]/B[a][b][a];
	  }

    return 0;
}