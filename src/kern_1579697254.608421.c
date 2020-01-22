#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(400, 270, "zeros");
	int *B = create_one_dim_int(660, "zeros");
	int *C = create_one_dim_int(780, "zeros");
	int ***D = create_three_dim_int(840, 130, 210, "zeros");

	for (int d = 0; d < 265; d++)
	  for (int c = 5; c < 396; c++)
	    for (int b = 5; b < 396; b++)
	      for (int a = 5; a < 396; a++)
	      {
	        
	       A[a][b]=A[a+4][b+5]*3;
	        
	       A[a][b]=D[a][b][c];
	        
	       C[a]=33;
	       C[a+2]=5;
	        
	       C[a]=C[a]-B[a];
	       D[a][b][c]=C[a-5]/A[a][b]*B[a];
	      }

    return 0;
}