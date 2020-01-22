#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(650, 860, "zeros");
	float ***B = create_three_dim_float(890, 970, 610, "zeros");
	float **C = create_two_dim_float(370, 250, "zeros");

	for (int b = 4; b < 857; b++)
	  for (int a = 5; a < 645; a++)
	  {
	    
	     A[a][b]=A[a-5][b]/C[a][b]-B[a][b][a];
	    
	     A[a][b]=A[a+3][b+3]/B[a][b][a];
	    
	     A[a][b]=A[a+5][b+1]/0.405;
	    
	     B[a][b][a]=0.213;
	     B[a+2][b+4][a+4]=0.774;
	    
	     B[a][b][a]=0.376;
	    
	     float var_a=B[a][b][a]/0.896;
	     float var_b=B[a][b-4][a-4]*0.354;
	    
	     A[a][b]=A[a][b]+B[a][b][a];
	     B[a][b][a]=A[a][b-3]/C[a][b]*0.441;
	  }

    return 0;
}