#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(230, 290, 10, "zeros");
	float ***E = create_three_dim_float(120, 1000, 200, "zeros");
	float ***B = create_three_dim_float(550, 940, 600, "zeros");
	float ***D = create_three_dim_float(30, 230, 670, "zeros");
	float **C = create_two_dim_float(610, 210, "zeros");

	for (int b = 5; b < 210; b++)
	  for (int a = 5; a < 26; a++)
	  {
	    
	     E[a][b][a]=E[a][b-3][a-5]-C[a][b]*A[a][b][a]/D[a][b][a]+B[a][b][a];
	    
	     E[a][b][a]=E[a+2][b][a+3]*0.921;
	    
	     D[a][b][a]=D[a][b+5][a+4]*E[a][b][a]+C[a][b];
	    
	     B[a][b][a]=E[a][b][a];
	     B[a-3][b][a-4]=C[a][b]-A[a][b][a]/E[a][b][a]+D[a][b][a];
	    
	     E[a][b][a]=A[a][b][a]+D[a][b][a]-B[a][b][a]*E[a][b][a];
	     A[a][b][a]=A[a-3][b-2][a-2]-D[a][b][a]/E[a][b][a]*B[a][b][a];
	    
	     float var_a=B[a][b][a]*0.537;
	     float var_b=B[a+4][b+4][a+1]+0.269;
	    
	     B[a][b][a]=C[a][b]+E[a][b][a]-A[a][b][a]*B[a][b][a]/0.612;
	     C[a][b]=C[a-1][b-5]/0.544;
	  }

    return 0;
}