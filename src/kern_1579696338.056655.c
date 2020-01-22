#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(870, 70, 110, "zeros");
	double ***A = create_three_dim_double(240, 60, 820, "zeros");

	for (int d = 4; d < 108; d++)
	  for (int c = 4; c < 60; c++)
	    for (int b = 5; b < 240; b++)
	      for (int a = 5; a < 240; a++)
	      {
	        
	       B[a][b][c]=B[a-5][b-3][c-4]+0.673;
	        
	       B[a][b][c]=B[a][b-2][c-3]+0.528;
	        
	       double var_a=B[a][b][c]-0.161;
	       double var_b=B[a+5][b+2][c]/0.941;
	        
	       double var_c=A[a][b][c]*0.356;
	       double var_d=A[a][b-4][c-4]*0.067;
	        
	       double var_e=B[a][b][c]+0.268;
	       double var_f=B[a+2][b+2][c+1]*0.741;
	      }

    return 0;
}