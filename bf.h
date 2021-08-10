#ifndef _BF_H_
#define _BF_H_

#ifdef __cplusplus
extern "C" {
#endif

// call this first
void rpython_startup_code(void);

int bf_dofile(char *filename);
int bf_dostring(char *source);

#ifdef __cplusplus
}
#endif

#endif /* _BF_H_ */