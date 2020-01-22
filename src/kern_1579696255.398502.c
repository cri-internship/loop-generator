#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(560, 910, 620, "ones");
	double ***C = create_three_dim_double(820, 620, 600, "ones");
	double ***A = create_three_dim_double(760, 800, 520, "ones");

	for (int b = 0; b < 619; b++)
	  for (int a = 0; a < 557; a++)
	  {
	    
	     A[a][b][a]=A[a][b+4][a+5]-C[a][b][a]+B[a][b][a];
	    
	     C[a][b][a]=C[a+5][b+1][a]*0.003;
	    
	     B[a][b][a]=B[a][b][a]*A[a][b][a]+C[a][b][a];
	     A[a][b][a]=B[a][b+5][a+3]-C[a][b][a]*A[a][b][a];
	  }

    return 0;
}