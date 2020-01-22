#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(810, 650, 50, "random");
	float ***A = create_three_dim_float(450, 980, 810, "random");
	float ***D = create_three_dim_float(880, 700, 760, "random");
	float **C = create_two_dim_float(640, 100, "random");

	for (int b = 0; b < 96; b++)
	  for (int a = 5; a < 637; a++)
	  {
	    
	     C[a][b]=C[a-5][b]+0.363;
	    
	     C[a][b]=0.319;
	    
	     float var_a=C[a][b]*0.119;
	     float var_b=C[a+3][b+4]*0.721;
	    
	     float var_c=C[a][b]/0.079;
	     float var_d=C[a+2][b]/0.837;
	  }

    return 0;
}