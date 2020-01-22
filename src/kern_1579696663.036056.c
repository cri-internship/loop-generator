#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(160, "ones");
	int *E = create_one_dim_int(520, "ones");
	int *A = create_one_dim_int(950, "ones");
	int ***B = create_three_dim_int(670, 860, 880, "ones");
	int ***D = create_three_dim_int(850, 320, 750, "ones");

	for (int d = 0; d < 875; d++)
	  for (int c = 0; c < 859; c++)
	    for (int b = 5; b < 155; b++)
	      for (int a = 5; a < 155; a++)
	      {
	        
	       E[a]=E[a-5]/C[a]*B[a][b][c]+17-A[a];
	        
	       B[a][b][c]=B[a+3][b+1][c+5]*11;
	        
	       A[a]=A[a+2]-E[a]*E[a];
	        
	       C[a]=C[a+5]-B[a][b][c]+A[a];
	        
	       B[a][b][c]=23;
	        
	       E[a]=C[a]-B[a][b][c]/D[a][b][c]*E[a]+A[a];
	       D[a][b][c]=C[a]+A[a]-B[a][b][c]/E[a];
	      }

    return 0;
}