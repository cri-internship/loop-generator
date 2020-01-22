#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(650, "random");
	int ***B = create_three_dim_int(320, 370, 40, "random");
	int ***C = create_three_dim_int(880, 670, 880, "random");

	for (int d = 4; d < 40; d++)
	  for (int c = 4; c < 370; c++)
	    for (int b = 4; b < 320; b++)
	      for (int a = 4; a < 320; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b-2][c-2]/45;
	        
	       A[a]=A[a-3]*B[a][b][c];
	        
	       B[a][b][c]=B[a][b-4][c-2]-14;
	        
	       C[a][b][c]=C[a-3][b-2][c-4]+A[a]/A[a];
	        
	       C[a][b][c]=C[a-1][b-3][c-4]*13;
	        
	       B[a][b][c]=B[a-3][b][c-4]/40;
	      }

    return 0;
}