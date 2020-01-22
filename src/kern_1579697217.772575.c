#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(460, 420, 810, "random");
	int *B = create_one_dim_int(750, "random");
	int *C = create_one_dim_int(320, "random");
	int **D = create_two_dim_int(450, 670, "random");

	for (int d = 3; d < 810; d++)
	  for (int c = 4; c < 420; c++)
	    for (int b = 4; b < 446; b++)
	      for (int a = 4; a < 446; a++)
	      {
	        
	       A[a][b][c]=A[a-4][b][c-3]*D[a][b]-C[a];
	        
	       A[a][b][c]=A[a-4][b-4][c-3]-7;
	        
	       B[a]=B[a-3]*14;
	        
	       D[a][b]=D[a+4][b+4]/A[a][b][c]+B[a]*B[a];
	        
	       D[a][b]=12;
	        
	       int var_a=D[a][b]/21;
	       int var_b=D[a-3][b-1]/22;
	      }

    return 0;
}