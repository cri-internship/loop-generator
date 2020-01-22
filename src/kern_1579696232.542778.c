#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(800, 80, 180, "zeros");
	double ***A = create_three_dim_double(220, 980, 220, "zeros");
	double *B = create_one_dim_double(180, "zeros");

	for (int b = 3; b < 80; b++)
	  for (int a = 5; a < 179; a++)
	  {
	    
	     B[a]=0.199*A[a][b][a];
	     C[a][b][a]=B[a]*A[a][b][a]+C[a][b][a];
	    
	     C[a][b][a]=C[a-5][b-3][a]-0.524;
	    
	     B[a]=B[a-3]-A[a][b][a]/0.435;
	    
	     B[a]=B[a+1]/C[a][b][a]*A[a][b][a];
	    
	     B[a]=A[a][b][a]+B[a];
	     A[a][b][a]=A[a+5][b+3][a+3]-C[a][b][a]*B[a];
	    
	     B[a]=B[a]/A[a][b][a];
	  }

    return 0;
}