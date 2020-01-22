#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(450, "ones");
	int **C = create_two_dim_int(670, 820, "ones");
	int **A = create_two_dim_int(730, 860, "ones");
	int ***B = create_three_dim_int(70, 430, 970, "ones");

	for (int d = 4; d < 965; d++)
	  for (int c = 2; c < 429; c++)
	    for (int b = 5; b < 65; b++)
	      for (int a = 5; a < 65; a++)
	      {
	        
	       B[a][b][c]=B[a][b-2][c-2]/C[a][b]*D[a]-49;
	        
	       B[a][b][c]=B[a-5][b-1][c-4]+23;
	        
	       D[a]=D[a+4]*42;
	        
	       C[a][b]=C[a+3][b+4]-48;
	        
	       B[a][b][c]=B[a+5][b+1][c+5]-44;
	        
	       int var_a=D[a]/43;
	       int var_b=D[a-3]*3;
	      }

    return 0;
}