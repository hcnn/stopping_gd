#include "stopping_gd.h"

/* true  = yes,stop
 * false = no,proceed */
bool stopping_gd(double f1, double f0, double tolfun){
    return ((f1 + tolfun) >= f0) ? true : false;
}
