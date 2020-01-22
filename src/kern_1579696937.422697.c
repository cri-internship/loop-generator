#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(370, 40, "zeros");
	int *C = create_one_dim_int(150, "zeros");
	int ***A = create_three_dim_int(310, 260, 910, "zeros");
	int *D = create_one_dim_int(190, "zeros");

	for (int d = 5; d < 36; d++)
	  for (int c = 5; c < 190; c++)
	    for (int b = 5; b < 190; b++)
	      for (int a = 5; a < 190; a++)
	      {
	        
	       D[a]=D[a-5]/14;
	        
	       B[a][b]=B[a-4][b-5]-33;
	        
	       B[a][b]=B[a+5][b+4]+A[a][b][c];
	        
	       D[a]=B[a][b]*C[a];
	        
	       int var_a=D[a]-4;
	       int var_b=D[a-1]/40;
	        
	       A[a][b][c]=B[a][b]*D[a]-D[a]/C[a];
	       D[a]=B[a+2][b]+33;
	      }

    return 0;
}