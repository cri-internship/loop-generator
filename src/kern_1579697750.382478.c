#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(410, "ones");
	int ***A = create_three_dim_int(90, 200, 20, "ones");
	int **C = create_two_dim_int(220, 330, "ones");

	for (int d = 0; d < 17; d++)
	  for (int c = 0; c < 196; c++)
	    for (int b = 5; b < 87; b++)
	      for (int a = 5; a < 87; a++)
	      {
	        
	       B[a]=B[a-2]*44;
	        
	       A[a][b][c]=A[a+3][b+4][c+3]/48;
	        
	       B[a]=B[a+2]+C[a][b]-A[a][b][c];
	        
	       int var_a=A[a][b][c]+20;
	       int var_b=A[a+2][b+4][c+3]/31;
	        
	       B[a]=B[a]-C[a][b];
	      }

    return 0;
}