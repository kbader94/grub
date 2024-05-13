#undef SUFFIX
#undef TRANS_X
#undef TRANS_Y

#define SUFFIX(x) x
#define ADD_X 0
#define ADD_Y 0
#define TRANS_X(x, y) x
#define TRANS_Y(x, y) y
#include "fbblit_rot.h"
#undef SUFFIX
#undef TRANS_X
#undef TRANS_Y

#define SUFFIX(x) x ## _90
#define TRANS_X(x, y) (y)
#define TRANS_Y(x, y) (-(x))
#include "fbblit_rot.h"
#undef SUFFIX
#undef TRANS_X
#undef TRANS_Y

/*
#define SUFFIX(x) x ## _180
#define TRANS_X(x, y) (-(x))
#define TRANS_Y(x, y) (-(y))
#include "fbblit_rot.h"
#undef SUFFIX
#undef TRANS_X
#undef TRANS_Y */

#define SUFFIX(x) x ## _270
#define TRANS_X(x, y) (-(y))
#define TRANS_Y(x, y) (x)
#include "fbblit_rot.h"
#undef SUFFIX
#undef TRANS_X
#undef TRANS_Y

