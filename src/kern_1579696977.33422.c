#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(730, "random");
	int *D = create_one_dim_int(240, "random");
	int ***A = create_three_dim_int(690, 860, 350, "random");
	int *C = create_one_dim_int(470, "random");

	for (int d = 5; d < 470; d++)
	  for (int c = 5; c < 470; c++)
	    for (int b = 5; b < 470; b++)
	      for (int a = 5; a < 470; a++)
	      {
	        
	       B[a]=B[a-1]*A[a][b][c]-D[a]+27;
	        
	       C[a]=22;
	       C[a-4]=41;
	        
	       B[a]=D[a]/A[a][b][c]+C[a];
	        
	       int var_a=C[a]/30;
	       int var_b=C[a-5]+46;
	        
	       int var_c=B[a]*45;
	       int var_d=B[a]+36;
	        
	       int var_e=C[a]/36;
	       int var_f=C[a-1]-4;
	      }

    return 0;
}