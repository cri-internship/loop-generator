#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(300, 650, "random");
	float **D = create_two_dim_float(850, 930, "random");
	float ***E = create_three_dim_float(80, 150, 830, "random");
	float **A = create_two_dim_float(200, 280, "random");
	float **B = create_two_dim_float(130, 130, "random");

	for (int b = 0; b < 645; b++)
	  for (int a = 0; a < 300; a++)
	  {
	    
	     C[a][b]=C[a][b+5]-E[a][b][a]*D[a][b];
	  }

    return 0;
}