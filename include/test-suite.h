#ifndef VERIFY
#define VERIFY(cond, title) (!(cond))? (printf("%s:%d: %s passed", __FILE__, __LINE__, title)):(printf("%s:%d: %s FAILED", __FILE__, __LINE__, title))
#endif
