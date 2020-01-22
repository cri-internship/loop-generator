#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(920, 410, "zeros");
	float **D = create_two_dim_float(890, 320, "zeros");
	float ***B = create_three_dim_float(350, 880, 870, "zeros");
	float ***A = create_three_dim_float(680, 240, 520, "zeros");

	for (int c = 0; c < 870; c++)
	  for (int b = 0; b < 879; b++)
	    for (int a = 0; a < 347; a++)
	    {
	      
	      B[a][b][c]=A[a][b][c]-C[a][b]+D[a][b];
	      B[a+3][b+1][c]=D[a][b]*A[a][b][c];
	    }

    return 0;
}