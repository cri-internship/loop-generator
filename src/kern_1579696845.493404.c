#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(470, "zeros");
	int **B = create_two_dim_int(650, 840, "zeros");

	for (int d = 5; d < 837; d++)
	  for (int c = 4; c < 466; c++)
	    for (int b = 4; b < 466; b++)
	      for (int a = 4; a < 466; a++)
	      {
	        
	       B[a][b]=B[a+3][b+2]/A[a];
	        
	       A[a]=A[a+1]*B[a][b];
	        
	       B[a][b]=3;
	        
	       A[a]=35;
	        
	       int var_a=A[a]+5;
	       int var_b=A[a+2]-5;
	        
	       B[a][b]=B[a][b]*39;
	       A[a]=B[a-1][b-5]-A[a];
	        
	       int var_c=B[a][b]-27;
	       int var_d=B[a-4][b-4]-6;
	      }

    return 0;
}