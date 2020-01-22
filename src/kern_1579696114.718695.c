#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(760, 570, 470, "random");
	int *B = create_one_dim_int(780, "random");
	int **D = create_two_dim_int(340, 660, "random");
	int *A = create_one_dim_int(900, "random");

	for (int d = 0; d < 465; d++)
	  for (int c = 0; c < 567; c++)
	    for (int b = 4; b < 757; b++)
	      for (int a = 4; a < 757; a++)
	      {
	        
	       A[a]=A[a-4]/44;
	        
	       B[a]=B[a+5]-44;
	        
	       B[a]=A[a];
	        
	       int var_a=C[a][b][c]+27;
	       int var_b=C[a+3][b+3][c+5]/37;
	      }

    return 0;
}