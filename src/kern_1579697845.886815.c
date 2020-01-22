#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(350, 980, 580, "zeros");
	float **A = create_two_dim_float(130, 910, "zeros");
	float *C = create_one_dim_float(300, "zeros");
	float **D = create_two_dim_float(60, 700, "zeros");

	for (int b = 5; b < 908; b++)
	  for (int a = 5; a < 127; a++)
	  {
	    
	     A[a][b]=A[a+3][b+2]/0.771;
	    
	     A[a][b]=C[a]-D[a][b]*0.199;
	    
	     D[a][b]=C[a]-A[a][b]*A[a][b]+B[a][b][a];
	     B[a][b][a]=C[a-5]+A[a][b]/D[a][b]*B[a][b][a];
	    
	     C[a]=C[a]*0.399;
	     A[a][b]=C[a+3]+B[a][b][a]*A[a][b]/D[a][b];
	    
	     float var_a=C[a]*0.845;
	     float var_b=C[a+5]-0.632;
	  }

    return 0;
}