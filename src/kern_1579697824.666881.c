#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(670, "ones");
	int ***B = create_three_dim_int(1000, 920, 280, "ones");
	int *D = create_one_dim_int(400, "ones");
	int ***C = create_three_dim_int(400, 350, 990, "ones");
	int *E = create_one_dim_int(390, "ones");

	for (int d = 0; d < 985; d++)
	  for (int c = 0; c < 348; c++)
	    for (int b = 1; b < 390; b++)
	      for (int a = 1; a < 390; a++)
	      {
	        
	       E[a]=B[a][b][c]/D[a]+A[a]*C[a][b][c];
	       D[a]=E[a]/A[a];
	        
	       D[a]=34;
	        
	       int var_a=C[a][b][c]-11;
	       int var_b=C[a+1][b+2][c+5]+50;
	        
	       int var_c=C[a][b][c]*39;
	       int var_d=C[a+4][b][c+5]/15;
	      }

    return 0;
}