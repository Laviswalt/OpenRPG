#ifndef VERIFY
#define VERIFY(cond) (assert(cond), printf("%s:%d assert passed\n", __FILE__ , __LINE__))
#endif
