#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(280, "zeros");
	double *D = create_one_dim_double(680, "zeros");
	double *B = create_one_dim_double(610, "zeros");
	double *C = create_one_dim_double(620, "zeros");
	double *E = create_one_dim_double(780, "zeros");

	for (int c = 5; c < 280; c++)
	  for (int b = 5; b < 280; b++)
	    for (int a = 5; a < 280; a++)
	    {
	      
	      C[a]=C[a-4]*B[a];
	      
	      D[a]=D[a+3]+C[a]/E[a]-A[a]*C[a];
	      
	      A[a]=0.122-C[a]/B[a];
	      A[a-5]=D[a];
	      
	      C[a]=E[a]/A[a]*D[a];
	      
	      double var_a=C[a]+0.152;
	      
	      double var_c=C[a]*0.394;
	      double var_d=C[a-5]*0.664;
	    }

    return 0;
}