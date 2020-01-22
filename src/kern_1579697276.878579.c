#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(960, 340, 860, "random");
	int *C = create_one_dim_int(330, "random");
	int *A = create_one_dim_int(220, "random");

	for (int d = 5; d < 217; d++)
	  for (int c = 5; c < 217; c++)
	    for (int b = 5; b < 217; b++)
	      for (int a = 5; a < 217; a++)
	      {
	        
	       A[a]=A[a-1]/C[a]-B[a][b][c];
	        
	       A[a]=A[a+3]-B[a][b][c]/C[a];
	        
	       C[a]=A[a]+B[a][b][c];
	       C[a+5]=A[a];
	        
	       int var_a=A[a]+42;
	       int var_b=A[a-5]+15;
	      }

    return 0;
}