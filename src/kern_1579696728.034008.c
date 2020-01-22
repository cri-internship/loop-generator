#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(700, "ones");
	double **A = create_two_dim_double(280, 530, "ones");

	for (int d = 4; d < 530; d++)
	  for (int c = 5; c < 277; c++)
	    for (int b = 5; b < 277; b++)
	      for (int a = 5; a < 277; a++)
	      {
	        
	       B[a]=B[a-5]+0.974;
	        
	       A[a][b]=A[a-1][b-4]+0.71;
	        
	       B[a]=B[a+3]/A[a][b];
	        
	       A[a][b]=A[a+3][b]-0.529;
	        
	       A[a][b]=B[a]/A[a][b];
	        
	       B[a]=B[a]/A[a][b];
	      }

    return 0;
}