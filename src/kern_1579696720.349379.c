#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(800, 980, "random");
	double *A = create_one_dim_double(730, "random");

	for (int d = 2; d < 976; d++)
	  for (int c = 5; c < 729; c++)
	    for (int b = 5; b < 729; b++)
	      for (int a = 5; a < 729; a++)
	      {
	        
	       B[a][b]=B[a-3][b-2]/A[a];
	        
	       B[a][b]=0.082;
	        
	       A[a]=0.709;
	       A[a]=0.952;
	        
	       A[a]=A[a]+B[a][b];
	       B[a][b]=A[a-5]*B[a][b];
	        
	       B[a][b]=A[a]+B[a][b];
	       B[a][b]=A[a+1]*B[a][b];
	        
	       double var_a=B[a][b]*0.212;
	       double var_b=B[a+3][b+2]+0.807;
	      }

    return 0;
}