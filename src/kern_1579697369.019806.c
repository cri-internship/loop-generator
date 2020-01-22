#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(890, 360, 240, "ones");
	double **A = create_two_dim_double(90, 910, "ones");

	for (int b = 5; b < 360; b++)
	  for (int a = 4; a < 85; a++)
	  {
	    
	     B[a][b][a]=B[a-4][b-1][a-2]/0.649;
	    
	     A[a][b]=A[a+5][b+3]-B[a][b][a];
	    
	     A[a][b]=A[a+2][b+5]/0.228;
	    
	     double var_a=A[a][b]*0.418;
	     double var_b=A[a][b+2]*0.307;
	    
	     double var_c=B[a][b][a]*0.076;
	     double var_d=B[a-3][b-1][a-2]+0.448;
	  }

    return 0;
}