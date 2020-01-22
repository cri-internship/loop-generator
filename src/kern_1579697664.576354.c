#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(380, 770, 390, "ones");
	float **B = create_two_dim_float(10, 720, "ones");
	float ***C = create_three_dim_float(310, 300, 220, "ones");

	for (int d = 3; d < 385; d++)
	  for (int c = 5; c < 717; c++)
	    for (int b = 3; b < 5; b++)
	      for (int a = 3; a < 5; a++)
	      {
	        
	       B[a][b]=0.692;
	       float  var_a=B[a][b]/0.898;
	        
	       A[a][b][c]=A[a+2][b+2][c+5]-0.199;
	        
	       B[a][b]=0.609;
	        
	       C[a][b][c]=A[a][b][c]-C[a][b][c]+B[a][b];
	       B[a][b]=A[a-3][b-5][c-3]+C[a][b][c]*B[a][b];
	      }

    return 0;
}