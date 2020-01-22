#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(870, 130, "random");
	float *D = create_one_dim_float(430, "random");
	float ***C = create_three_dim_float(440, 890, 890, "random");
	float **E = create_two_dim_float(380, 940, "random");
	float *A = create_one_dim_float(460, "random");

	for (int d = 3; d < 890; d++)
	  for (int c = 4; c < 128; c++)
	    for (int b = 2; b < 425; b++)
	      for (int a = 2; a < 425; a++)
	      {
	        
	       D[a]=D[a+5]-0.852;
	        
	       B[a][b]=0.174;
	       B[a+1][b+2]=0.399;
	        
	       C[a][b][c]=0.923;
	       C[a-2][b-4][c-3]=0.252;
	      }

    return 0;
}