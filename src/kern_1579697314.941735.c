#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(890, 580, 610, "ones");
	double **B = create_two_dim_double(860, 640, "ones");
	double **C = create_two_dim_double(370, 900, "ones");

	for (int d = 0; d < 605; d++)
	  for (int c = 0; c < 575; c++)
	    for (int b = 1; b < 365; b++)
	      for (int a = 1; a < 365; a++)
	      {
	        
	       B[a][b]=B[a-1][b]*0.346;
	        
	       C[a][b]=C[a+5][b]/B[a][b]+A[a][b][c];
	        
	       double var_a=A[a][b][c]/0.848;
	       double var_b=A[a+3][b+5][c+5]+0.327;
	      }

    return 0;
}