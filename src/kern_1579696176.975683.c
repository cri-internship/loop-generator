#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(860, 940, 370, "random");
	int ***A = create_three_dim_int(550, 620, 110, "random");

	for (int d = 3; d < 106; d++)
	  for (int c = 5; c < 616; c++)
	    for (int b = 4; b < 545; b++)
	      for (int a = 4; a < 545; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b-5][c]/B[a][b][c];
	        
	       A[a][b][c]=A[a][b+3][c]+B[a][b][c];
	        
	       A[a][b][c]=A[a+5][b+2][c+1]/33;
	        
	       A[a][b][c]=A[a+2][b][c+4]-6;
	        
	       int var_a=A[a][b][c]-0;
	       int var_b=A[a+5][b+4][c+3]*26;
	      }

    return 0;
}