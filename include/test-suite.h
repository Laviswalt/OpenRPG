#ifndef VERIFY
#define VERIFY(cond, title) (!(cond))? (printf("%s:%d: %s passed\n", __FILE__, __LINE__, title)):(printf("%s:%d: %s FAILED\n", __FILE__, __LINE__, title))
#endif
