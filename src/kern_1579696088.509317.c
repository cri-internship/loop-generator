#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(320, 150, "ones");
	int ***A = create_three_dim_int(930, 40, 230, "ones");
	int **C = create_two_dim_int(650, 430, "ones");

	for (int d = 5; d < 150; d++)
	  for (int c = 4; c < 320; c++)
	    for (int b = 4; b < 320; b++)
	      for (int a = 4; a < 320; a++)
	      {
	        
	       B[a][b]=B[a-4][b]+17;
	        
	       C[a][b]=30;
	       C[a+2][b]=37;
	        
	       B[a][b]=9;
	        
	       int var_a=C[a][b]/9;
	       int var_b=C[a+1][b+3]*5;
	      }

    return 0;
}