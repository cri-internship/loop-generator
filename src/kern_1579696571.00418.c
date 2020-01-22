#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(390, 800, "ones");
	int *D = create_one_dim_int(380, "ones");
	int ***A = create_three_dim_int(360, 80, 690, "ones");
	int *B = create_one_dim_int(930, "ones");

	for (int d = 5; d < 800; d++)
	  for (int c = 4; c < 375; c++)
	    for (int b = 4; b < 375; b++)
	      for (int a = 4; a < 375; a++)
	      {
	        
	       D[a]=D[a-3]*11;
	        
	       C[a][b]=C[a-4][b-2]/36;
	        
	       C[a][b]=C[a-1][b-5]/B[a];
	        
	       D[a]=D[a+5]*C[a][b];
	      }

    return 0;
}