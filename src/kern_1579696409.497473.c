#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(340, 850, 230, "ones");
	double *A = create_one_dim_double(20, "ones");
	double *C = create_one_dim_double(20, "ones");

	for (int b = 1; b < 850; b++)
	  for (int a = 1; a < 17; a++)
	  {
	    
	     B[a][b][a]=B[a-1][b-1][a]/C[a]-A[a];
	    
	     A[a]=A[a+3]+B[a][b][a];
	    
	     C[a]=0.715;
	     C[a-1]=0.604;
	    
	     C[a]=C[a]/B[a][b][a];
	     B[a][b][a]=C[a]-B[a][b][a]+A[a];
	  }

    return 0;
}