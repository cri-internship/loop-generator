#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(440, 580, "ones");
	float ***B = create_three_dim_float(710, 490, 340, "ones");
	float **C = create_two_dim_float(930, 1000, "ones");
	float ***E = create_three_dim_float(350, 780, 340, "ones");
	float **D = create_two_dim_float(770, 850, "ones");

	for (int b = 1; b < 485; b++)
	  for (int a = 2; a < 349; a++)
	  {
	    
	     A[a][b]=A[a-1][b-1]+D[a][b]-0.514;
	    
	     A[a][b]=A[a-2][b]+E[a][b][a];
	    
	     E[a][b][a]=E[a+1][b+3][a+1]/0.952;
	    
	     B[a][b][a]=B[a][b+5][a]+0.718;
	    
	     C[a][b]=0.643;
	     C[a+3][b+1]=0.85;
	  }

    return 0;
}