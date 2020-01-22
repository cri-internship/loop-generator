#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(100, 960, 580, "zeros");
	double ***A = create_three_dim_double(260, 160, 770, "zeros");
	double ***B = create_three_dim_double(240, 940, 830, "zeros");

	for (int b = 5; b < 160; b++)
	  for (int a = 5; a < 95; a++)
	  {
	    
	     A[a][b][a]=A[a-5][b-3][a-5]-0.332;
	    
	     A[a][b][a]=A[a][b][a-2]/0.133;
	    
	     C[a][b][a]=C[a-5][b-2][a-2]/B[a][b][a];
	    
	     C[a][b][a]=C[a+5][b+5][a]/0.108;
	    
	     B[a][b][a]=A[a][b][a]+C[a][b][a];
	     B[a-1][b-5][a-3]=0.259;
	    
	     A[a][b][a]=B[a][b][a]/C[a][b][a]*0.808;
	     C[a][b][a]=B[a-2][b-3][a-5]*A[a][b][a];
	    
	     B[a][b][a]=A[a][b][a]/C[a][b][a];
	     C[a][b][a]=A[a-1][b][a-1]-C[a][b][a]+B[a][b][a];
	  }

    return 0;
}