#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(320, 890, 280, "random");
	int **B = create_two_dim_int(750, 350, "random");
	int **A = create_two_dim_int(40, 960, "random");
	int *D = create_one_dim_int(470, "random");

	for (int d = 5; d < 280; d++)
	  for (int c = 5; c < 350; c++)
	    for (int b = 5; b < 317; b++)
	      for (int a = 5; a < 317; a++)
	      {
	        
	       C[a][b][c]=C[a-1][b-1][c-5]+43;
	        
	       C[a][b][c]=22;
	        
	       B[a][b]=2;
	       B[a-3][b-5]=43;
	        
	       int var_a=B[a][b]/46;
	       int var_b=B[a-5][b]+43;
	        
	       int var_c=D[a]/25;
	       int var_d=D[a-1]/45;
	        
	       D[a]=C[a][b][c]*D[a];
	       C[a][b][c]=C[a+3][b][c]*28;
	      }

    return 0;
}