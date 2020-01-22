#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(990, "ones");
	int ***A = create_three_dim_int(600, 690, 40, "ones");
	int **B = create_two_dim_int(60, 40, "ones");
	int **C = create_two_dim_int(90, 600, "ones");

	for (int d = 2; d < 38; d++)
	  for (int c = 3; c < 600; c++)
	    for (int b = 2; b < 90; b++)
	      for (int a = 2; a < 90; a++)
	      {
	        
	       A[a][b][c]=D[a];
	       A[a+1][b+3][c+1]=B[a][b]/C[a][b]+D[a];
	        
	       A[a][b][c]=C[a][b];
	        
	       A[a][b][c]=D[a]*A[a][b][c]+C[a][b]-B[a][b];
	       C[a][b]=D[a-2]/C[a][b];
	        
	       D[a]=C[a][b]+D[a]/B[a][b];
	       B[a][b]=C[a-2][b-3]-A[a][b][c]/B[a][b];
	        
	       A[a][b][c]=A[a][b][c]*14;
	       C[a][b]=A[a+3][b+4][c+2]/C[a][b]-B[a][b]+D[a];
	      }

    return 0;
}