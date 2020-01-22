#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(260, 660, 150, "random");
	float **B = create_two_dim_float(290, 940, "random");

	for (int c = 0; c < 149; c++)
	  for (int b = 3; b < 655; b++)
	    for (int a = 2; a < 255; a++)
	    {
	      
	      B[a][b]=B[a-2][b-3]*A[a][b][c];
	      
	      A[a][b][c]=A[a+5][b+3][c]+0.671;
	      
	      B[a][b]=B[a+2][b+5]*0.03;
	      
	      A[a][b][c]=0.182;
	      
	      float var_a=B[a][b]*0.837;
	      float var_b=B[a-1][b-3]*0.589;
	      
	      B[a][b]=A[a][b][c]/B[a][b];
	      A[a][b][c]=A[a][b+2][c+1]/B[a][b];
	    }

    return 0;
}