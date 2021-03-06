#ifndef _http_bundle_h_
#define _http_bundle_h_

#include "sys/atomic.h"

struct http_bundle_t
{
	int32_t ref;
	size_t len;  // used size
	size_t capacity;
	void* ptr;
};

int http_bundle_addref(struct http_bundle_t *bundle);
int http_bundle_release(struct http_bundle_t *bundle);

#endif /* !_http_bundle_h_ */
