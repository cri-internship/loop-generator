#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(50, 500, "ones");
	int **A = create_two_dim_int(410, 340, "ones");
	int ***B = create_three_dim_int(740, 770, 500, "ones");

	for (int d = 5; d < 499; d++)
	  for (int c = 1; c < 500; c++)
	    for (int b = 5; b < 47; b++)
	      for (int a = 5; a < 47; a++)
	      {
	        
	       B[a][b][c]=B[a-5][b-1][c-5]-35;
	        
	       C[a][b]=C[a+3][b]+8;
	        
	       B[a][b][c]=B[a][b+1][c+1]-12;
	        
	       int var_a=B[a][b][c]/9;
	       int var_b=B[a-1][b][c]+31;
	      }

    return 0;
}