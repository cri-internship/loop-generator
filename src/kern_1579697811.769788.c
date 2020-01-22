#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(830, 950, 840, "zeros");
	int ***A = create_three_dim_int(30, 930, 440, "zeros");

	for (int c = 0; c < 435; c++)
	  for (int b = 3; b < 927; b++)
	    for (int a = 5; a < 29; a++)
	    {
	      
	      A[a][b][c]=A[a+1][b+3][c+5]/18;
	      
	      B[a][b][c]=B[a+1][b+1][c+2]+10;
	      
	      int var_a=B[a][b][c]*30;
	      int var_b=B[a-5][b-3][c]/39;
	      
	      int var_c=B[a][b][c]*2;
	      int var_d=B[a+4][b+2][c+1]-38;
	    }

    return 0;
}