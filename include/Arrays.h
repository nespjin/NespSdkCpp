//
// Team: NESP Technology
// Author: <a href="mailto:1756404649@qq.com">靳兆鲁 Email:1756404649@qq.com</a>
// Time: Created 2021/3/26 21:00
// Project: NespSdkCpp1
//
//

#ifndef NESPSDKCPP_ARRAYS_H
#define NESPSDKCPP_ARRAYS_H


class Arrays {
public:
    ///
    /// \param src the source array
    /// \param srcPos starting position in the source array.
    /// \param dest the destination array.
    /// \param destPos starting position in the destination data.
    /// \param length the number of array elements to be copied.
    static void copy(const int* src, int srcPos, int* dest, int destPos, int length);

};


#endif //NESPSDKCPP_ARRAYS_H
