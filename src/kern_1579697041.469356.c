#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(370, 550, "zeros");
	int ***D = create_three_dim_int(180, 270, 730, "zeros");
	int ***A = create_three_dim_int(480, 300, 370, "zeros");
	int **B = create_two_dim_int(640, 20, "zeros");
	int *E = create_one_dim_int(630, "zeros");

	for (int d = 0; d < 370; d++)
	  for (int c = 3; c < 20; c++)
	    for (int b = 5; b < 370; b++)
	      for (int a = 5; a < 370; a++)
	      {
	        
	       C[a][b]=C[a-4][b-3]-D[a][b][c]*A[a][b][c]+E[a]/B[a][b];
	        
	       E[a]=E[a+5]+32;
	        
	       A[a][b][c]=36;
	       A[a+4][b+1][c]=27;
	        
	       E[a]=C[a][b]/A[a][b][c]+C[a][b];
	        
	       int var_a=B[a][b]-50;
	       int var_b=B[a-5][b-3]+15;
	      }

    return 0;
}