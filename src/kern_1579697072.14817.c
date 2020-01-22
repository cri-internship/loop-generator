#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(510, "ones");
	double ***A = create_three_dim_double(80, 600, 270, "ones");

	for (int b = 3; b < 597; b++)
	  for (int a = 3; a < 75; a++)
	  {
	    
	     A[a][b][a]=A[a+5][b+3][a]*0.684;
	    
	     A[a][b][a]=0.706;
	    
	     B[a]=A[a][b][a]+B[a];
	     A[a][b][a]=A[a+1][b+2][a+2]-0.458;
	  }

    return 0;
}