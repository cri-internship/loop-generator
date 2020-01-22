#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(50, 370, 60, "ones");
	float ***A = create_three_dim_float(410, 190, 230, "ones");

	for (int b = 3; b < 185; b++)
	  for (int a = 5; a < 46; a++)
	  {
	    
	     A[a][b][a]=A[a][b-3][a-4]*0.872;
	    
	     B[a][b][a]=B[a+1][b+1][a+4]/0.159;
	    
	     A[a][b][a]=0.462;
	    
	     B[a][b][a]=0.002;
	    
	     float var_a=B[a][b][a]/0.049;
	     float var_b=B[a+1][b+5][a+3]/0.435;
	    
	     B[a][b][a]=B[a][b][a]*A[a][b][a];
	     A[a][b][a]=B[a-2][b-2][a-3]-A[a][b][a];
	  }

    return 0;
}