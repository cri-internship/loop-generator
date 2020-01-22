#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(740, 760, 450, "random");
	int *A = create_one_dim_int(440, "random");
	int **B = create_two_dim_int(140, 860, "random");

	for (int d = 3; d < 450; d++)
	  for (int c = 2; c < 759; c++)
	    for (int b = 2; b < 139; b++)
	      for (int a = 2; a < 139; a++)
	      {
	        
	       A[a]=A[a-1]*B[a][b]-C[a][b][c];
	        
	       C[a][b][c]=C[a-2][b-2][c-3]*42;
	        
	       B[a][b]=B[a+1][b+1]-A[a];
	        
	       C[a][b][c]=C[a+1][b+1][c]+41;
	      }

    return 0;
}