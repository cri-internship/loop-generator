#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(550, 580, "zeros");
	float **B = create_two_dim_float(160, 930, "zeros");

	for (int d = 2; d < 579; d++)
	  for (int c = 4; c < 160; c++)
	    for (int b = 4; b < 160; b++)
	      for (int a = 4; a < 160; a++)
	      {
	        
	       A[a][b]=A[a+4][b+1]-B[a][b];
	        
	       B[a][b]=A[a][b]-B[a][b];
	       A[a][b]=A[a-2][b-2]+B[a][b];
	        
	       B[a][b]=B[a][b]*A[a][b];
	       B[a][b]=B[a-4][b-1]-A[a][b];
	      }

    return 0;
}