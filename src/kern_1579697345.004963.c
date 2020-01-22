#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(520, "ones");
	double *C = create_one_dim_double(480, "ones");
	double *B = create_one_dim_double(730, "ones");
	double *E = create_one_dim_double(540, "ones");
	double *D = create_one_dim_double(910, "ones");

	for (int c = 5; c < 540; c++)
	  for (int b = 5; b < 540; b++)
	    for (int a = 5; a < 540; a++)
	    {
	      
	      E[a]=E[a-5]-0.603;
	      
	      E[a]=E[a-4]/B[a];
	      
	      D[a]=A[a]*C[a]+E[a]-E[a];
	      D[a+2]=E[a];
	      
	      B[a]=0.679;
	      B[a-3]=E[a];
	    }

    return 0;
}