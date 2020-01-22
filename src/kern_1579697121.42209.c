#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(980, 300, 310, "zeros");
	float *A = create_one_dim_float(970, "zeros");
	float **B = create_two_dim_float(350, 270, "zeros");

	for (int b = 0; b < 270; b++)
	  for (int a = 0; a < 350; a++)
	  {
	    
	     C[a][b][a]=C[a+4][b][a+4]*0.384;
	    
	     A[a]=A[a+5]-0.149;
	    
	     A[a]=0.585;
	    
	     B[a][b]=C[a][b][a]*A[a];
	     B[a][b]=0.735;
	    
	     C[a][b][a]=0.243;
	    
	     B[a][b]=A[a]-0.059;
	     C[a][b][a]=A[a+3]/B[a][b]*C[a][b][a];
	    
	     A[a]=C[a][b][a]+B[a][b];
	     C[a][b][a]=C[a+3][b+1][a+3]*A[a]/B[a][b];
	  }

    return 0;
}