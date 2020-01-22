#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(480, 590, "ones");
	int *A = create_one_dim_int(990, "ones");

	for (int d = 2; d < 586; d++)
	  for (int c = 4; c < 479; c++)
	    for (int b = 4; b < 479; b++)
	      for (int a = 4; a < 479; a++)
	      {
	        
	       A[a]=3;
	       float  var_a=A[a]+29;
	        
	       A[a]=A[a+3]+B[a][b];
	        
	       int var_b=A[a]+11;
	       int var_c=A[a+2]-24;
	        
	       B[a][b]=B[a][b]-A[a];
	       A[a]=B[a-4][b-2]*A[a];
	        
	       A[a]=B[a][b]*10;
	       A[a]=B[a+1][b+4]*A[a];
	      }

    return 0;
}