#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(520, 560, "random");
	double ***A = create_three_dim_double(960, 640, 130, "random");

	for (int b = 5; b < 560; b++)
	  for (int a = 4; a < 520; a++)
	  {
	    
	     A[a][b][a]=A[a+3][b+4][a+3]-0.907;
	    
	     B[a][b]=0.641;
	     B[a-4][b-5]=0.087;
	  }

    return 0;
}