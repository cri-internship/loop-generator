#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(230, "random");
	int *E = create_one_dim_int(390, "random");
	int *C = create_one_dim_int(140, "random");
	int ***A = create_three_dim_int(990, 250, 960, "random");
	int **B = create_two_dim_int(470, 620, "random");

	for (int d = 3; d < 960; d++)
	  for (int c = 5; c < 250; c++)
	    for (int b = 5; b < 230; b++)
	      for (int a = 5; a < 230; a++)
	      {
	        
	       E[a]=E[a-5]-B[a][b]/C[a];
	        
	       A[a][b][c]=24;
	       A[a-2][b-5][c-3]=46;
	        
	       A[a][b][c]=A[a][b][c]-E[a]*D[a];
	       B[a][b]=A[a-2][b-4][c-2]/D[a];
	        
	       int var_a=D[a]-14;
	       int var_b=D[a-4]/10;
	      }

    return 0;
}