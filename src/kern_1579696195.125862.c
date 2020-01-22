#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(20, 90, 430, "ones");
	int *C = create_one_dim_int(400, "ones");
	int *A = create_one_dim_int(690, "ones");

	for (int d = 3; d < 430; d++)
	  for (int c = 2; c < 90; c++)
	    for (int b = 4; b < 20; b++)
	      for (int a = 4; a < 20; a++)
	      {
	        
	       A[a]=A[a-4]+37;
	        
	       C[a]=C[a-2]*B[a][b][c]/A[a];
	        
	       A[a]=C[a];
	        
	       A[a]=C[a]-A[a]*B[a][b][c];
	        
	       C[a]=B[a][b][c]*34;
	       B[a][b][c]=B[a-3][b-2][c-3]*A[a];
	      }

    return 0;
}