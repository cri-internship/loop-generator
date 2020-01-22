#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(460, 860, 970, "ones");
	int *A = create_one_dim_int(90, "ones");
	int ***C = create_three_dim_int(270, 660, 1000, "ones");
	int *D = create_one_dim_int(480, "ones");

	for (int d = 3; d < 970; d++)
	  for (int c = 5; c < 660; c++)
	    for (int b = 5; b < 270; b++)
	      for (int a = 5; a < 270; a++)
	      {
	        
	       D[a]=D[a-5]*49;
	        
	       C[a][b][c]=C[a-5][b][c-3]+25;
	        
	       B[a][b][c]=B[a-4][b-3][c-1]/D[a]-A[a];
	        
	       B[a][b][c]=C[a][b][c]-C[a][b][c]*A[a];
	        
	       int var_a=B[a][b][c]-37;
	       int var_b=B[a-1][b-5][c-2]+30;
	      }

    return 0;
}