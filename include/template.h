#ifndef TEMPLATE_H
#define TEMPLATE_H

#ifdef DEBUG
#define TEMPLATE_DEBUG(fmt, ...)                                                   \
    fprintf (stderr, "DEBUG: %s:%d:%s(): " fmt, __FILE__, __LINE__, __func__,  \
             ##__VA_ARGS__)
#else
#define TEMPLATE_DEBUG(fmt, ...)
#endif

#endif
