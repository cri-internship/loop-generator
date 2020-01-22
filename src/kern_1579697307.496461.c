#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(530, 890, "zeros");
	int **A = create_two_dim_int(870, 500, "zeros");

	for (int d = 1; d < 495; d++)
	  for (int c = 3; c < 527; c++)
	    for (int b = 3; b < 527; b++)
	      for (int a = 3; a < 527; a++)
	      {
	        
	       A[a][b]=B[a][b];
	       A[a][b]=A[a][b]/B[a][b];
	        
	       B[a][b]=B[a-3][b-1]*3;
	        
	       A[a][b]=A[a+3][b+5]*B[a][b];
	        
	       B[a][b]=B[a+3][b+2]+A[a][b];
	        
	       int var_a=A[a][b]/47;
	       int var_b=A[a+5][b]/50;
	      }

    return 0;
}