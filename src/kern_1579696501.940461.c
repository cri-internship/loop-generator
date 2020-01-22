#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(960, 970, "random");
	double **B = create_two_dim_double(180, 650, "random");
	double ***A = create_three_dim_double(770, 1000, 130, "random");

	for (int d = 5; d < 125; d++)
	  for (int c = 5; c < 648; c++)
	    for (int b = 5; b < 175; b++)
	      for (int a = 5; a < 175; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b-5][c-5]+B[a][b]/C[a][b];
	        
	       C[a][b]=C[a+4][b]-0.274;
	        
	       B[a][b]=B[a+5][b+2]-A[a][b][c];
	        
	       double var_a=A[a][b][c]-0.135;
	       double var_b=A[a+1][b+3][c+5]-0.376;
	        
	       A[a][b][c]=A[a][b][c]+0.518*B[a][b];
	       C[a][b]=A[a+4][b+1][c+5]-0.173/C[a][b];
	      }

    return 0;
}