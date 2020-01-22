#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(770, "ones");
	int ***D = create_three_dim_int(790, 400, 500, "ones");
	int *E = create_one_dim_int(640, "ones");
	int ***C = create_three_dim_int(370, 830, 580, "ones");
	int ***B = create_three_dim_int(100, 670, 450, "ones");

	for (int d = 0; d < 580; d++)
	  for (int c = 0; c < 828; c++)
	    for (int b = 0; b < 368; b++)
	      for (int a = 0; a < 368; a++)
	      {
	        
	       C[a][b][c]=C[a+2][b+2][c]-B[a][b][c]/E[a];
	        
	       A[a]=A[a+5]-D[a][b][c]+C[a][b][c]/47;
	        
	       int var_a=E[a]+11;
	       int var_b=E[a+2]+11;
	      }

    return 0;
}