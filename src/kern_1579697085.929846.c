#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(250, 770, "zeros");
	float *A = create_one_dim_float(730, "zeros");
	float **D = create_two_dim_float(330, 550, "zeros");
	float ***C = create_three_dim_float(570, 730, 700, "zeros");

	for (int d = 0; d < 695; d++)
	  for (int c = 2; c < 546; c++)
	    for (int b = 5; b < 250; b++)
	      for (int a = 5; a < 250; a++)
	      {
	        
	       D[a][b]=D[a-5][b-2]/0.158;
	        
	       D[a][b]=D[a][b+4]-0.698;
	        
	       B[a][b]=B[a][b+5]-A[a];
	        
	       C[a][b][c]=C[a+1][b+2][c+2]*0.498+D[a][b];
	        
	       C[a][b][c]=C[a][b+3][c+5]/0.12;
	        
	       C[a][b][c]=C[a+2][b+4][c+2]-A[a]+B[a][b];
	      }

    return 0;
}