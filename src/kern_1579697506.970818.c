#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(340, 380, 970, "ones");
	float **A = create_two_dim_float(720, 890, "ones");
	float **B = create_two_dim_float(860, 820, "ones");
	float **D = create_two_dim_float(420, 840, "ones");
	float **E = create_two_dim_float(980, 730, "ones");

	for (int b = 1; b < 725; b++)
	  for (int a = 4; a < 720; a++)
	  {
	    
	     A[a][b]=A[a-1][b-1]-E[a][b]+0.423/B[a][b];
	    
	     B[a][b]=B[a][b-1]/0.354;
	    
	     B[a][b]=B[a-4][b]-A[a][b]+D[a][b];
	    
	     E[a][b]=0.3;
	     E[a+4][b+5]=0.132;
	  }

    return 0;
}