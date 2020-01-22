#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(310, "ones");
	float **E = create_two_dim_float(430, 840, "ones");
	float ***D = create_three_dim_float(750, 190, 770, "ones");
	float **B = create_two_dim_float(250, 410, "ones");
	float ***A = create_three_dim_float(440, 300, 60, "ones");

	for (int b = 5; b < 190; b++)
	  for (int a = 4; a < 426; a++)
	  {
	    
	     D[a][b][a]=0.827;
	     D[a-2][b-5][a-1]=0.062;
	    
	     D[a][b][a]=B[a][b]+E[a][b];
	    
	     E[a][b]=0.789;
	     E[a+4][b+1]=0.968;
	  }

    return 0;
}