#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(540, 420, 370, "ones");
	int **D = create_two_dim_int(380, 400, "ones");
	int ***C = create_three_dim_int(500, 230, 210, "ones");
	int ***B = create_three_dim_int(680, 90, 570, "ones");

	for (int d = 1; d < 205; d++)
	  for (int c = 5; c < 90; c++)
	    for (int b = 5; b < 496; b++)
	      for (int a = 5; a < 496; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b-3][c-1]-C[a][b][c]/47;
	        
	       C[a][b][c]=B[a][b][c]*A[a][b][c]+A[a][b][c];
	       C[a+4][b+4][c+5]=B[a][b][c]+A[a][b][c]*D[a][b];
	        
	       D[a][b]=B[a][b][c]*A[a][b][c]-C[a][b][c];
	       C[a][b][c]=B[a-5][b-5][c]+20-C[a][b][c]/A[a][b][c];
	      }

    return 0;
}