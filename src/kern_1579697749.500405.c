#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(40, 550, 930, "zeros");
	float **A = create_two_dim_float(690, 650, "zeros");
	float **B = create_two_dim_float(930, 950, "zeros");

	for (int d = 4; d < 926; d++)
	  for (int c = 5; c < 550; c++)
	    for (int b = 2; b < 37; b++)
	      for (int a = 2; a < 37; a++)
	      {
	        
	       C[a][b][c]=C[a-2][b-5][c-4]/0.868;
	        
	       C[a][b][c]=C[a+3][b][c+4]/B[a][b];
	        
	       A[a][b]=B[a][b]-C[a][b][c];
	       B[a][b]=B[a+3][b]+A[a][b]*A[a][b];
	      }

    return 0;
}