#include "util.h"

namespace util {
// n보다 큰 최초의 소수를 리턴한다.
mpz_class nextprime(mpz_class n) {
    mpz_class r;
    mpz_nextprime(r.get_mpz_t(), n.get_mpz_t());
    return r;
}
}  // namespace util
