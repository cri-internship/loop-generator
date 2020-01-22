#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(680, 540, 980, "zeros");
	float *D = create_one_dim_float(230, "zeros");
	float ***A = create_three_dim_float(850, 810, 700, "zeros");
	float ***B = create_three_dim_float(190, 110, 810, "zeros");

	for (int c = 3; c < 700; c++)
	  for (int b = 4; b < 110; b++)
	    for (int a = 0; a < 188; a++)
	    {
	      
	      A[a][b][c]=A[a][b-4][c-3]-0.195;
	      
	      B[a][b][c]=B[a+2][b][c+5]-C[a][b][c]/D[a]*A[a][b][c];
	      
	      D[a]=0.71;
	      D[a+4]=0.54;
	      
	      D[a]=B[a][b][c]/0.907;
	    }

    return 0;
}