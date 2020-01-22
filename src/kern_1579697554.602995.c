#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(170, 640, "random");
	float **C = create_two_dim_float(710, 270, "random");
	float ***A = create_three_dim_float(720, 370, 680, "random");
	float ***D = create_three_dim_float(800, 620, 220, "random");
	float ***E = create_three_dim_float(430, 730, 580, "random");

	for (int b = 0; b < 269; b++)
	  for (int a = 0; a < 706; a++)
	  {
	    
	     C[a][b]=E[a][b][a]+B[a][b];
	     C[a+4][b+1]=0.918-D[a][b][a];
	  }

    return 0;
}