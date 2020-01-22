#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(290, 730, 770, "zeros");
	int **B = create_two_dim_int(820, 70, "zeros");
	int ***C = create_three_dim_int(440, 540, 80, "zeros");

	for (int d = 0; d < 78; d++)
	  for (int c = 4; c < 70; c++)
	    for (int b = 4; b < 435; b++)
	      for (int a = 4; a < 435; a++)
	      {
	        
	       B[a][b]=B[a-4][b-4]/C[a][b][c];
	        
	       C[a][b][c]=C[a+5][b+2][c+2]+B[a][b];
	        
	       C[a][b][c]=C[a+3][b+4][c]+A[a][b][c];
	        
	       int var_a=B[a][b]*45;
	       int var_b=B[a-4][b-3]/27;
	      }

    return 0;
}