#pragma once
#include <gmpxx.h>

namespace util {

/**
 * @brief n보다 큰 최초의 소수를 리턴한다.
 * 
 * @param n 
 * @return mpz_class n보다 큰 최초의 소수
 */
mpz_class nextprime(mpz_class n);

/**
 * @brief mpz_class to big endian
 * 
 * @tparam It 반복자
 * @param n 변환할 숫자
 * @param begin 반복자 시작
 * @param end 반복자 끝
 */
template <typename It>
void mpz_to_bnd(mpz_class n, It begin, It end) {
    for (It i = end; i != begin; n /= 0x100) {
        // 연속적인 메모리 구조에 빅엔디안 형식으로 n을 써 넣는다.
        *--i = mpz_class{n % 0x100}.get_ui();
    }
}

}  // namespace util
