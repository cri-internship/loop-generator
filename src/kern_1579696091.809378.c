#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(410, 420, 50, "ones");
	int *C = create_one_dim_int(340, "ones");
	int *B = create_one_dim_int(780, "ones");

	for (int d = 5; d < 335; d++)
	  for (int c = 5; c < 335; c++)
	    for (int b = 5; b < 335; b++)
	      for (int a = 5; a < 335; a++)
	      {
	        
	       B[a]=B[a+2]*0-C[a];
	        
	       C[a]=0;
	       C[a-5]=B[a]+27;
	        
	       B[a]=36;
	        
	       A[a][b][c]=C[a]-A[a][b][c];
	       B[a]=C[a+5]*A[a][b][c];
	      }

    return 0;
}