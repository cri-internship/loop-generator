#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(270, 740, 620, "random");
	double ***B = create_three_dim_double(380, 190, 920, "random");

	for (int d = 5; d < 620; d++)
	  for (int c = 4; c < 188; c++)
	    for (int b = 0; b < 270; b++)
	      for (int a = 0; a < 270; a++)
	      {
	        
	       B[a][b][c]=B[a][b+2][c]+0.22;
	        
	       B[a][b][c]=B[a+1][b+1][c+4]+0.122;
	        
	       A[a][b][c]=0.316;
	       A[a][b-4][c-4]=0.749;
	        
	       B[a][b][c]=B[a][b][c]*A[a][b][c];
	       A[a][b][c]=B[a+2][b+2][c]*0.948;
	        
	       double var_a=A[a][b][c]*0.913;
	       double var_b=A[a][b][c-2]-0.583;
	        
	       double var_c=B[a][b][c]*0.558;
	       double var_d=B[a][b-4][c-5]*0.615;
	      }

    return 0;
}