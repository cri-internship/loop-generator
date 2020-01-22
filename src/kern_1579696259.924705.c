#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(960, 120, "ones");
	int **C = create_two_dim_int(180, 270, "ones");
	int **B = create_two_dim_int(470, 310, "ones");

	for (int d = 5; d < 118; d++)
	  for (int c = 5; c < 178; c++)
	    for (int b = 5; b < 178; b++)
	      for (int a = 5; a < 178; a++)
	      {
	        
	       B[a][b]=B[a+3][b+4]+26;
	        
	       A[a][b]=A[a+5][b+2]*49;
	        
	       C[a][b]=C[a+2][b+5]+49;
	        
	       A[a][b]=10;
	        
	       B[a][b]=47;
	        
	       int var_a=C[a][b]-36;
	       int var_b=C[a-4][b-5]*36;
	        
	       B[a][b]=C[a][b]-B[a][b];
	       C[a][b]=C[a+1][b+4]-B[a][b];
	      }

    return 0;
}