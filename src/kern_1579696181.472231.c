#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(130, 510, "random");
	int ***C = create_three_dim_int(860, 630, 510, "random");
	int *A = create_one_dim_int(90, "random");
	int *D = create_one_dim_int(530, "random");

	for (int d = 3; d < 510; d++)
	  for (int c = 2; c < 508; c++)
	    for (int b = 5; b < 90; b++)
	      for (int a = 5; a < 90; a++)
	      {
	        
	       C[a][b][c]=C[a-5][b-2][c-3]/22;
	        
	       D[a]=D[a+1]-A[a];
	        
	       D[a]=B[a][b];
	        
	       B[a][b]=D[a];
	       B[a+1][b+2]=22*C[a][b][c];
	        
	       int var_a=A[a]/28;
	        
	       int var_c=B[a][b]/10;
	       int var_d=B[a-4][b-2]*38;
	      }

    return 0;
}