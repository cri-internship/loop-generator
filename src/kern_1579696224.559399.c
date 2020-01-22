#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(220, 800, "random");
	double *A = create_one_dim_double(660, "random");

	for (int d = 2; d < 795; d++)
	  for (int c = 3; c < 219; c++)
	    for (int b = 3; b < 219; b++)
	      for (int a = 3; a < 219; a++)
	      {
	        
	       B[a][b]=B[a-2][b-2]/A[a];
	        
	       A[a]=A[a-3]+B[a][b];
	        
	       B[a][b]=B[a-2][b-1]-A[a];
	        
	       B[a][b]=B[a+1][b+5]+A[a];
	        
	       B[a][b]=B[a][b+2]*0.138;
	        
	       B[a][b]=A[a]*B[a][b];
	       A[a]=B[a][b];
	        
	       A[a]=A[a]/B[a][b];
	       A[a]=0.681;
	      }

    return 0;
}