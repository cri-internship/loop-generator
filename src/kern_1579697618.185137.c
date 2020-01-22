#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(20, 530, "ones");
	float ***C = create_three_dim_float(420, 660, 940, "ones");
	float *E = create_one_dim_float(690, "ones");
	float **A = create_two_dim_float(920, 90, "ones");
	float **D = create_two_dim_float(350, 370, "ones");

	for (int d = 3; d < 85; d++)
	  for (int c = 0; c < 915; c++)
	    for (int b = 0; b < 915; b++)
	      for (int a = 0; a < 915; a++)
	      {
	        
	       C[a][b][c]=A[a][b]+D[a][b]*B[a][b];
	       E[a]=A[a+5][b+5]-C[a][b][c]+E[a]/D[a][b]*B[a][b];
	        
	       A[a][b]=A[a][b]+D[a][b];
	       D[a][b]=A[a][b-3]/D[a][b]+0.015;
	      }

    return 0;
}