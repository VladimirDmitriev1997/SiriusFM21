

#include <iostream>
#include "DiffusionGBM.h"
#include "DiffusionCEV.h"

#include "DiffusionCIR.h"

#include "DiffusionOUL.h"

#include "DiffusionLIPTON.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    SiriusFM::DiffusionCIR CIR(0.5,0.5,0.5);
    std::cout << CIR.mu(1,1);
    return 0;
}
