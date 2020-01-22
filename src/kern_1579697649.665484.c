#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(250, "zeros");
	double *C = create_one_dim_double(410, "zeros");
	double ***B = create_three_dim_double(830, 550, 440, "zeros");
	double *A = create_one_dim_double(80, "zeros");

	for (int b = 0; b < 550; b++)
	  for (int a = 5; a < 75; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b][a-3]+0.824;
	    
	     A[a]=A[a+5]/0.868;
	    
	     A[a]=B[a][b][a];
	    
	     B[a][b][a]=D[a]/A[a]*C[a];
	     C[a]=D[a+4]-A[a]+B[a][b][a];
	  }

    return 0;
}