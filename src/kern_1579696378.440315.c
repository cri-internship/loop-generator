#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(170, 680, "random");
	float **A = create_two_dim_float(300, 340, "random");

	for (int d = 5; d < 335; d++)
	  for (int c = 5; c < 296; c++)
	    for (int b = 5; b < 296; b++)
	      for (int a = 5; a < 296; a++)
	      {
	        
	       A[a][b]=A[a-3][b-5]-0.741;
	        
	       A[a][b]=A[a-5][b-4]*B[a][b];
	        
	       B[a][b]=A[a][b]-0.612;
	       A[a][b]=A[a+4][b+5]-B[a][b];
	      }

    return 0;
}