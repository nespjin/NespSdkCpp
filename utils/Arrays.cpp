//
// Team: NESP Technology
// Author: <a href="mailto:1756404649@qq.com">靳兆鲁 Email:1756404649@qq.com</a>
// Time: Created 2021/3/26 21:00
// Project: NespSdkCpp1
//
//


#include <iostream>
#include "../include/Arrays.h"

void Arrays::copy(const int *src, int srcPos, int *dest, int destPos, int length) {
    for (int i = 0; i < length; ++i) {
        *(dest + destPos + i) = *(src + srcPos + i);
    }
}
