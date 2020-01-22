#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(560, 410, 570, "zeros");
	int *C = create_one_dim_int(180, "zeros");
	int **A = create_two_dim_int(710, 200, "zeros");
	int **B = create_two_dim_int(330, 520, "zeros");

	for (int d = 2; d < 567; d++)
	  for (int c = 5; c < 200; c++)
	    for (int b = 5; b < 180; b++)
	      for (int a = 5; a < 180; a++)
	      {
	        
	       C[a]=C[a-5]+3;
	        
	       D[a][b][c]=D[a+1][b+3][c+3]*19;
	        
	       D[a][b][c]=C[a]+B[a][b]-A[a][b];
	        
	       D[a][b][c]=D[a][b][c]-B[a][b]/A[a][b];
	       B[a][b]=D[a][b-5][c-2]-A[a][b];
	        
	       C[a]=A[a][b]-30;
	       A[a][b]=A[a-1][b-4]/D[a][b][c];
	      }

    return 0;
}