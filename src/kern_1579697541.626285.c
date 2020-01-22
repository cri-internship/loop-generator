#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(90, "random");
	int *D = create_one_dim_int(150, "random");
	int **C = create_two_dim_int(750, 960, "random");
	int **A = create_two_dim_int(900, 270, "random");

	for (int d = 0; d < 270; d++)
	  for (int c = 0; c < 90; c++)
	    for (int b = 0; b < 90; b++)
	      for (int a = 0; a < 90; a++)
	      {
	        
	       C[a][b]=C[a+4][b+4]/19;
	        
	       int var_a=B[a]-38;
	       B[a]=46;
	        
	       B[a]=A[a][b]/38;
	       A[a][b]=D[a]-B[a];
	      }

    return 0;
}