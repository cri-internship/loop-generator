#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(760, 880, 80, "random");
	double ***A = create_three_dim_double(630, 940, 120, "random");
	double **C = create_two_dim_double(270, 670, "random");

	for (int c = 2; c < 77; c++)
	  for (int b = 5; b < 670; b++)
	    for (int a = 5; a < 270; a++)
	    {
	      
	      C[a][b]=C[a-5][b-5]-B[a][b][c];
	      
	      B[a][b][c]=B[a-3][b-4][c]+0.088;
	      
	      B[a][b][c]=B[a][b][c-2]*0.139;
	    }

    return 0;
}