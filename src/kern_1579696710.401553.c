#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(530, 340, 270, "random");
	float ***E = create_three_dim_float(450, 330, 330, "random");
	float *D = create_one_dim_float(80, "random");
	float ***A = create_three_dim_float(410, 890, 410, "random");
	float **C = create_two_dim_float(20, 130, "random");

	for (int c = 4; c < 405; c++)
	  for (int b = 0; b < 885; b++)
	    for (int a = 3; a < 405; a++)
	    {
	      
	      A[a][b][c]=A[a-3][b][c-4]*0.539;
	      
	      A[a][b][c]=A[a+4][b][c+3]+0.384;
	      
	      A[a][b][c]=A[a+5][b+5][c+5]*0.855;
	    }

    return 0;
}