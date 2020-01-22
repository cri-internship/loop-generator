#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(40, "zeros");
	double **C = create_two_dim_double(710, 580, "zeros");
	double **D = create_two_dim_double(580, 760, "zeros");
	double **B = create_two_dim_double(740, 840, "zeros");

	for (int d = 3; d < 578; d++)
	  for (int c = 3; c < 579; c++)
	    for (int b = 3; b < 579; b++)
	      for (int a = 3; a < 579; a++)
	      {
	        
	       D[a][b]=D[a-3][b-2]/B[a][b]+A[a]-C[a][b];
	        
	       C[a][b]=C[a-3][b]/0.243;
	        
	       D[a][b]=D[a][b+3]/C[a][b];
	        
	       B[a][b]=D[a][b]-C[a][b]+0.643;
	       B[a+3][b+4]=A[a]-C[a][b]/D[a][b];
	        
	       B[a][b]=A[a]/D[a][b]-C[a][b];
	        
	       A[a]=C[a][b]-A[a];
	       D[a][b]=C[a+2][b+2]-0.898/B[a][b];
	      }

    return 0;
}