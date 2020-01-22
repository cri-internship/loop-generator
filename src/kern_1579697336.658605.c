#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(50, "zeros");
	float ***D = create_three_dim_float(510, 980, 350, "zeros");
	float *B = create_one_dim_float(890, "zeros");
	float ***C = create_three_dim_float(280, 980, 330, "zeros");

	for (int d = 0; d < 346; d++)
	  for (int c = 0; c < 978; c++)
	    for (int b = 3; b < 506; b++)
	      for (int a = 3; a < 506; a++)
	      {
	        
	       D[a][b][c]=D[a+2][b+2][c]-C[a][b][c];
	        
	       D[a][b][c]=0.028+B[a];
	        
	       B[a]=D[a][b][c];
	       B[a-3]=D[a][b][c]-0.568;
	      }

    return 0;
}