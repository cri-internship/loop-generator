#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(610, 860, 980, "random");
	int **B = create_two_dim_int(160, 430, "random");
	int **C = create_two_dim_int(780, 140, "random");

	for (int d = 0; d < 978; d++)
	  for (int c = 4; c < 140; c++)
	    for (int b = 5; b < 609; b++)
	      for (int a = 5; a < 609; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b-2][c]+34;
	        
	       C[a][b]=C[a-1][b-1]*9;
	        
	       A[a][b][c]=1;
	        
	       int var_a=C[a][b]*18;
	       int var_b=C[a-3][b-4]+8;
	      }

    return 0;
}