#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(110, 130, "zeros");
	double **A = create_two_dim_double(370, 160, "zeros");

	for (int d = 1; d < 125; d++)
	  for (int c = 5; c < 107; c++)
	    for (int b = 5; b < 107; b++)
	      for (int a = 5; a < 107; a++)
	      {
	        
	       B[a][b]=B[a+2][b]/0.769;
	        
	       A[a][b]=A[a+2][b+2]/0.78;
	        
	       B[a][b]=B[a+3][b+5]*0.432;
	        
	       B[a][b]=B[a][b]/A[a][b];
	       A[a][b]=B[a-5][b-1]+0.373;
	      }

    return 0;
}