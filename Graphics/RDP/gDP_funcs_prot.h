#ifndef _GDP_FUNCS_PROT_H
#define _GDP_FUNCS_PROT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Glide64 prototypes */
void glide64gDPSetScissor( uint32_t mode, float ulx, float uly, float lrx, float lry );
void glide64gDPLoadBlock( uint32_t tile, uint32_t ul_s, uint32_t ul_t,
      uint32_t lr_s, uint32_t dxt );
void glide64gDPSetTextureImage(
      int32_t fmt,
      int32_t siz,
      int32_t width,
      int32_t addr);
void glide64gDPSetTile(
      uint32_t fmt,
      uint32_t siz,
      uint32_t line,
      uint32_t tmem,
      uint32_t tile,
      uint32_t palette,
      uint32_t cmt,
      uint32_t maskt,
      uint32_t shiftt,
      uint32_t cms,
      uint32_t masks,
      uint32_t shifts );

void glide64gDPLoadTile(uint32_t tile, uint32_t ul_s, uint32_t ul_t,
      uint32_t lr_s, uint32_t lr_t);

void glide64gDPSetTileSize(uint32_t tile, uint32_t uls, uint32_t ult,
      uint32_t lrs, uint32_t lrt);

void glide64gDPSetTextureImage(int32_t fmt, int32_t siz,
   int32_t width, int32_t addr);

#ifdef __cplusplus
}
#endif


/* GLN64 prototypes */
#ifndef GLIDEN64
#ifdef __cplusplus
extern "C" {
#endif
#endif

void gln64gDPSetScissor( uint32_t mode, float ulx, float uly, float lrx, float lry );
void gln64gDPLoadBlock( uint32_t tile, uint32_t ul_s, uint32_t ul_t,
      uint32_t lr_s, uint32_t dxt );

#ifndef GLIDEN64
#ifdef __cplusplus
}
#endif
#endif

#endif
