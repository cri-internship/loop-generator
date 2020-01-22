#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(330, 740, 110, "random");
	float ***A = create_three_dim_float(180, 350, 610, "random");
	float ***C = create_three_dim_float(500, 130, 580, "random");
	float **D = create_two_dim_float(960, 790, "random");

	for (int b = 1; b < 125; b++)
	  for (int a = 4; a < 176; a++)
	  {
	    
	     C[a][b][a]=C[a+4][b+5][a+1]*0.983;
	    
	     A[a][b][a]=A[a+4][b+5][a+3]*B[a][b][a]/C[a][b][a]-0.359;
	    
	     B[a][b][a]=B[a+2][b][a+1]+A[a][b][a]*D[a][b]-C[a][b][a];
	    
	     A[a][b][a]=B[a][b][a]+D[a][b];
	  }

    return 0;
}