#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(360, 570, "zeros");
	float **A = create_two_dim_float(70, 660, "zeros");
	float **D = create_two_dim_float(650, 860, "zeros");
	float ***E = create_three_dim_float(670, 430, 890, "zeros");
	float **C = create_two_dim_float(780, 950, "zeros");

	for (int d = 5; d < 660; d++)
	  for (int c = 2; c < 70; c++)
	    for (int b = 2; b < 70; b++)
	      for (int a = 2; a < 70; a++)
	      {
	        
	       C[a][b]=C[a][b-4]+A[a][b]/D[a][b];
	        
	       C[a][b]=0.337;
	        
	       D[a][b]=0.689;
	       D[a+5][b+4]=0.484;
	        
	       A[a][b]=B[a][b]*C[a][b]-E[a][b][c]+E[a][b][c];
	       A[a][b-5]=E[a][b][c];
	        
	       float var_a=C[a][b]*0.578;
	       float var_b=C[a-2][b-2]*0.542;
	      }

    return 0;
}