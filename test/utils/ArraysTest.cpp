//
// Team: NESP Technology
// Author: <a href="mailto:1756404649@qq.com">靳兆鲁 Email:1756404649@qq.com</a>
// Time: Created 2021/3/27 11:26
// Project: NespSdkCpp1
//
//

#include "../../include/Arrays.h"
#include <iostream>

void Arrays_copyTest() {
    int src[] = {0, 2, 4, 3, 4, 5, 6, 7, 8, 9};
    const int length = 5;
    for (int i = 0; i < 10; ++i) {
        std::cout << "src index = " << i << ",value = " << src[i] << std::endl;
    }
    int dest[length] = {-1};
    Arrays::copy(src, 1, dest, 1, length - 1);
    for (int i = 0; i < length; ++i) {
        std::cout << "dest index = " << i << ",value = " << dest[i] << std::endl;
    }
}



