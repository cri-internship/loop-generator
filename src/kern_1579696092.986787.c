#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(390, 480, "random");
	float ***B = create_three_dim_float(380, 470, 590, "random");
	float ***A = create_three_dim_float(20, 430, 110, "random");
	float ***E = create_three_dim_float(220, 890, 30, "random");
	float **D = create_two_dim_float(980, 340, "random");

	for (int c = 0; c < 26; c++)
	  for (int b = 1; b < 340; b++)
	    for (int a = 5; a < 216; a++)
	    {
	      
	      D[a][b]=D[a-5][b-1]+0.733;
	      
	      E[a][b][c]=E[a][b][c]*A[a][b][c];
	      C[a][b]=E[a+4][b+3][c+4]+0.389-B[a][b][c]/D[a][b];
	    }

    return 0;
}