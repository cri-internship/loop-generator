#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(680, 850, "random");
	double *A = create_one_dim_double(80, "random");

	for (int d = 5; d < 845; d++)
	  for (int c = 4; c < 75; c++)
	    for (int b = 4; b < 75; b++)
	      for (int a = 4; a < 75; a++)
	      {
	        
	       B[a][b]=B[a+5][b+5]-A[a];
	        
	       A[a]=0.997;
	       A[a-1]=0.698;
	        
	       A[a]=B[a][b];
	        
	       B[a][b]=A[a];
	      }

    return 0;
}