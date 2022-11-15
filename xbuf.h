#ifndef XBUF_H_
#define XBUF_H_

struct xbuffer
{
	unsigned char *data;
	int end;
	int size;
};

void xbuf_init(struct xbuffer *xbuf);
void xbuf_reset(struct xbuffer *xbuf);
void xbuf_add_byte(struct xbuffer *xbuf, unsigned int b);
void xbuf_add_data(struct xbuffer *xbuf, unsigned char *data, int len);
int xbuf_pop(struct xbuffer *xbuf);
char *xbuf_char_data();
	
#endif
