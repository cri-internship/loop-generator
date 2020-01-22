#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(160, 870, "ones");
	int ***E = create_three_dim_int(120, 960, 440, "ones");
	int **D = create_two_dim_int(540, 670, "ones");
	int *C = create_one_dim_int(380, "ones");
	int **A = create_two_dim_int(600, 490, "ones");

	for (int d = 4; d < 437; d++)
	  for (int c = 3; c < 868; c++)
	    for (int b = 2; b < 116; b++)
	      for (int a = 2; a < 116; a++)
	      {
	        
	       E[a][b][c]=E[a][b][c-4]/12;
	        
	       C[a]=C[a-2]-0;
	        
	       B[a][b]=B[a+3][b+2]-13;
	        
	       E[a][b][c]=E[a+4][b+4][c+3]/29;
	        
	       int var_a=E[a][b][c]/41;
	       int var_b=E[a-2][b-3][c-1]+6;
	        
	       E[a][b][c]=B[a][b]+D[a][b]/A[a][b]-C[a]*A[a][b];
	       A[a][b]=B[a+1][b+2]*1+C[a]/D[a][b];
	      }

    return 0;
}