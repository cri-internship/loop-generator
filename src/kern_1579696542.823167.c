#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(590, "random");
	double *C = create_one_dim_double(850, "random");
	double **A = create_two_dim_double(120, 550, "random");

	for (int d = 0; d < 546; d++)
	  for (int c = 5; c < 115; c++)
	    for (int b = 5; b < 115; b++)
	      for (int a = 5; a < 115; a++)
	      {
	        
	       B[a]=B[a-5]/0.564;
	        
	       B[a]=A[a][b];
	        
	       A[a][b]=B[a];
	       A[a+5][b+4]=C[a]/B[a];
	        
	       C[a]=B[a]*C[a];
	       B[a]=B[a+4]*A[a][b];
	      }

    return 0;
}