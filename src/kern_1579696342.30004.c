#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(430, 500, "ones");
	float **B = create_two_dim_float(40, 740, "ones");
	float *A = create_one_dim_float(440, "ones");
	float *D = create_one_dim_float(160, "ones");
	float *C = create_one_dim_float(880, "ones");

	for (int c = 0; c < 499; c++)
	  for (int b = 5; b < 428; b++)
	    for (int a = 5; a < 428; a++)
	    {
	      
	      A[a]=A[a-1]*E[a][b]-C[a]/D[a];
	      
	      C[a]=C[a-5]-0.453;
	      
	      A[a]=0.192;
	      
	      E[a][b]=B[a][b]+A[a];
	      E[a+2][b+1]=B[a][b]*C[a];
	      
	      C[a]=E[a][b]-B[a][b]*D[a];
	      
	      E[a][b]=C[a]*B[a][b];
	      B[a][b]=C[a+2]*D[a]-B[a][b]+A[a]/E[a][b];
	    }

    return 0;
}