#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(930, 990, "random");
	double **B = create_two_dim_double(190, 690, "random");

	for (int d = 1; d < 688; d++)
	  for (int c = 0; c < 185; c++)
	    for (int b = 0; b < 185; b++)
	      for (int a = 0; a < 185; a++)
	      {
	        
	       A[a][b]=0.865;
	       A[a+1][b+4]=B[a][b];
	        
	       B[a][b]=0.533;
	       B[a+5][b+2]=0.155;
	        
	       A[a][b]=0.477;
	      }

    return 0;
}