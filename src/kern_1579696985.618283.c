#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(720, 30, 100, "ones");
	double *C = create_one_dim_double(410, "ones");
	double *B = create_one_dim_double(750, "ones");

	for (int d = 5; d < 97; d++)
	  for (int c = 4; c < 27; c++)
	    for (int b = 2; b < 718; b++)
	      for (int a = 2; a < 718; a++)
	      {
	        
	       A[a][b][c]=A[a-2][b-1][c]-0.665;
	        
	       A[a][b][c]=A[a-2][b-4][c-5]-0.224;
	        
	       float  var_a=A[a][b][c]*0.033;
	        
	       A[a][b][c]=A[a-2][b-2][c]/0.464;
	        
	       A[a][b][c]=A[a+1][b+3][c+3]+0.619;
	        
	       A[a][b][c]=A[a+2][b+2][c]+B[a];
	      }

    return 0;
}