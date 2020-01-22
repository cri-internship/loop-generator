#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(300, 220, "zeros");
	float ***E = create_three_dim_float(390, 570, 160, "zeros");
	float ***A = create_three_dim_float(210, 970, 740, "zeros");
	float **D = create_two_dim_float(50, 340, "zeros");
	float ***B = create_three_dim_float(90, 530, 40, "zeros");

	for (int c = 3; c < 740; c++)
	  for (int b = 2; b < 215; b++)
	    for (int a = 2; a < 210; a++)
	    {
	      
	      A[a][b][c]=A[a-2][b-2][c-3]-0.126;
	      
	      C[a][b]=C[a+1][b+5]*0.75;
	    }

    return 0;
}