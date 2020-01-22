#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(890, 740, "random");
	int *A = create_one_dim_int(970, "random");
	int **B = create_two_dim_int(560, 1000, "random");
	int **C = create_two_dim_int(130, 990, "random");

	for (int d = 5; d < 740; d++)
	  for (int c = 5; c < 130; c++)
	    for (int b = 5; b < 130; b++)
	      for (int a = 5; a < 130; a++)
	      {
	        
	       B[a][b]=B[a+5][b]-C[a][b]/D[a][b];
	        
	       A[a]=A[a+5]*B[a][b];
	        
	       C[a][b]=A[a];
	       C[a-1][b-3]=24;
	        
	       int var_a=D[a][b]-27;
	       int var_b=D[a-5][b-5]/28;
	        
	       int var_c=D[a][b]+46;
	       int var_d=D[a][b-1]*6;
	      }

    return 0;
}