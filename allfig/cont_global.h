#ifndef BOLG_GLOBAL_H
#define BOLG_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(BOLG_LIBRARY)
#  define BOLGSHARED_EXPORT Q_DECL_EXPORT
#else
#  define BOLGSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // BOLG_GLOBAL_H
