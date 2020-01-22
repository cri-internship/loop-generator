#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(170, "ones");
	int *E = create_one_dim_int(700, "ones");
	int **B = create_two_dim_int(100, 60, "ones");
	int **C = create_two_dim_int(520, 720, "ones");
	int ***D = create_three_dim_int(410, 730, 750, "ones");

	for (int d = 1; d < 750; d++)
	  for (int c = 1; c < 730; c++)
	    for (int b = 3; b < 170; b++)
	      for (int a = 3; a < 170; a++)
	      {
	        
	       D[a][b][c]=D[a-2][b-1][c-1]/18;
	        
	       E[a]=C[a][b];
	       E[a+2]=D[a][b][c];
	        
	       A[a]=E[a]*B[a][b];
	       A[a-3]=C[a][b]+B[a][b]*0;
	      }

    return 0;
}