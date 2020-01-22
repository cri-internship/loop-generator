#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(130, 920, "ones");
	int ***C = create_three_dim_int(760, 230, 70, "ones");
	int ***A = create_three_dim_int(820, 520, 370, "ones");

	for (int d = 3; d < 70; d++)
	  for (int c = 5; c < 230; c++)
	    for (int b = 4; b < 128; b++)
	      for (int a = 4; a < 128; a++)
	      {
	        
	       B[a][b]=B[a-4][b-5]+C[a][b][c]/A[a][b][c];
	        
	       A[a][b][c]=A[a+1][b+2][c]*0;
	        
	       B[a][b]=A[a][b][c];
	        
	       int var_a=C[a][b][c]*47;
	       int var_b=C[a-2][b-1][c]/34;
	        
	       C[a][b][c]=A[a][b][c]*B[a][b]+C[a][b][c];
	       B[a][b]=A[a][b][c-3]/C[a][b][c]+B[a][b];
	      }

    return 0;
}