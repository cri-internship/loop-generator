#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(620, 970, 880, "zeros");
	double **B = create_two_dim_double(760, 550, "zeros");

	for (int b = 2; b < 968; b++)
	  for (int a = 1; a < 619; a++)
	  {
	    
	     double var_a=A[a][b][a]*0.37;
	     double var_b=A[a-1][b-2][a-1]*0.293;
	    
	     B[a][b]=A[a][b][a]/B[a][b];
	     A[a][b][a]=A[a][b+2][a+1]-0.968;
	  }

    return 0;
}