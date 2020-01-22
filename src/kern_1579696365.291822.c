#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(430, 600, "random");
	double *A = create_one_dim_double(480, "random");
	double *C = create_one_dim_double(40, "random");
	double **B = create_two_dim_double(670, 820, "random");

	for (int d = 0; d < 595; d++)
	  for (int c = 3; c < 40; c++)
	    for (int b = 3; b < 40; b++)
	      for (int a = 3; a < 40; a++)
	      {
	        
	       C[a]=C[a-3]+A[a]/D[a][b];
	        
	       A[a]=A[a-2]+0.05;
	        
	       D[a][b]=D[a][b+5]*B[a][b]-C[a]+A[a];
	        
	       A[a]=A[a+3]*D[a][b]+B[a][b]-C[a];
	        
	       C[a]=A[a]-C[a];
	       A[a]=A[a-1]/D[a][b]+B[a][b];
	        
	       B[a][b]=A[a]*B[a][b]/D[a][b];
	       A[a]=A[a-3]*D[a][b]-B[a][b];
	      }

    return 0;
}