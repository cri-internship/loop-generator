#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(760, 430, "zeros");
	float ***A = create_three_dim_float(610, 880, 860, "zeros");
	float **D = create_two_dim_float(700, 790, "zeros");
	float ***C = create_three_dim_float(240, 540, 30, "zeros");
	float ***E = create_three_dim_float(620, 670, 380, "zeros");

	for (int b = 5; b < 430; b++)
	  for (int a = 4; a < 237; a++)
	  {
	    
	     B[a][b]=B[a-4][b-5]-C[a][b][a]/E[a][b][a]+D[a][b]*A[a][b][a];
	    
	     C[a][b][a]=0.006;
	     C[a][b+5][a+3]=0.923;
	    
	     A[a][b][a]=C[a][b][a]*B[a][b];
	     E[a][b][a]=C[a+2][b+4][a+2]-A[a][b][a]*B[a][b]/E[a][b][a]+D[a][b];
	  }

    return 0;
}