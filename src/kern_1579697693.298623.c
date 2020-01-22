#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(420, 20, "random");
	double **A = create_two_dim_double(650, 880, "random");
	double **D = create_two_dim_double(790, 620, "random");
	double **C = create_two_dim_double(290, 170, "random");

	for (int d = 4; d < 19; d++)
	  for (int c = 5; c < 415; c++)
	    for (int b = 5; b < 415; b++)
	      for (int a = 5; a < 415; a++)
	      {
	        
	       A[a][b]=A[a+5][b+3]*0.538;
	        
	       A[a][b]=B[a][b]+D[a][b]-C[a][b];
	        
	       B[a][b]=0.939;
	       B[a+1][b]=0.303;
	        
	       D[a][b]=B[a][b]+A[a][b]/C[a][b];
	       A[a][b]=B[a+5][b+1]+A[a][b]/C[a][b];
	      }

    return 0;
}