#pragma once

#include <stdint.h>

namespace fops
{
    inline char *i64toa_10(int64_t val, char buf[21], size_t &len)
    {
        char *end = &buf[20];
        char *it = end;
        *it = 0;

        if (val < 0)
        {
            do
            {
                *--it = '0' - (val % 10);
                val /= 10;
            } while (val != 0);
            *--it = '-';
        }
        else
        {
            do
            {
                *--it = '0' + (val % 10);
                val /= 10;
            } while (val != 0);
        }

        len = end - it;
        return it;
    }
} // namespace fops