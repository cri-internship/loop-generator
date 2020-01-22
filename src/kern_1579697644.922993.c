#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(370, "ones");
	double **C = create_two_dim_double(250, 640, "ones");
	double *A = create_one_dim_double(390, "ones");
	double *D = create_one_dim_double(880, "ones");

	for (int d = 2; d < 369; d++)
	  for (int c = 2; c < 369; c++)
	    for (int b = 2; b < 369; b++)
	      for (int a = 2; a < 369; a++)
	      {
	        
	       A[a]=0.254;
	       float  var_a=A[a]*0.26;
	        
	       A[a]=A[a-1]-0.458;
	        
	       D[a]=D[a-2]*B[a]+C[a][b]/A[a];
	        
	       B[a]=B[a+1]/D[a]*C[a][b];
	        
	       D[a]=0.696;
	        
	       D[a]=D[a]/A[a]+C[a][b]*B[a];
	       B[a]=D[a+2]/C[a][b]+B[a]-A[a];
	      }

    return 0;
}