#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(610, 160, "zeros");
	int *B = create_one_dim_int(850, "zeros");
	int **D = create_two_dim_int(310, 90, "zeros");
	int **A = create_two_dim_int(190, 170, "zeros");

	for (int d = 0; d < 89; d++)
	  for (int c = 0; c < 186; c++)
	    for (int b = 0; b < 186; b++)
	      for (int a = 0; a < 186; a++)
	      {
	        
	       A[a][b]=A[a+4][b+2]*35;
	        
	       B[a]=D[a][b]/B[a]-A[a][b];
	       C[a][b]=D[a][b+1]+C[a][b]-50;
	      }

    return 0;
}